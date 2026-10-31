# Exercício 4.3

## Enunciado

Dez mil estações de reserva de passagens aéreas competem pelo uso de um único canal *slotted* ALOHA. Em média, cada estação faz 18 requisições/hora. Um *slot* dura 125 µs. Qual é, aproximadamente, a carga total do canal?

---

## Resolução — @Pins

Cada uma das 10.000 estações gera 18 requisições a cada 3.600 s:

$$\frac{10{.}000\times18}{3{.}600}=50 \text{ requisições/s}$$

O slot dura 125 µs, então em um segundo há:

$$\frac{1}{125\times 10^{-6}}=0{,}008\times 10^6 = 8{.}000\text{ slots/s}$$

Portanto a carga do canal, em requisições por slot, é:

$$G = \frac{50}{8{.}000}=0{,}00625=\frac{1}{160}$$

**Resposta:** G ≈ 0,00625 (1/160) requisições por slot

**Confiança:** alta  
**Referência:** subcapítulo 4.2.1 - ALOHA

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
