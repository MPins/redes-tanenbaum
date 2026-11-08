# Exercício 4.18

## Enunciado

Considere a construção de uma rede CSMA/CD operando a 1 Gbps sobre um cabo de 1 km, sem repetidores. A velocidade do sinal no cabo é de 200.000 km/s. Qual é o tamanho mínimo do quadro?

---

## Resolução — @Pins

O tamanho mínimo do quadro tem que ser suficientemente grande para que o transmissor possa detectar a colisão, ou seja, ele deve levar no mínimo 2 vezes o tempo de propagação para ser transmitido. Neste cabo de 1 km, com uma velocidade de sinal de 200.000 km/s, o tempo de propagação será de:

$$t_p=\frac{1\text{ km}}{200{.}000\text{ km/s}}=0{,}000005 \text{ s}$$

Logo operando a 1 Gbps o tamanho mínimo do frame deve ser:

$$F_{min}=1\text{ Gbps} \times 2 \times 0{,}000005 \text{ s} = 0{,}00001 \text{ Gb} = 10{.}000 \text{ bits}$$



**Confiança:** alta  
**Referência:** subcapítulo 4.3.2 - Protocolo da subcamada MAC do Ethernet clássico

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
