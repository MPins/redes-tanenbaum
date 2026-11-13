# Exercício 4.28

## Enunciado

Suponha que uma LAN 802.11b de 11 Mbps esteja transmitindo quadros de 64 bytes colados um atrás do outro (back-to-back) por um canal de rádio com taxa de erro de bit de $10^{-7}$. Quantos quadros por segundo serão danificados, em média?

---

## Resolução — @Pins

Com quadros de 64 bytes (512 bits) a uma velocidade de 11Mbps passam $Q_s$ quadros por segundo:

$$Q_s=\frac{1}{\frac{512}{11\times10^6}}\approx21{.}484\text{ quadros/s}$$

A chance de ter pelo menos um erro em um quadro (512 bits) é:

$$E_Q = 1-(1-10^{-7})^{512}\approx5{,}12\times10^{-5}$$

Quantos quadros viriam errados em 1 segundo:

$$Q_{e/s}\approx5{,}12\times10^{-5}\times21{.}484\approx1{,}1$$

**Confiança:** alta  
**Referência:** subcapítulo 4.4 - Wireless LANs

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
