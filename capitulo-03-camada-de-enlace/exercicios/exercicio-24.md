# Exercício 3.24

## Enunciado

Um fluxo de bits 10011101 é transmitido usando o método de CRC padrão descrito no texto. O polinômio gerador é $x^3 + 1$. Mostre a sequência de bits efetivamente transmitida. Suponha que o terceiro bit a partir da esquerda seja invertido durante a transmissão. Mostre que esse erro é detectado no receptor. Dê um exemplo de erros de bits na sequência transmitida que não serão detectados pelo receptor.

---

## Resolução — @Pins

Como o gerador tem grau 3, acrescentamos 3 zeros à mensagem e dividimos:

```
Fluxo de bits 1 0 0 1 1 1 0 1 0 0 0
Gerador       1 0 0 1
              -------
              0 0 0 0 1 1 0 1 0 0 0
                      1 0 0 1
                      -------
              0 0 0 0 0 1 0 0 0 0 0
                        1 0 0 1
                        -------
              0 0 0 0 0 0 0 0 1 0 0
```

**Sequência transmitida:** o resto 100 substitui os 3 zeros, então é transmitido 10011101100.

Agora vamos detectar caso haja erro no terceiro bit a partir da esquerda. O receptor divide a sequência recebida como chegou, sem acrescentar zeros:

```
Transmitido 1 0 0 1 1 1 0 1 1 0 0
recebido    1 0 1 1 1 1 0 1 1 0 0
            1 0 0 1
            -------
            0 0 1 0 1 1 0 1 1 0 0
                1 0 0 1
                -------
            0 0 0 0 1 0 0 1 1 0 0
                    1 0 0 1
                    -------
            0 0 0 0 0 0 0 0 1 0 0
```

**Erro no 3º bit:** o resto deu 100, que é diferente de zero. Para o receptor isso significa que a sequência recebida não é um múltiplo do gerador, então houve erro. O erro foi detectado.

**Erro não detectado:** o resto que o receptor obtém depende só do padrão de erro, isto é, de quais bits foram invertidos. Se esse padrão for múltiplo do gerador, o resto dá zero e o erro passa. O múltiplo mais simples é o próprio gerador, 1001: inverter dois bits que estão a 3 posições um do outro. Por exemplo, o 1º e o 4º bits.

**Confiança:** alta    
**Referência:** subcapítulo 3.2.2 - códigos de detecção de erros

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
