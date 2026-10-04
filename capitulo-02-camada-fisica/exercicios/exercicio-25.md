# Exercício 2.25

## Enunciado

Na discussão sobre a ortogonalidade das sequências de chips do CDMA, foi afirmado que, se $S \bullet T = 0$, então $S \bullet \overline{T}$ também é 0. Prove isso.

---

## Resolução — @Pins

O produto interno normalizado de duas sequências de m chips é:

$$S \bullet T = \frac{1}{m}\sum_{i=1}^{m} S_i T_i$$

Ou seja: multiplica chip a chip, soma tudo e divide por m.

Aplicando a definição a S e $\overline{T}$:

$$S \bullet \overline{T} = \frac{1}{m}\sum_{i=1}^{m} S_i\overline{T}_i$$

como $\overline{T}_i = -T_i$:

$$= \frac{1}{m}\sum_{i=1}^{m} S_i(-T_i)$$

como −1 multiplica todos os termos, então sai da soma:

$$= -\frac{1}{m}\sum_{i=1}^{m} S_iT_i = -(S \bullet T)$$

Se $S \bullet T = 0 \text{, então } S \bullet \overline{T} = -0 = 0$

**Confiança:** alta  
**Referência:** subcapítulo 2.4.4 - multiplexação

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
