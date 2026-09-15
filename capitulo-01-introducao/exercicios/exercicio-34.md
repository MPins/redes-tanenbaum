# Exercício 1.34

## Enunciado

Qual era o comprimento de um bit, em metros, no padrão 802.3 original? Considere uma taxa de transmissão de **10 Mbps** e suponha que a velocidade de propagação do sinal no cabo coaxial seja igual a \(2/3\) da velocidade da luz no vácuo.


---

## Resolução — @Pins

A uma taxa de 10 Mbps, a duração de um bit é:

$$
t_{\text{bit}}
=
\frac{1}{10 \times 10^6}
=
10^{-7}\text{ s}
$$

A velocidade de propagação do sinal no cabo coaxial é:

$$
v
=
\frac{2}{3}\times 3\times10^8
=
2\times10^8\text{ m/s}
$$

O comprimento de um bit corresponde à distância percorrida pelo sinal durante o tempo de transmissão desse bit:

$$
d=v\times t_{\text{bit}}
$$

$$
d
=
2\times10^8 \times 10^{-7}
=
\boxed{20\text{ m}}
$$

Portanto, no padrão 802.3 original, um bit possuía comprimento físico de aproximadamente 20 metros no cabo coaxial.


**Confiança:** alta  
**Referência:** NA

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
