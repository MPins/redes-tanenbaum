# Exercício 1.50

## Enunciado

Escreva um programa que implemente o fluxo de uma mensagem da camada mais alta até a camada mais baixa do modelo de protocolos de 7 camadas. Seu programa deve conter uma função de protocolo separada para cada camada. Os cabeçalhos de protocolo são sequências de até 64 caracteres. Cada função de protocolo possui dois parâmetros: uma mensagem recebida do protocolo da camada superior (um buffer de caracteres) e o tamanho dessa mensagem. Essa função prende o seu cabeçalho na frente da mensagem, imprime a nova mensagem na saída padrão e em seguida invoca a função de protocolo da camada inferior. A entrada do programa é uma mensagem de aplicação.


---

## Resolução — @Pins

O programa está em [`exercicio-50.c`](exercicio-50.c), escrito em C.

### Estrutura

São sete funções de protocolo, uma por camada, todas com a mesma assinatura:

```c
static void camada_sessao(const char *msg, size_t len);
```

Cada uma faz sempre as mesmas três coisas: monta `cabeçalho + mensagem` em um buffer, imprime o resultado e chama a camada de baixo. A camada física encerra a cadeia, pois não há para quem entregar — os bits entram no meio.

O tamanho vai em um parâmetro separado porque um quadro é uma sequência de bytes, e não uma string terminada em `\0`. Um pacote real pode conter qualquer byte, inclusive o zero, e o fim dos dados é marcado por um campo de comprimento ou por um delimitador, nunca por um terminador de string C. Por isso o programa usa `memcpy` em vez de `strcat`, e imprime com `%.*s`, que escreve exatamente `len` bytes.

O limite de 64 caracteres para o cabeçalho, dado no enunciado, é verificado em tempo de execução, e o buffer de cada camada é dimensionado como a mensagem máxima mais os sete cabeçalhos.

### Compilação e execução

```bash
cc -std=c99 -Wall -Wextra -o osi exercicio-50.c
echo "Ola, redes!" | ./osi
```

### Saída

```
L7 aplicacao      35 bytes  [L7 APP GET /index.html]Ola, redes!
L6 apresentacao   56 bytes  [L6 APRES utf-8/gzip][L7 APP GET /index.html]Ola, redes!
L5 sessao         75 bytes  [L5 SESSAO id=0042][L6 APRES utf-8/gzip][L7 APP GET /index.html]Ola, redes!
L4 transporte     92 bytes  [L4 TCP 49152>80][L5 SESSAO id=0042][L6 APRES utf-8/gzip][L7 APP GET /index.html]Ola, redes!
L3 rede          122 bytes  [L3 IP 10.0.0.2>93.184.216.34][L4 TCP 49152>80][L5 SESSAO id=0042][L6 APRES utf-8/gzip][L7 APP GET /index.html]Ola, redes!
L2 enlace        148 bytes  [L2 ETH aa:bb:cc>dd:ee:ff][L3 IP 10.0.0.2>93.184.216.34][L4 TCP 49152>80][L5 SESSAO id=0042][L6 APRES utf-8/gzip][L7 APP GET /index.html]Ola, redes!
L1 fisica        167 bytes  [L1 FIS 1000BASE-T][L2 ETH aa:bb:cc>dd:ee:ff][L3 IP 10.0.0.2>93.184.216.34][L4 TCP 49152>80][L5 SESSAO id=0042][L6 APRES utf-8/gzip][L7 APP GET /index.html]Ola, redes!

167 bytes transmitidos no meio fisico.
```

### Observações

**A sobrecarga dos cabeçalhos fica visível.** Para 11 bytes de dado útil, o quadro entregue ao meio físico tem 167 bytes: mais de 90% do que trafega é cabeçalho. Com uma mensagem vazia, o programa ainda produz 156 bytes. É o argumento prático de por que cabeçalho real é binário e compacto, e não texto legível como neste protótipo.

**O programa conta bytes, não caracteres.** A mensagem `Olá, ção!` tem 9 caracteres e 12 bytes, porque cada acento ocupa dois bytes em UTF-8. É o mesmo que acontece na rede: o que trafega são octetos.

**A camada de enlace coloca apenas o cabeçalho.** Foi o que o enunciado pediu. Na prática, ela acrescenta também um *trailer* ao final do quadro, com o campo de verificação de erro (FCS), o que faria a mensagem crescer nas duas pontas nessa camada.

**A camada física, a rigor, não acrescenta cabeçalho.** Ela transmite os bits do quadro recebido. O cabeçalho `[L1 FIS ...]` existe aqui apenas para atender ao enunciado, que pede uma função de protocolo por camada.

**As funções `encapsula` e `imprime` são compartilhadas** pelas sete camadas, para não repetir o mesmo `memcpy` sete vezes. As sete funções de protocolo pedidas continuam existindo, cada uma com os dois parâmetros do enunciado.

**Confiança:** alta
**Referência:** seção 1.4 do livro — modelos de referência OSI e TCP/IP

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
