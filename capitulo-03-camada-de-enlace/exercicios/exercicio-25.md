# Exercício 3.25

## Enunciado

Um fluxo de bits 11100110 é transmitido usando o método de CRC padrão descrito no texto. O polinômio gerador é $x^4 + x^3 + 1$. Mostre a sequência de bits efetivamente transmitida. Suponha que o terceiro bit a partir da esquerda seja invertido durante a transmissão. Mostre que esse erro é detectado no receptor. Dê um exemplo de erros de bits na sequência transmitida que não serão detectados pelo receptor.

---

## Resolução — @Pins

Como o gerador tem grau 4, acrescentamos 4 zeros à mensagem e dividimos:

```
Fluxo de bits 1 1 1 0 0 1 1 0 0 0 0 0
Gerador       1 1 0 0 1
              ---------
              0 0 1 0 1 1 1 0 0 0 0 0
                  1 1 0 0 1
                  ---------
                  0 1 1 1 0 0 0 0 0 0
                    1 1 0 0 1
                    ---------
                    0 0 1 0 1 0 0 0 0
                        1 1 0 0 1
                        ---------
                        0 1 1 0 1 0 0
                          1 1 0 0 1
                          ---------
                          0 0 0 1 1 0

Resto: 0 1 1 0
```

**Sequência transmitida:** o resto 0110 (os 4 últimos bits) substitui os 4 zeros, então é transmitido 111001100110.

Agora vamos detectar caso haja erro no terceiro bit a partir da esquerda. O receptor divide a sequência recebida como chegou, sem acrescentar zeros:

```
Transmitido 1 1 1 0 0 1 1 0 0 1 1 0
recebido    1 1 0 0 0 1 1 0 0 1 1 0
            1 1 0 0 1
            ---------
            0 0 0 0 1 1 1 0 0 1 1 0
                    1 1 0 0 1
                    ---------
            0 0 0 0 0 0 1 0 1 1 1 0
                        1 1 0 0 1
                        ---------
            0 0 0 0 0 0 0 1 1 1 0 0
                          1 1 0 0 1
                          ---------
            0 0 0 0 0 0 0 0 0 1 0 1
```

**Erro no 3º bit:** o resto deu 0101, que é diferente de zero. Para o receptor isso significa que a sequência recebida não é um múltiplo do gerador, então houve erro. O erro foi detectado.

**Erro não detectado:** o resto que o receptor obtém depende só do padrão de erro, isto é, de quais bits foram invertidos. Se esse padrão for múltiplo do gerador, o resto dá zero e o erro passa. O múltiplo mais simples é o próprio gerador, 11001: por exemplo, inverter o 1º, o 2º e o 5º bits:

**Confiança:** alta  
**Referência:** subcapítulo 3.2.2 - códigos de detecção de erros

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
