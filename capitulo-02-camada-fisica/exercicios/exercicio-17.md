# Exercício 2.17

## Enunciado

Em um diagrama de constelação, todos os pontos estão localizados sobre o eixo horizontal. Que tipo de modulação está sendo utilizada?

---

## Resolução — @Pins

Um diagrama de constelação é uma representação gráfica dos símbolos que podem ser transmitidos por uma modulação digital.

A linha entre a origem e o ponto pode ser vista como um vetor.
- O ângulo desse vetor em relação ao eixo horizontal positivo indica a fase.
- O comprimento do vetor indica a amplitude.

Como temos todos os pontos sobre o eixo horizontal, teríamos três possibilidades:
- a primeira em que a modulação ocorre apenas pela variação da amplitude chamada em inglês de ASK (Amplitude Shift Keying) ou PAM (Pulse Amplitude Modulation).
- a segunda, se houver exatamente dois pontos simétricos, um de cada lado da origem, a modulação também pode ser interpretada especificamente como BPSK (Binary Phase Shift Keying), pois os pontos representam as fases de $0^\circ$ e $180^\circ$.
- a terceira, seria a mistura das duas primeiras, ou seja, pontos com as fases de $0^\circ$ e $180^\circ$ e amplitudes variadas, conhecida como M-PAM (ou ASK bipolar).

Um caso particular do primeiro é o OOK (On-Off Keying), em que um dos pontos fica na origem (amplitude zero).

No fundo, os três casos são o mesmo tipo de modulação. Se todos os pontos estão sobre o eixo horizontal, não há componente em quadratura ($Q = 0$), e o sinal transmitido é apenas $A \cdot \cos(2\pi f t)$, com $A$ podendo ser positivo ou negativo. Uma fase de $180^\circ$ equivale a uma amplitude negativa. Assim, o BPSK nada mais é que um ASK/PAM de 2 níveis antipodais ($\pm A$).

Portanto, trata-se de uma **modulação em amplitude (ASK/PAM)**, unidimensional. Com exatamente dois pontos simétricos em relação à origem, é o caso particular **BPSK**. A quantidade e a posição dos pontos definem apenas a variante (OOK, M-ASK, M-PAM, BPSK), não o tipo de modulação.

**Confiança:** alta  
**Referência:** subcapítulo 2.4.3 - modulação digital

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
