# Exercício 3.33

## Enunciado

Um protocolo de janela deslizante usa quadros de 1.000 bits e uma janela de envio de tamanho fixo igual a 3. Ele atinge quase 100% de eficiência de largura de banda em um canal de 250 kbps. O mesmo protocolo é usado em um canal melhorado, que tem o mesmo atraso, mas o dobro da largura de banda. Qual é a eficiência de largura de banda do protocolo no novo canal?

---

## Resolução — @Pins

Vamos primeiro calcular o tempo de envio de cada quadro:

$$t_{\text{quadro}}=\frac{1{.}000\text{ bits}}{250\times10^3\text{ bps}}=4\text{ ms}$$

Se este protocolo tem 100% de eficiência:

w = tamanho da janela  
BD = bandwidth-delay expresso em número de quadros

$$2BD+1=w$$

Substituindo w por 3 temos o BD = 1, ou seja 4 ms.

Como dobramos a banda, os frames agora são transmitidos 2x mais rápido, ou seja, levam a metade do tempo para ser transmitidos, logo a janela w que era de 3 x 4 = 12 ms agora é de 6 ms, e 1 quadro que antes era transmitido em 4 ms agora é transmitido em 2 ms. Substituindo na fórmula e mantendo o mesmo atraso, temos:

$$\text{eficiência} = \frac{w \cdot t_{\text{quadro}}}{t_{\text{quadro}} + 2\,t_{\text{prop}}} = \frac{6\text{ ms}}{10\text{ ms}} = 60\%$$

**Resposta:** 60%

**Confiança:** alta   
**Referência:** subcapítulo 3.4.2 - exemplos de protocolos full-duplex sliding window

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
