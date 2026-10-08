# Exercício 2.38

## Enunciado

Qual relação sinal-ruído é necessária para transmitir uma portadora T1 em uma linha de 1 MHz?

---

## Resolução — @Pins

T1 é o sistema norte-americano que multiplexa 24 canais de voz num único tronco digital, usando TDM (multiplexação por divisão de tempo).

- cada canal de voz é amostrado 8000 vezes por segundo, a cada 125 µs;
- cada amostra tem 8 bits;
- a cada 125 µs, o T1 envia um quadro com uma amostra de cada um dos 24 canais, mais 1 bit de enquadramento (framing), que marca o início do quadro.

Tamanho do quadro: 24 × 8 + 1 = 193 bits a cada 125 µs. Logo:

$$\frac{193\text{ bits}}{125\ \mu\text{s}} = 193 \times 8000 = 1{,}544\text{ Mbps}$$

Então "transmitir uma portadora T1" quer dizer transmitir 1,544 Mbps.

Aplica Shannon:

$$R = B\log_2(1 + \text{SNR})$$

R = 1,544 Mbps (a taxa do T1);  
B = 1 MHz (a linha).  

$$1{,}544\times10^6 = 1\times10^6 \log_2(1+\text{SNR})$$

$$1{,}544 = \log_2(1+\text{SNR})$$

$$2^{1{,}544} = 1+\text{SNR}$$

$$\text{SNR} = 2{,}916 - 1 = 1{,}916$$

Em decibéis:

$$\text{SNR}_{dB} = 10\log_{10}(1{,}916) \approx 2{,}8\text{ dB}$$

**Confiança:** alta  
**Referência:** subcapítulo 2.5.3 - troncos e multiplexação

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
