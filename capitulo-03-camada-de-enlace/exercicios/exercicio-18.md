# Exercício 3.18

## Enunciado

Dê uma fórmula para o limite inferior do número de bits redundantes r que precisam ser acrescentados a uma mensagem m para corrigir todos os erros simples e duplos.

---

## Resolução — @Pins

Com m bits de dados e r bits de verificação, e n = m + r, temos a possibilidade de nenhum bit ter invertido, temos n possiblidades de 1 bit estar invertido e $\binom{n}{2} = \dfrac{(n)(n-1)}{2}=\dfrac{n^2-n}{2}$ possibilidades de pares sem ordem e sem repetição. Com r bits de paridade só dá para formar $2^r$ combinações diferentes. Para não termos situações diferentes com a mesma combinação nos bits de paridade precisamos que:

$$ 2^r \ge \dfrac{(m + r)^2 - m - r}{2} + m + r + 1$$

$$ 2^r \ge \dfrac{(m + r)^2 + m + r +2}{2}$$


**Confiança:** alta  
**Referência:** subcapítulo 3.2.1 - códigos de correção de erro

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
