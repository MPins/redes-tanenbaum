# Exercício 3.43

## Enunciado

No protocolo 6, `MAX_SEQ` = $2^n$ − 1. Embora essa condição seja obviamente desejável para usar com eficiência os bits do cabeçalho, não demonstramos que ela é essencial. O protocolo funciona corretamente com `MAX_SEQ` = 4, por exemplo?

---

## Resolução — @Pins

Vamos imaginar que `MAX_SEQ` = 4, neste caso o `NR_BUFS` seria = 2 (`NR_BUFS=((MAX_SEQ+1)/2)`):

- o transmissor envia 2 quadros, de 0 a 1
- o piggybacked `ACK` para o quadro 1 volta para o transmissor
- o transmissor envia novamente 2 quadros, de 2 a 3
- o piggybacked `ACK` para o quadro 3 volta para o transmissor
- o transmissor envia novamente 2 quadros, de 4 a 0, porém o quadro 4 não chega, quadro 0 chega e é armazenado na posição 0 do buffer, `arrived[0]` vira verdadeiro; como `frame_expected` é 4, o teste do `while (arrived[frame_expected % NR_BUFS])` dá verdadeiro e o quadro 0 é enviado à camada de rede como se fosse o quadro 4, a janela é deslocada, sendo agora 0 a 1, e o quadro 4 será descartado quando chegar.

Portanto o protocolo não funciona corretamente com `MAX_SEQ` = 4. `MAX_SEQ` precisa ser ímpar, para que `MAX_SEQ` + 1 seja múltiplo de `NR_BUFS` e números de sequência consecutivos caiam em buffers diferentes.

**Confiança:** alta  
**Referência:** subcapítulo 3.4.2 - exemplos de protocolos full-duplex sliding window

---


## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
