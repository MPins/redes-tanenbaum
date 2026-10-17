# Exercício 3.21

## Enunciado

Um bloco de bits com n linhas e k colunas utiliza bits de paridade horizontais e verticais para detecção de erros. Suponha que exatamente 4 bits sejam invertidos devido a erros de transmissão. Deduza uma expressão para a probabilidade de que o erro não seja detectado.

---

## Resolução — @Pins

Considerando n × k como o tamanho da mensagem que abrange os bits de paridade. Conforme já visto no [exercício 16](exercicio-16.md), para termos um erro de 4 bits não detectado precisamos de dois erros na mesma linha e dois erros na mesma coluna formando os vértices de um retângulo:
- 2 linhas entre as n: $\binom{n}{2}$ formas  
- 2 colunas entre as k: $\binom{k}{2}$ formas

As escolhas são independentes, então se multiplicam:

$$\binom{n}{2}\times\binom{k}{2}=\frac{n\times(n-1)}{2}\times\frac{k\times(k-1)}{2}=\frac{n\cdot(n-1)\cdot k\cdot(k-1)}{4}$$

Quantas formas de erros de 4 bit quaisquer podem acontecer:

$$\binom{n\cdot k}{4}=\frac{n\cdot k\times(n\cdot k-1)\times(n\cdot k-2)\times(n\cdot k-3)}{4!}=\frac{n\cdot k\cdot(n\cdot k-1)\cdot(n\cdot k-2)\cdot(n\cdot k-3)}{24}$$

A probabilidade de o erro não ser detectado é a razão entre os dois:

$$P=\frac{\binom{n}{2}\binom{k}{2}}{\binom{n\cdot k}{4}}=\frac{n\cdot(n-1)\cdot k\cdot(k-1)}{4}\times\frac{24}{n\cdot k\cdot(n\cdot k-1)\cdot(n\cdot k-2)\cdot(n\cdot k-3)}=\frac{6\cdot(n-1)\cdot(k-1)}{(n\cdot k-1)\cdot(n\cdot k-2)\cdot(n\cdot k-3)}$$

**Confiança:** alta  
**Referência:** subcapítulo 3.2.2 - códigos de detecção de erros

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
