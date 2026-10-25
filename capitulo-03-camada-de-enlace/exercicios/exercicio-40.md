# Exercício 3.40

## Enunciado

Suponha que o caso de erros de checksum fosse removido do comando `switch` do protocolo 6. Como essa mudança afetaria o funcionamento do protocolo?

---

## Resolução — @Pins

Removendo o caso de erros de checksum o NAK seria omitido, e ele é o responsável pela recuperação mais rápida em caso de erro. De toda forma o quadro enviado ficaria sem ACK e seria retransmitido ao fim do temporizador daquele quadro específico. Ou seja o protocolo se recuperaria, mas perderia alguma eficiência.

O NAK ainda seria enviado quando chegasse o próximo quadro fora de ordem, então a perda de eficiência pesa mais quando o quadro danificado é o último de uma sequência: nada mais chega para provocar o NAK, e só o *timeout* resolve.

**Confiança:** alta    
**Referência:** subcapítulo 3.4.2 - exemplos de protocolos full-duplex sliding window

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
