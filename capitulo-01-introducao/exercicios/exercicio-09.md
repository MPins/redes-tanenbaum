# Exercício 1.09

## Enunciado

Um sistema cliente-servidor utiliza uma rede de satélites, com o satélite a uma altitude de 40.000 km. Qual é o menor atraso possível para receber a resposta a uma requisição?


---

## Resolução — @Pins

Vamos considerar a velocidade de propagação das ondas eletromagnéticas no espaço, seja aproximadamente a velocidade da luz no vácuo:

$$ c \approx 300.000 \text{ km/s}$$

Vamos considerar a seguinte distância mínima de propagação:

$$ \text{Distância Mínima de Propagação} = 4 \times 40.000 \text{ km}= 160.000 \text{ km (cliente } \rightarrow \text{satélite } \rightarrow\text{servidor } \rightarrow \text{satélite } \rightarrow \text{cliente) }$$

Assim o menor atraso possível para receber a resposta a uma requisição será de:

$$ \text{Menor Atraso Possível} = \frac{160.000 \text{ km}}{300.000 \text{ km/s}} \approx  0,533 \text { s} = 533 \text{ ms}$$

**Confiança:** alta  
**Referência:** subcapítulo 1.5.3 conexões

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
