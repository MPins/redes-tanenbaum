# Exercício 1.08

## Enunciado

Um servidor envia pacotes a um cliente por meio de satélites. Os pacotes precisam atravessar um ou mais satélites antes de chegar ao destino. Os satélites utilizam comutação de pacotes por armazenamento e encaminhamento (store-and-forward), com um tempo de comutação de 100 µs. Se os pacotes percorrem uma distância total de 29.700 km, por quantos satélites eles precisam passar para que 1% do atraso total seja causado pela comutação de pacotes?

---

## Resolução — @Pins

Vamos considerar a velocidade de propagação das ondas eletromagnéticas no espaço, seja aproximadamente a velocidade da luz no vácuo:

$$ c \approx 300.000 \text{ km/s}$$

Assim o tempo total gasto apenas pela propagação de um pacote será de:

$$ \text{Atrado de Propagação} = \frac{29.700 \text{ km}}{300.000 \text{ km/s}} = 0,099 \text { s} = 99.000 \mu s$$

O atraso total seria então:

$$ \text{Atraso Total} = \text{Atraso de Propagação ( 99\%)}  + \text{Atraso de Comutação ( 1\%)} $$

Logo:

$$ \text{No. de Satélites} = \frac{1.000 \mu s\text{ (Atraso de Comutação)} }{100 \mu s\text { (Tempo de Comutação por Satélite)}} = 10$$



**Confiança:** alta  
**Referência:** subcapítulo 1.5.3 - conexões

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
