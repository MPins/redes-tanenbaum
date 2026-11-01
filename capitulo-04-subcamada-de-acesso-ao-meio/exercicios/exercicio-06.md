# Exercício 4.6

## Enunciado

Qual é a duração de um *slot* de disputa no CSMA/CD para:

(a) um cabo de par paralelo (*twin-lead*) de 2 km, em que a velocidade de propagação do sinal é 82% da velocidade de propagação no vácuo?  
(b) um cabo de fibra óptica multimodo de 40 km, em que a velocidade de propagação do sinal é 65% da velocidade de propagação no vácuo?

---

## Resolução — @Pins

**(a) twin-lead** - a velocidade de propagação é de 0,82 vezes 300.000 km/s, ou seja, 246.000 km/s, o tempo de propagação em uma distância de 2 km é:

$$T_p=\frac{2\text{ km}}{246{.}000\text{ km/s}}\approx 8{,}13\,\mu\text{s}$$

**Resposta:** Considerando o tempo de ida e volta do sinal teremos um tempo de disputa de 2 vezes $T_p$, ou seja, 16,26 μs.

**(b) fibra multimodo** - a velocidade de propagação é de 0,65 vezes 300.000 km/s, ou seja, 195.000 km/s, o tempo de propagação em uma distância de 40 km é:

$$T_p=\frac{40\text{ km}}{195{.}000\text{ km/s}}\approx 205{,}13\,\mu\text{s}$$

**Resposta:** Considerando o tempo de ida e volta do sinal teremos um tempo de disputa de 2 vezes $T_p$, ou seja, 410,26 μs.

**Confiança:** alta   
**Referência:** subcapítulo 4.2.2 - protocolos CSMA

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
