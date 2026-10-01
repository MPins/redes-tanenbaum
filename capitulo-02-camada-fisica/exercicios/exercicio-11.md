# Exercício 2.11

## Enunciado

Um sinal binário de 5 GHz é enviado por um canal com uma relação sinal-ruído de 40 dB. Qual é o menor limite superior para a taxa máxima de transmissão de dados? Explique sua resposta.


---

## Resolução — @Pins

Precisamos calcular os limites dados pelos teoremas de **Nyquist** e de **Shannon**. Como ambos representam limites superiores, devemos escolher o menor deles.

#### 1. Limite de Nyquist

A fórmula de Nyquist é:

$$
R_{\text{Nyquist}}=2B\log_2(V)
$$

onde:

- $B = 5 GHz = 5\times10^9\text{Hz}$;
- $V \text{ é o número de níveis do sinal, por ser binário, V=2.}$

Substituindo:

$$
R_{\text{Nyquist}}
=
2(5\times10^9)\log_2(2)
$$

Como:

$$
\log_2(2)=1
$$

temos:

$$
R_{\text{Nyquist}}=10\times10^9\ \text{bits/s}
$$

$$
\boxed{R_{\text{Nyquist}}=10\ \text{Gbit/s}}
$$

#### 2. Limite de Shannon

A fórmula de Shannon é:

$$
R_{\text{Shannon}}
=
B\log_2(1+\text{SNR})
$$

A relação sinal-ruído foi fornecida em decibéis:

$$
\text{SNR}_{dB}=10\log_{10}(\text{SNR})
$$

Logo:

$$
\text{SNR}
=
10^{\frac{40}{10}}
=
10^4
=
10.000
$$

Aplicando Shannon:

$$
R_{\text{Shannon}}
=
5\times10^9\log_2(1+10.000)
$$

$$
R_{\text{Shannon}}
=
5\times10^9\log_2(10.001)
$$

Como:

$$
\log_2(10.001)\approx13{,}288
$$

temos:

$$
R_{\text{Shannon}}
\approx
66{,}44\times10^9\ \text{bits/s}
$$

$$
\boxed{R_{\text{Shannon}}\approx66{,}44\ \text{Gbit/s}}
$$

#### Resultado

A taxa precisa respeitar simultaneamente os dois limites:

$$
R_{\max}
\leq
\min
\left(
R_{\text{Nyquist}},
R_{\text{Shannon}}
\right)
$$

$$
R_{\max}
\leq
\min(10,\ 66{,}44)\ \text{Gbit/s}
$$

Portanto:

$$
\boxed{R_{\max}\leq10\ \text{Gbit/s}}
$$

O menor limite superior é **10 Gbit/s**. Embora a relação sinal-ruído permita teoricamente uma taxa maior segundo Shannon, o uso de apenas dois níveis no sinal binário faz com que o limite de Nyquist seja mais restritivo.

**Confiança:** alta  
**Referência:** subcapítulo 2.4.2 - taxa de transmissão máxima de um canal

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
