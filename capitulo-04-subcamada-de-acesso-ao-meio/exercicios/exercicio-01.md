# Exercício 4.1

## Enunciado

Para este problema, use uma fórmula deste capítulo, mas primeiro enuncie a fórmula. Quadros chegam aleatoriamente a um canal de 100 Mbps para transmissão. Se o canal estiver ocupado quando um quadro chegar, ele espera sua vez em uma fila. O comprimento dos quadros tem distribuição exponencial, com média de 10.000 bits/quadro. Para cada uma das taxas de chegada de quadros a seguir, dê o atraso experimentado pelo quadro médio, incluindo tanto o tempo de espera na fila quanto o tempo de transmissão.

(a) 90 quadros/s.  
(b) 900 quadros/s.  
(c) 9.000 quadros/s.

---

## Resolução — @Pins

A fórmula para alocação estática de canal:

$$T = \frac{1}{\mu C - \lambda}$$

(a) 90 quadros/s

$$T = \frac{1}{10^{-4}\times 10^8 - 90}=\frac{1}{10^4 - 90}=\frac{1}{9.910}\approx 0{,}0001009\text{ s}\approx 100{,}9\,\mu\text{s}$$

(b) 900 quadros/s

$$T = \frac{1}{10^{-4}\times 10^8 - 900}=\frac{1}{10^4 - 900}=\frac{1}{9.100}\approx 0{,}0001099\text{ s}\approx 109{,}9\,\mu\text{s}$$

(c) 9.000 quadros/s

$$T = \frac{1}{10^{-4}\times 10^8 - 9.000}=\frac{1}{10^4 - 9.000}=\frac{1}{1.000}= 0{,}001\text{ s}= 1\text{ ms}$$

**Confiança:** alta  
**Referência:** subcapítulo 4.1.1 - alocação estática de canal

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
