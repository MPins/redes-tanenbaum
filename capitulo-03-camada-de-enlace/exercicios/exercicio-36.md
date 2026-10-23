# Exercício 3.36

## Enunciado

Imagine um protocolo de janela deslizante que usa tantos bits para os números de sequência que nunca ocorre a volta ao início (*wraparound*). Que relações devem valer entre as quatro bordas das janelas e o tamanho da janela, que é constante e igual para o transmissor e o receptor?

---

## Resolução — @Pins

Chamando de $S_{\text{inf}}$ e $S_{\text{sup}}$ as bordas inferior e superior da janela do transmissor (quadro mais antigo ainda sem confirmação e último quadro enviado), de $R_{\text{inf}}$ e $R_{\text{sup}}$ as bordas da janela do receptor (próximo quadro esperado e último quadro aceito) e de W o tamanho da janela:

$$0 \le S_{\text{sup}} - S_{\text{inf}} + 1 \le W$$

O transmissor pode ter de nenhum até W quadros enviados e ainda não confirmados.

$$R_{\text{sup}} - R_{\text{inf}} + 1 = W$$

A janela do receptor tem sempre exatamente W posições.

$$S_{\text{inf}} \le R_{\text{inf}} \le S_{\text{sup}} + 1$$

O receptor não pode estar esperando um quadro que ainda não foi enviado ($R_{\text{inf}} \le S_{\text{sup}} + 1$), e o transmissor não pode ter recebido a confirmação de um quadro que o receptor ainda não recebeu ($S_{\text{inf}} \le R_{\text{inf}}$).

**Confiança:** alta   
**Referência:** subcapítulo 3.4.2 - exemplos de protocolos full-duplex sliding window

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
