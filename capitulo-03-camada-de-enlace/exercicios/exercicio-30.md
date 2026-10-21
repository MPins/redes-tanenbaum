# Exercício 3.30

## Enunciado

Um protocolo *stop-and-wait* atinge 25% de eficiência de largura de banda usando quadros de 900 bits em um canal com atraso de propagação de ida de 50 ms. Qual é a largura de banda desse canal, em bits por segundo?

---

## Resolução — @Pins

No stop-and-wait o ciclo completo é:

$$t_{\text{ciclo}} = t_{\text{quadro}} + 2 \cdot t_{\text{prop}}$$

A eficiência é a fração do ciclo em que o canal está de fato transmitindo:

$$\text{eficiência} = \frac{t_{\text{quadro}}}{t_{\text{quadro}} + 2 \cdot t_{\text{prop}}}$$

$$\text{0,25} = \frac{t_{\text{quadro}}}{t_{\text{quadro}} + {\text{100 ms}}}$$

$$\text{0,25}\times t_{\text{quadro}} + 25\text{ ms} = t_{\text{quadro}}$$

$$\text{0,75}\times t_{\text{quadro}} = 25\text{ ms}$$

$$t_{\text{quadro}} = \frac{25\text{ ms}}{0{,}75}= 33{,}33 \text{ ms}$$

Desprezando a transmissão do ACK que é pequena com relação a dos quadros, podemos considerar que 900 bits foram transmitidos em 33,33ms, o que nos daria:

$$\frac{900 \text{ bits}}{0{,}0333{\text{ s}}}\approx 27 \text{ kbps}$$

**Resposta:** 27.000 bits/s (27 kbps)

**Confiança:** alta  
**Referência:** subcapítulo 3.3.3 - protocolos simplex da camada de enlace

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
