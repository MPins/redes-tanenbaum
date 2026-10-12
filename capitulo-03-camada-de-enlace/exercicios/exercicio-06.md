# Exercício 3.6

## Enunciado

Um pacote da camada superior é dividido em 10 quadros, e cada um deles tem 80% de chance de chegar sem danos. Se o protocolo de enlace de dados não fizer nenhum controle de erros, quantas vezes a mensagem deverá ser enviada, em média, para que ela chegue inteira?

---

## Resolução — @Pins

A chance de os 10 quadros chegarem sem erro é de $0{,}8^{10} \approx 0{,}1073$.

Então a quantidade média de envios até a mensagem chegar inteira é aquela em que se espera 1 acerto:

$\text{Qtd de envios}\times\text{Prob. de acerto em cada envio} = 1$

$\text{Qtd de envios}\times 0{,}1073 = 1$

$$\text{Qtd de envios}= \frac{1}{0{,}1073}\approx 9{,}3$$

**Confiança:** alta    
**Referência:** subcapítulo 3.1.3 - controle de erros

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
