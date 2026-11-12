# Exercício 4.27

## Enunciado

Uma LAN sem fio com um AP tem 10 estações clientes. Quatro dessas estações têm taxa de dados de 6 Mbps, quatro têm taxa de 18 Mbps e as duas últimas têm taxa de 54 Mbps. Qual é a taxa de dados percebida por cada estação quando as dez estão enviando dados ao mesmo tempo e

(a) o TXOP não é usado?

(b) o TXOP é usado?

---

## Resolução — @Pins

O mecanismo CSMA/CA dá às estações a oportunidade de transmitir um frame por vez. Quando temos estações com diferentes velocidades de transmissão, as mais rápidas ocupam o canal por menos tempo. Com TXOP (transmission opportunity) as estações ganham a mesma janela de tempo para transmissão. Vamos ver como isso muda então a eficiência neste nosso caso:

* **(a) sem TXOP**

    Vamos primeiro calcular o tempo total de transmissão dos 10 frames:

    L = quantidade de bits em um quadro

    ${\text{T}_{\text{total}}}=4\times(L/6)+4\times(L/18)+2\times(L/54)$

    $T_{\%\text{ de x}} = \text{parte do tempo que as estações com velocidade x ocupam o canal}$

    $$T_{\%\text{ de 6Mbps}} = \frac{4\times(L/6)}{4\times(L/6)+4\times(L/18)+2\times(L/54)}=\frac{2/3}{2/3+2/9+1/27}=\frac{0{,}6667}{0{,}9259}\approx 72{\%}$$

    As 4 estações de 6 Mbps transmitem 72% do tempo, então juntas têm 6 x 0,72 = 4,32 Mbps, ou seja, 4,32 / 4 = 1,08 Mbps por estação.

    $$T_{\%\text{ de 18Mbps}} = \frac{4\times(L/18)}{4\times(L/6)+4\times(L/18)+2\times(L/54)}=\frac{2/9}{2/3+2/9+1/27}=\frac{0{,}2222}{0{,}9259}\approx 24{\%}$$

    As 4 estações de 18 Mbps transmitem 24% do tempo, então juntas têm 18 x 0,24 = 4,32 Mbps, ou seja, 4,32 / 4 = 1,08 Mbps por estação.

    $$T_{\%\text{ de 54Mbps}} = \frac{2\times(L/54)}{4\times(L/6)+4\times(L/18)+2\times(L/54)}=\frac{1/27}{2/3+2/9+1/27}=\frac{0{,}0370}{0{,}9259}\approx 4{\%}$$

    As 2 estações de 54 Mbps transmitem 4% do tempo, então juntas têm 54 x 0,04 = 2,16 Mbps, ou seja, 2,16 / 2 = 1,08 Mbps por estação.

    Sem TXOP todas as estações percebem a mesma taxa de ~1,08 Mbps, independente da sua velocidade (vazão total de 4,32 + 4,32 + 2,16 = 10,8 Mbps).

* **(b) com TXOP**

    Com TXOP cada uma das 10 estações recebe 10% da fatia do tempo total. Logo temos:

    As 4 estações de 6 Mbps transmitem 40% do tempo, então juntas têm 6 x 0,4 = 2,4 Mbps, ou seja, 2,4 / 4 = 0,6 Mbps por estação.

    As 4 estações de 18 Mbps transmitem 40% do tempo, então juntas têm 18 x 0,4 = 7,2 Mbps, ou seja, 7,2 / 4 = 1,8 Mbps por estação.

    As 2 estações de 54 Mbps transmitem 20% do tempo, então juntas têm 54 x 0,2 = 10,8 Mbps, ou seja, 10,8 / 2 = 5,4 Mbps por estação.

    Com TXOP as estações percebem uma taxa proporcional à sua velocidade de transmissão, 1/10 dela (vazão total de 2,4 + 7,2 + 10,8 = 20,4 Mbps).

**Confiança:** alta  
**Referência:** subcapítulo 4.4.3 - The 802.11 MAC Sublayer Protocol

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
