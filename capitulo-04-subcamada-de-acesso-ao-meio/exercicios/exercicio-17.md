# Exercício 4.17

## Enunciado

Uma LAN CSMA/CD (não 802.3) de 1 km de extensão e 10 Mbps tem velocidade de propagação de 200 m/µs. Repetidores não são permitidos nesse sistema. Os quadros de dados têm 256 bits, incluindo 32 bits de cabeçalho, checksum e outros overheads. O primeiro slot de bit após uma transmissão bem-sucedida é reservado para que o receptor capture o canal e envie um quadro de confirmação de 32 bits. Qual é a taxa de dados efetiva, excluindo o overhead, supondo que não haja colisões?

---

## Resolução — @Pins

Vamos começar calculando o tempo de um ciclo completo.

$$T_c = 2\times t_{cc} + 2\times t_p+ t_Q + t_{ACK}$$

$T_c = \text{tempo total do ciclo}$  
$t_{cc} = \text{tempo de captura do canal}$  
$t_p = \text{tempo de propagação}$  
$t_Q = \text{tempo para envio de um quadro}$  
$t_{ACK} = \text{tempo para envio de um ACK}$  


$$t_p = \frac{1{.}000}{200}\ \mu\text{s} = 5\ \mu\text{s}$$

$$t_{cc} = 2\times t_p = 10\ \mu\text{s}$$

$$t_Q = \frac{256}{10\times 10^6} = 25{,}6\ \mu\text{s}$$

$$t_{ACK} = \frac{32}{10\times 10^6} = 3{,}2\ \mu\text{s}$$

$$T_c = 2\times 10 + 2\times 5+ 25{,}6 + 3{,}2=58{,}8\ \mu\text{s}$$

$$\text{taxa efetiva} = \frac{\text{bits de dados úteis}}{\text{tempo total de um ciclo completo}}=\frac{(256-32)\text{ bits}}{58{,}8\ \mu\text{s}}=3{,}8 \text{ Mbps}$$

**Confiança:** alta  
**Referência:** subcapítulo 4.2.2 - Protocolos CSMA

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
