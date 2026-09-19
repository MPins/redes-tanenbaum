/*
 * Fluxo de uma mensagem da camada de aplicacao ate a camada fisica,
 * no modelo OSI de sete camadas.
 *
 * Cada camada recebe a mensagem vinda da camada de cima, prende o seu
 * cabecalho na frente, imprime o resultado e entrega para a camada de
 * baixo. A camada fisica encerra a cadeia.
 *
 * Compilar: cc -std=c99 -Wall -Wextra -o osi exercicio-50.c
 * Executar: echo "Ola, redes!" | ./osi
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CABECALHO 64                       /* limite dado no enunciado   */
#define MAX_MSG       4096                     /* mensagem da aplicacao      */
#define CAMADAS       7
#define MAX_QUADRO    (MAX_MSG + CAMADAS * MAX_CABECALHO)

static void camada_aplicacao(const char *msg, size_t len);
static void camada_apresentacao(const char *msg, size_t len);
static void camada_sessao(const char *msg, size_t len);
static void camada_transporte(const char *msg, size_t len);
static void camada_rede(const char *msg, size_t len);
static void camada_enlace(const char *msg, size_t len);
static void camada_fisica(const char *msg, size_t len);

/*
 * Monta cabecalho + mensagem em saida e devolve o tamanho do resultado.
 * A mensagem e tratada como uma sequencia de bytes com tamanho conhecido,
 * e nao como uma string terminada em '\0': um quadro pode conter qualquer
 * byte, inclusive o zero.
 */
static size_t encapsula(char *saida, const char *cabecalho,
                        const char *msg, size_t len)
{
    size_t tam_cabecalho = strlen(cabecalho);

    if (tam_cabecalho > MAX_CABECALHO) {
        fprintf(stderr, "cabecalho \"%s\" passa de %d caracteres\n",
                cabecalho, MAX_CABECALHO);
        exit(EXIT_FAILURE);
    }
    if (tam_cabecalho + len > MAX_QUADRO) {
        fprintf(stderr, "quadro de %zu bytes passa do limite de %d\n",
                tam_cabecalho + len, MAX_QUADRO);
        exit(EXIT_FAILURE);
    }

    memcpy(saida, cabecalho, tam_cabecalho);
    memcpy(saida + tam_cabecalho, msg, len);

    return tam_cabecalho + len;
}

/* %.*s imprime exatamente len bytes, sem depender de um '\0' no fim. */
static void imprime(int nivel, const char *nome, const char *quadro, size_t len)
{
    printf("L%d %-12s %4zu bytes  %.*s\n", nivel, nome, len, (int)len, quadro);
}

static void camada_aplicacao(const char *msg, size_t len)
{
    char quadro[MAX_QUADRO];
    size_t n = encapsula(quadro, "[L7 APP GET /index.html]", msg, len);

    imprime(7, "aplicacao", quadro, n);
    camada_apresentacao(quadro, n);
}

static void camada_apresentacao(const char *msg, size_t len)
{
    char quadro[MAX_QUADRO];
    size_t n = encapsula(quadro, "[L6 APRES utf-8/gzip]", msg, len);

    imprime(6, "apresentacao", quadro, n);
    camada_sessao(quadro, n);
}

static void camada_sessao(const char *msg, size_t len)
{
    char quadro[MAX_QUADRO];
    size_t n = encapsula(quadro, "[L5 SESSAO id=0042]", msg, len);

    imprime(5, "sessao", quadro, n);
    camada_transporte(quadro, n);
}

static void camada_transporte(const char *msg, size_t len)
{
    char quadro[MAX_QUADRO];
    size_t n = encapsula(quadro, "[L4 TCP 49152>80]", msg, len);

    imprime(4, "transporte", quadro, n);
    camada_rede(quadro, n);
}

static void camada_rede(const char *msg, size_t len)
{
    char quadro[MAX_QUADRO];
    size_t n = encapsula(quadro, "[L3 IP 10.0.0.2>93.184.216.34]", msg, len);

    imprime(3, "rede", quadro, n);
    camada_enlace(quadro, n);
}

static void camada_enlace(const char *msg, size_t len)
{
    char quadro[MAX_QUADRO];
    size_t n = encapsula(quadro, "[L2 ETH aa:bb:cc>dd:ee:ff]", msg, len);

    imprime(2, "enlace", quadro, n);
    camada_fisica(quadro, n);
}

/* Ultima camada: nao ha para quem entregar, os bits entram no meio fisico. */
static void camada_fisica(const char *msg, size_t len)
{
    char quadro[MAX_QUADRO];
    size_t n = encapsula(quadro, "[L1 FIS 1000BASE-T]", msg, len);

    imprime(1, "fisica", quadro, n);
    printf("\n%zu bytes transmitidos no meio fisico.\n", n);
}

int main(void)
{
    char msg[MAX_MSG];
    size_t len;

    printf("Mensagem da aplicacao: ");
    fflush(stdout);

    if (fgets(msg, sizeof msg, stdin) == NULL) {
        fprintf(stderr, "\nnenhuma mensagem lida na entrada padrao\n");
        return EXIT_FAILURE;
    }

    len = strlen(msg);
    if (len > 0 && msg[len - 1] == '\n')  /* o '\n' nao faz parte da mensagem */
        msg[--len] = '\0';

    printf("\n");
    camada_aplicacao(msg, len);

    return EXIT_SUCCESS;
}
