# Exercício 3.31

## Enunciado

Um protocolo *stop-and-wait* atinge 60% de eficiência de largura de banda usando quadros de 300 bits em um canal com largura de banda de 50 kbps. Qual é o atraso de propagação de ida desse canal?

---

## Resolução — @Pins

No stop-and-wait o ciclo completo é:

$$t_{\text{ciclo}} = t_{\text{quadro}} + 2 \cdot t_{\text{prop}}$$

O tempo de quadro é igual a:

$$\frac{300}{50 \times 10^3} = 0{,}006\text{ s}$$

A eficiência é a fração do ciclo em que o canal está de fato transmitindo:

$$\text{eficiência} = \frac{t_{\text{quadro}}}{t_{\text{quadro}} + 2 \cdot t_{\text{prop}}}$$

$$0,6 = \frac{0,006}{0,006+ 2 \cdot t_{\text{prop}}}$$

$$0{,}006 + 2 \cdot t_{\text{prop}} = \frac{0{,}006}{0{,}6} = 0,01$$

$$t_{\text{prop}} = \frac{0,01 - 0,006}{2}= 2 \text{ ms}$$

**Confiança:** alta / média / baixa
**Referência:** seção X.Y do livro, RFC ####, etc.

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
