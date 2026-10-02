# Exercício 2.15

## Enunciado

Se um sinal binário for enviado por um canal de **3 kHz**, cuja relação sinal-ruído seja de **20 dB**, qual será a taxa máxima de transmissão de dados que poderá ser alcançada?

---

## Resolução — @Pins

Solução através da fórmula de Shannon:

$$R_{\text{Shannon}}=B\log_2(1+\text{SNR})$$

A relação sinal-ruído foi fornecida em decibéis:

$$\text{SNR}_{dB}=10\log_{10}(\text{SNR})$$

Logo:

$$\text{SNR}=10^{\frac{20}{10}}=10^2=100$$

Aplicando Shannon:

$$R_{\text{Shannon}}=3\times10^3\log_2(1+100) = 3\times10^3\times6,658 \approx 19.974 \text{ bits/s}$$

**Confiança:** alta  
**Referência:** subcapítulo 2.4.2 - taxa de transmissão máxima de um canal

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
