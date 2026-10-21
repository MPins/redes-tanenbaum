# Exercício 3.27

## Enunciado

Na discussão do protocolo ARQ na Seção 3.3.3, foi apresentado um cenário que resultava no receptor aceitando duas cópias do mesmo quadro devido à perda de um quadro de confirmação. É possível que um receptor aceite várias cópias do mesmo quadro quando nenhum dos quadros (de mensagem ou de confirmação) é perdido?

---

## Resolução — @Pins

Não. Mesmo sem perda de quadros, um *timeout* curto demais pode fazer o transmissor retransmitir antes de o ACK chegar, e o receptor recebe uma cópia do quadro. Mas, como no Protocolo 3 o receptor guarda o número de sequência do próximo quadro esperado (`frame_expected`), ele reconhece a cópia e a descarta, sem entregá-la à camada de rede. Sem números de sequência, essa cópia seria aceita.

**Confiança:** alta  
**Referência:** subcapítulo 3.3.3 - protocolo ARQ

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
