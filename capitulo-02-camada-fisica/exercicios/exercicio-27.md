# Exercício 2.27

## Enunciado

Um receptor CDMA recebe os seguintes chips: (−1 +1 −3 +1 −1 −3 +1 +1). Supondo as sequências de chips definidas na Fig. 2-22(a), quais estações transmitiram e quais bits cada uma enviou?

---

## Resolução — @Pins

Chamando os chips recebidos de S = (−1 +1 −3 +1 −1 −3 +1 +1), temos:

$S\bullet A = [-1 +1 -3 +1 -1 -3 +1 +1]\bullet[-1 -1 -1 +1 +1 -1 +1 +1]/8 = [+1 -1 +3 +1 -1 +3 +1 +1]/8 = 8/8 = 1$

$S\bullet B = [-1 +1 -3 +1 -1 -3 +1 +1]\bullet[-1 -1 +1 -1 +1 +1 +1 -1]/8 = [+1 -1 -3 -1 -1 -3 +1 -1]/8 = -8/8 = -1$

$S\bullet C = [-1 +1 -3 +1 -1 -3 +1 +1]\bullet[-1 +1 -1 +1 +1 +1 -1 -1]/8 = [+1 +1 +3 +1 -1 -3 -1 -1]/8 = 0/8 = 0$

$S\bullet D = [-1 +1 -3 +1 -1 -3 +1 +1]\bullet[-1 +1 -1 -1 -1 -1 +1 -1]/8 = [+1 +1 +3 -1 +1 +3 +1 -1]/8 = 8/8 = 1$

**Resposta:** A e D transmitiram o bit 1, B transmitiu o bit 0 e C não transmitiu.

**Confiança:** alta  
**Referência:** subcapítulo 2.4.4 - multiplexação

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
