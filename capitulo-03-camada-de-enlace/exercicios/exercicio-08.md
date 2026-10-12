# Exercício 3.8

## Enunciado

Para oferecer mais confiabilidade do que um único bit de paridade pode dar, um esquema de codificação para detecção de erros usa um bit de paridade para verificar todos os bits de numeração ímpar e um segundo bit de paridade para todos os bits de numeração par. Qual é a distância de Hamming desse código?

---

## Resolução — @Pins

Com este esquema conseguimos detectar erro de 1 bit ímpar e de 1 bit par, mas não podemos dizer que é possível detectar erro de até dois bits porque detectaria apenas se os bits não forem os dois pares ou ímpares simultaneamente. Sendo assim a distância de Hamming é 2, a mesma do bit de paridade único.

**Confiança:** alta  
**Referência:** subcapítulo 3.2.1 - códigos de correção de erro

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
