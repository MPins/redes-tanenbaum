# Exercício 3.28

## Enunciado

Um canal tem uma taxa de bits de 4 kbps e um atraso de propagação de 20 ms. Para qual faixa de tamanhos de quadro o protocolo *stop-and-wait* oferece uma eficiência de pelo menos 50%?

---

## Resolução — @Pins

A uma taxa de 4 kbps, transmitimos 80 bits em 20 ms. No stop-and-wait, depois de transmitir o quadro, o transmissor espera o quadro chegar ao receptor (20 ms) e o ACK voltar (mais 20 ms). O ciclo completo é:

$$t_{\text{ciclo}} = t_{\text{quadro}} + 2 \cdot t_{\text{prop}}$$

A eficiência é a fração do ciclo em que o canal está de fato transmitindo:

$$\text{eficiência} = \frac{t_{\text{quadro}}}{t_{\text{quadro}} + 2 \cdot t_{\text{prop}}}$$

Desprezando o tempo de transmissão do ACK, que é pequeno, para 50%, o tempo do quadro precisa igualar a espera: t_quadro = 2 × 20 ms = 40 ms, o que dá 4.000 bits/s × 0,04 s = 160 bits.

**Resposta:** para quadros de pelo menos 160 bits a eficiência é de pelo menos 50%.

**Confiança:** alta  
**Referência:** subcapítulo 3.3.3 - protocolos simplex da camada de enlace

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
