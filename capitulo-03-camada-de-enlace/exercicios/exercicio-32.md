# Exercício 3.32

## Enunciado

Um protocolo *stop-and-wait* que usa quadros de 800 bits opera em um canal com atraso de propagação de ida de 8 ms e largura de banda de 1.200 kbps. Qual é a eficiência de largura de banda que esse protocolo atinge nesse canal?

---

## Resolução — @Pins

No stop-and-wait o ciclo completo é:

$$t_{\text{ciclo}} = t_{\text{quadro}} + 2 \cdot t_{\text{prop}}$$

A eficiência é a fração do ciclo em que o canal está de fato transmitindo:

$$\text{eficiência} = \frac{t_{\text{quadro}}}{t_{\text{quadro}} + 2 \cdot t_{\text{prop}}}$$

Considerando o quadro de ACK irrelevante, teremos:

$$t_{\text{quadro}}=\frac{800\text{ bits}}{1.200\times10^3\text{ bps}} \approx 0{,}0006667\text{ s} \approx 0{,}67\text{ ms}$$

Substituindo na fórmula de eficiência, temos:

$$\text{eficiência} = \frac{0{,}67}{0{,}67 + 2 \cdot 8}\approx 4\%$$

**Resposta:** cerca de 4%

**Confiança:** alta / média / baixa  
**Referência:** subcapítulo 3.3.3 - protocolos simplex da camada de enlace

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
