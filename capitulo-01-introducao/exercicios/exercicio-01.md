# Exercício 1.01

## Enunciado

Você estabelece um canal de comunicação entre dois castelos medievais fazendo com que um corvo treinado transporte repetidamente um pergaminho do castelo remetente até o castelo destinatário, localizado a 160 quilômetros de distância. O corvo voa a uma velocidade média de 40 km/h e transporta um pergaminho por vez. Cada pergaminho contém 1,8 terabytes de dados.

Calcule a taxa de transmissão de dados desse canal ao enviar:

(i) 1,8 terabytes de dados;
(ii) 3,6 terabytes de dados;
(iii) um fluxo infinito de dados.


---

## Resolução — @Pins

A distância é 160 km e a velocidade é 40 km/h, então cada trecho leva:

$t = \frac{160 \text{ km}}{40 \text{ km/h}} = 4 \text{ h} = 14.400 \text{ s}$

Cada pergaminho carrega 1.8 TB:

$1{,}8 \times 10^{12} \text{ bytes} \times 8 = 14{,}4 \times 10^{12} \text{ bits} $

(i) Só precisamos de uma viagem de ida, portanto:

$R = \frac{14{,}4 \times 10^{12} \text{ bits}}{14.400 \text{ s}} = 0{,}66666710^{9} \text{ bit/s} = 1 \text{ Gbps}$

(ii) precisa de 2 viagens de ida e uma de volta, portanto:

$R = \frac{2 \times 14{,}4 \times 10^{12} \text{ bits}}{3 \times 14.400 \text{ s}} \approx 0{,}667 \times 10^{9} \text{ bit/s} = 667 \times 10^{6} \text{ bit/s} = 667\text{ Mbps}$

(iii) para fluxo continuo precisamos de uma ida e uma volta para cada pergaminho, protanto:

$R = \frac{14{,}4 \times 10^{12} \text{ bits}}{2 \times 14.400 \text{ s}} = 0{,}5 \times 10^{9} \text{ bit/s} = 500 \text{ Mbps}$

**Confiança:** alta  
**Referência:** subcapitulo 1.9

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
