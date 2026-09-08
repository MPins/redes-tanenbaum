# Exercício 1.12

## Enunciado

Cinco roteadores devem ser conectados em uma sub-rede ponto a ponto. Entre cada par de roteadores, os projetistas podem instalar uma linha de alta velocidade, uma linha de velocidade média, uma linha de baixa velocidade ou não instalar linha alguma. Se forem necessários 50 ms de tempo de processamento para gerar e analisar cada topologia, quanto tempo será necessário para analisar todas elas?

---

## Resolução — @seu-usuario

Primeiro vamos descobrir qual o número de combinações possíveis para 5 roteadores 2 a 2:

$$\binom{5}{2} = \frac {5!}{2!\times\text{(5 - 2)!}} = \frac {120}{2\times6} = 10$$

Imaginando que os roteadores são nomeados de A à E, teríamos as seguintes combinações possíveis: AB AC AD AE BC BD BE CD CE DE

Entre cada par de roteadores podemos ter 3 tipos de conexão: alta, média, baixa velocidade além da opção de simplesmentes não ter conexão. Ou seja:

$ \text{Quantidade de Topologias Possíveis} = 4^{10} = 1.048.576$

Se levamos 50 ms de processamento para gerar e analisar cada topologia, levaríamos:

$\text{Tempo Total} = 1.048.576 \times 50 \text{ ms} = 52.428.800 \text{ ms} \approx 14,5 horas$

**Confiança:** alta  
**Referência:** NA

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
