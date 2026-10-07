# Exercício 2.32

## Enunciado

Um sistema telefônico simples consiste em duas centrais locais e uma única central interurbana, à qual cada central local está conectada por um tronco full-duplex de 1 MHz. Um telefone típico é usado para fazer quatro chamadas por dia de trabalho de 8 horas. A duração média de uma chamada é de 6 minutos. Dez por cento das chamadas são de longa distância (isto é, passam pela central interurbana). Qual é o número máximo de telefones que uma central local pode suportar? (Suponha 4 kHz por circuito.) Explique por que uma companhia telefônica pode decidir suportar um número de telefones menor que esse máximo na central local.

---

## Resolução — @Pins

Dados:

- um assinante típico faz 4 chamadas por dia de trabalho de 8 horas
- a duração média da chamada é de 6 minutos
- 10% das chamadas são de longa distância
- tronco 1MHz
- circuito 4kHz

Um tronco suporta no máximo 250 circuitos simultaneamente:

$$ \frac{1 \text{ MHz}}{4 \text{ kHz}}=250$$

Com uma duração de 6 minutos em média, cada circuito comporta 60 / 6 = 10 chamadas por hora. Durante as 8 horas de trabalho podemos ter então a seguinte quantidade de ligações de longa distância:

$$250\times8\times10 = 20.000$$

Como só 10% das chamadas são de longa distância, o total é 20.000 / 0,1 = 200.000 ligações. Como cada assinante faz 4 chamadas por dia de trabalho, temos 50.000 assinantes.

A companhia pode decidir suportar um número menor para garantir que o sistema esteja sempre disponível para quando os assinantes desejam usá-lo, uma vez que estes números são médias, ela precisa estar preparada também para os momentos de pico de utilização.

**Confiança:** alta  
**Referência:** subcapítulo 2.5.1 - estrutura do sistema telefônico

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
