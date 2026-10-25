# Exercício 3.41

## Enunciado

No protocolo 6, o código de chegada de quadros tem uma seção usada para os NAKs. Essa seção é executada se o quadro recebido for um NAK e se outra condição for satisfeita. Dê um cenário em que a presença dessa outra condição seja essencial.

---

## Resolução — @Pins

O NAK pede o quadro `r.ack + 1` (o seguinte ao último recebido em ordem), e a outra condição verifica se esse quadro está dentro da janela do transmissor, isto é, se já foi enviado e ainda não foi confirmado. Só nesse caso ele é retransmitido.

Cenário em que a condição é essencial: A envia o quadro 0, B o aceita e envia o ACK, mas o ACK se perde. O temporizador de A expira e A retransmite o quadro 0. B, que agora espera o quadro 1, recebe o 0 de novo e envia um NAK com `ack = 0`, pedindo o quadro 1. Sem a condição, A "retransmitiria" o quadro 1, que ainda nem foi enviado (o buffer poderia conter lixo). Com ela, A vê que o quadro 1 está fora da janela e não envia nada; o ACK de carona no NAK ainda confirma o quadro 0.

**Confiança:** alta   
**Referência:** subcapítulo 3.4.2 - exemplos de protocolos full-duplex sliding window

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
