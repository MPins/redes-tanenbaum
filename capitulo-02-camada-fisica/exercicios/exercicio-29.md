# Exercício 2.29

## Enunciado

Qual é a probabilidade de que duas sequências de chips aleatórias de comprimento 128 tenham um produto interno normalizado de 1/4 ou maior?

---

## Resolução — @Pins

O produto interno normalizado de duas sequências de m chips é:

$$S \bullet T = \frac{1}{m}\sum_{i=1}^{m} S_i T_i$$

Com k coincidências em 128 chips, há 128 − k discrepâncias:

$$S \bullet T = \frac{k - (128 - k)}{128} = \frac{2k - 128}{128}\ge \frac{1}{4}$$

$$2k - 128 \ge 32 \quad\Rightarrow\quad 2k \ge 160 \quad\Rightarrow\quad k \ge 80$$

Ou seja, as duas sequências precisam coincidir em pelo menos 80 das 128 posições.

Cada posição coincide com probabilidade 1/2, independente das outras. Então k segue uma binomial com n = 128 e p = 1/2:

$$P(k) = \binom{128}{k}\left(\frac{1}{2}\right)^{128}$$

Queremos a soma para k de 80 a 128:

$$P(k \ge 80) = \frac{1}{2^{128}}\sum_{k=80}^{128}\binom{128}{k}$$

```python
from math import comb
p = sum(comb(128, k) for k in range(80, 129)) / 2**128
print(p)   # 0.0029626033033715747
```

**Resposta:** a probabilidade é de aproximadamente 0,3%, ou seja, cerca de 3 em cada 1000 pares de sequências aleatórias.

Com sequências longas, duas sequências aleatórias quase sempre ficam próximas da ortogonalidade, por isso a interferência entre estações no CDMA tende a ser pequena.

**Confiança:** alta  
**Referência:** subcapítulo 2.4.4 - multiplexação

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
