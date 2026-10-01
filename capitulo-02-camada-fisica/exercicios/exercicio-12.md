# Exercício 2.12

## Enunciado

Um canal sem ruído de **3 kHz** é amostrado a cada **1 ms**. Qual é a taxa máxima de transmissão de dados? Como essa taxa máxima muda se o canal tiver ruído, com uma relação sinal-ruído de **30 dB**?

---

## Resolução — @Pins

A questão combina três ideias:

- frequência de amostragem;
- limite de Nyquist para um canal sem ruído;
- limite de Shannon para um canal com ruído.

#### 1. Frequência de amostragem

Uma amostra é obtida a cada:

$$
T_s=1\ \text{ms}=0{,}001\ \text{s}
$$

Portanto, a frequência de amostragem é:

$$
f_s=\frac{1}{T_s}
$$

$$
f_s=\frac{1}{0{,}001}=1000\ \text{amostras/s}
$$

Pelo teorema da amostragem, são necessárias pelo menos duas amostras para representar cada ciclo:

$$
f_s=2B
$$

Logo, a maior largura de banda efetivamente representável é:

$$
B=\frac{f_s}{2}
$$

$$
B=\frac{1000}{2}=500\ \text{Hz}
$$

Embora o canal físico tenha largura de banda de 3 kHz, a amostragem de apenas 1000 vezes por segundo limita a largura de banda efetivamente utilizada a:

$$
\boxed{B_{\text{efetiva}}=500\ \text{Hz}}
$$

#### 2. Canal sem ruído

O limite de Nyquist é:

$$
R_{\max}=2B\log_2(V)
$$

onde \(V\) é o número de níveis distintos do sinal.

Usando \(B=500\ \text{Hz}\):

$$
R_{\max}=1000\log_2(V)
$$

Por exemplo, com dois níveis:

$$
V=2
$$

$$
R_{\max}=1000\log_2(2)=1000\ \text{bits/s}
$$

Com quatro níveis:

$$
V=4
$$

$$
R_{\max}=1000\log_2(4)=2000\ \text{bits/s}
$$

Com \(2^n\) níveis:

$$
R_{\max}=1000\log_2(2^n)=1000n\ \text{bits/s}
$$

Em um canal perfeitamente sem ruído, poderíamos aumentar indefinidamente o número de níveis \(V\). Portanto, idealmente:

$$
\boxed{R_{\max}\rightarrow\infty}
$$

Ou seja, sem informar o número de níveis do sinal, **não existe um limite máximo finito para o canal sem ruído**.

#### 3. Canal com ruído de 30 dB

Com ruído, o número de níveis não pode crescer indefinidamente, pois níveis muito próximos se tornariam indistinguíveis.

Primeiro, convertemos a SNR de decibéis para uma razão linear:

$$
\text{SNR}=10^{\frac{\text{SNR}_{dB}}{10}}
$$

$$
\text{SNR}=10^{\frac{30}{10}}=10^3=1000
$$

Aplicamos a fórmula de Shannon:

$$
C=B\log_2(1+\text{SNR})
$$

$$
C=500\log_2(1+1000)
$$

$$
C=500\log_2(1001)
$$

Como:

$$
\log_2(1001)\approx9{,}967
$$

temos:

$$
C\approx500\times9{,}967
$$

$$
\boxed{C\approx4984\ \text{bits/s}\approx4{,}98\ \text{kbit/s}}
$$

### Resposta final

$$
\boxed{
\begin{aligned}
\text{Sem ruído:}&\quad \text{não há limite finito sem limitar }V\\
\text{Com SNR de 30 dB:}&\quad C\approx4{,}98\ \text{kbit/s}
\end{aligned}
}
$$

A sutileza do exercício é que os **3 kHz do canal não são totalmente aproveitados**, pois a amostragem de uma vez por milissegundo permite representar apenas até 500 Hz. Essa é a interpretação esperada pelo exercício.


**Confiança:** alta  
**Referência:** subcapítulo 2.4.2 - taxa de transmissão máxima de um canal

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
