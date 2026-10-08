# Exercício 2.39

## Enunciado

Compare a taxa de dados máxima de um canal de 4 kHz sem ruído utilizando:

(a) Codificação analógica (por exemplo, QPSK) com 2 bits por amostra.

(b) O sistema PCM do T1.

---

## Resolução — @Pins

Para calcularmos a taxa em (a) aplicamos Nyquist:

$$R_{\max} = 2B\log_2 V$$

"2 bits por amostra" significa que cada símbolo carrega 2 bits, ou seja, $\log_2 V = 2$.

$$R_{\max} = 2 \times 4000 \times 2 = \textbf{16 kbps}$$

Para calcularmos a taxa em (b): 

Em cada canal do T1, 7 bits são de dados e 1 bit é de sinalização (controle), e o intervalo entre amostras é de 125 µs. Então a taxa de dados útil por canal é:

$$7 \times \frac{1}{125\times10^{-6}} = 7\times8.000 = \textbf{56 kbps}$$

O PCM do T1 atinge 3,5 vezes a taxa do QPSK, porque codifica cada amostra com 7 bits em vez de 2.

**Confiança:** alta  
**Referência:** subcapítulo 2.5.3 - troncos e multiplexação

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
