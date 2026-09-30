# Exercício 2.9

## Enunciado

Um feixe de laser com **1 mm de largura** é direcionado para um detector também com **1 mm de largura**, localizado a **100 metros de distância**, no telhado de um edifício. Qual deve ser o desvio angular do laser, em graus, para que o feixe deixe de atingir o detector?

---

## Resolução — @Pins

O feixe e o detector possuem 1 mm de largura, o feixe deixa completamente de atingir o detector quando seu deslocamento lateral chega a 1 mm.
Isso acontece porque, inicialmente, seus centros estão alinhados. Para não haver nenhuma sobreposição, o centro do feixe precisa se deslocar pela soma dos dois raios:
$$\frac{1\ \text{mm}}{2}+\frac{1\ \text{mm}}{2}=1\ \text{mm}$$
Formamos então um triângulo retângulo:
- cateto oposto: 1 mm =0,001 m;
- cateto adjacente: 100 m;
- ângulo: $\theta$, será:  

$$\tan(\theta)=\frac{0{,}001}{100}=10^{-5}$$
Logo:  
$$\theta=\arctan(10^{-5})$$
Como o ângulo é muito pequeno:

$$\theta\approx10^{-5}\ \text{rad}$$

Convertendo de radianos para graus:

$$\theta\approx10^{-5}\times\frac{180}{\pi}$$

$$\boxed{\theta\approx0{,}000573^\circ}$$

Portanto, um desvio angular de apenas aproximadamente $0,000573^o$ já faz o feixe deixar completamente de atingir o detector.  

A expressão “desvio máximo” pode confundir: esse é o menor desvio angular que provoca uma perda completa do sinal.

**Confiança:** alta  
**Referência:** NA

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
