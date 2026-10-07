# Exercício 2.34

## Enunciado

Qual é a taxa de bits máxima que pode ser alcançada por um modem padrão V.32 se a taxa de baud for 4800 e nenhuma correção de erros for utilizada?

---

## Resolução — @Pins

A constelação do V.32 tem 32 pontos, então cada símbolo carrega log₂32 = 5 bits. Normalmente, 1 dos 5 bits é de paridade, mas o enunciado diz que não há correção de erros, então ele também pode levar dados. A 4800 baud, ou seja, 4800 símbolos por segundo, temos 5 × 4800 = **24.000 bps**.

**Confiança:** alta  
**Referência:** subcapítulo 2.5.2 - loop local

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
