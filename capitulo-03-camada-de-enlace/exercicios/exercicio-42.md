# Exercício 3.42

## Enunciado

Considere o funcionamento do protocolo 6 em uma linha de 1 Mbps sem erros. O tamanho máximo do quadro é de 1.000 bits. Novos pacotes são gerados a cada 1 segundo. O intervalo de *timeout* é de 10 ms. Se o temporizador especial de confirmação fosse eliminado, ocorreriam *timeouts* desnecessários. Quantas vezes, em média, cada mensagem seria transmitida?

---

## Resolução — @Pins

O ciclo não chega a se repetir. O transmissor envia um quadro que chega ao receptor, que o aceita (`frame_expected` avança e `no_nak` fica verdadeiro), mas não envia ACK, porque não há dados para levá-lo de carona. Depois de 10 ms, o transmissor retransmite o quadro.

O receptor recebe um quadro com número diferente do esperado (ele já espera o seguinte), com `no_nak` verdadeiro, e então envia um NAK, que leva de carona o ACK do primeiro quadro enviado (ver [exercício 37](exercicio-37.md)).

A linha não tem erros, então o NAK chega. O transmissor processa o ACK, para o temporizador e libera o quadro. O NAK pede o quadro seguinte, que ainda não foi enviado e portanto não é "retransmitido" (ver [exercício 41](exercicio-41.md)).

Então o ciclo para logo na primeira retransmissão: cada mensagem é transmitida 2 vezes, a original e uma retransmissão desnecessária.

**Resposta:** 2

**Confiança:** alta   
**Referência:** subcapítulo 3.4.2 - exemplos de protocolos full-duplex sliding window

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
