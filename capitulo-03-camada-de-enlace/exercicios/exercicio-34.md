# Exercício 3.34

## Enunciado

No protocolo 3, é possível que o transmissor inicie o timer quando ele já está em execução? Se sim, como isso pode acontecer? Se não, por que é impossível?

---

## Resolução — @Pins

Sim. O transmissor só para o temporizador quando chega um ACK válido com o número esperado. Se chegar um quadro danificado (`cksum_err`) ou um ACK com o número errado, o laço volta ao início, retransmite o quadro e chama `start_timer` de novo, com o temporizador ainda em execução.

**Confiança:** alta    
**Referência:** subcapítulo 3.3.3 - protocolo ARQ

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
