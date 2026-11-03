# Exercício 4.11

## Enunciado

Um conjunto de $2^n$ estações usa o protocolo de percurso adaptativo em árvore (*adaptive tree walk*) para arbitrar o acesso a um cabo compartilhado. Em um certo instante, duas delas ficam prontas. Quais são os números mínimo, máximo e médio de slots para percorrer a árvore se $2^n \gg 1$?

---

## Resolução — @Pins

Um conjunto de $2^n$ estações dará uma árvore de altura $n$, onde a raiz fica no nível 0, e as folhas ficam no nível $n$.

O menor número de slots possível é 3, quando as estações que desejam transmitir se encontram cada uma em metades opostas da árvore.  
O maior número de slots possível é $2n + 1$, quando as estações que desejam transmitir são irmãs e será necessário descer todos os níveis da árvore para identificá-las.

Para a média, se as duas estações se separam no nível $k$, a busca gasta $2k+3$ slots ($k+1$ colisões, $k$ irmãos ociosos e 2 sucessos). A chance de se separarem logo na raiz é 1/2, no nível seguinte 1/4, depois 1/8, e assim por diante:

$$\bar{S} \approx 3\cdot\tfrac{1}{2} + 5\cdot\tfrac{1}{4} + 7\cdot\tfrac{1}{8} + \dots$$

Separando cada termo $2k+3$ em $3 + 2k$:

$$\bar{S} \approx 3\left(\tfrac{1}{2} + \tfrac{1}{4} + \tfrac{1}{8} + \dots\right) + 2\left(\tfrac{0}{2} + \tfrac{1}{4} + \tfrac{2}{8} + \tfrac{3}{16} + \dots\right) = 3 \cdot 1 + 2 \cdot 1 = 5$$

**Resposta:** mínimo de 3 slots, máximo de $2n+1$ slots e média de aproximadamente 5 slots.

**Confiança:** alta    
**Referência:** subcapítulo 4.2.4 - protocolos de contenção limitada

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
