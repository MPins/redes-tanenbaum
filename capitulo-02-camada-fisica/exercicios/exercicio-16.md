# Exercício 2.16

## Enunciado

Um canal que utiliza a codificação 4B/5B envia dados a uma taxa de 64 Mbps. Qual é a largura de banda mínima utilizada por esse canal?

---

## Resolução — @Pins

A codificação 4B/5B transforma cada 4 bits em 5 bits, de maneira a evitar mais de três zeros seguidos. Dessa forma para chegarmos a uma taxa de 64 Mbps, precisamos transmitir a uma taxa de:

$$ R = \frac{5}{4} \times 64 = 80 Mbps$$

Aplicando o teorema de Nyquist onde V = 2, dois níveis 1 e 0, temos:

$$R_{\max}=2B\log_2(V)$$
$$ 80\times10^6 = 2\times\text{B}\times\log_2(2)$$
$$B = \frac{80\times10^6}{2}\times\log_2(2) = 40 MHz$$

**Confiança:** alta  
**Referência:** subcapitulo 2.4.3 - modulação digital

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
