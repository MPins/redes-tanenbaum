# Exercício 3.9

## Enunciado

Depois de perceber que o serviço de mensagens instantâneas que você usa diariamente não oferece detecção de erros, você decide adotar por conta própria um mecanismo simples de detecção de erros: enviar todas as suas mensagens duas vezes. Quais são a distância de Hamming e a taxa de código correspondentes? Como isso se compara ao acréscimo de um bit de paridade?

---

## Resolução — @Pins

A taxa de código é 1/2, por estar enviando a mensagem em dobro. Já a distância de Hamming é 2, dando a garantia de detectar a mudança de apenas um bit na mensagem. O bit de paridade tem a mesma distância 2, mas é muito mais eficiente: acrescenta só 1 bit, com taxa de código n/(n+1), enquanto a duplicação acrescenta n bits para a mesma garantia.

**Confiança:** alta  
**Referência:** subcapítulo 3.2.1 - códigos de correção de erro

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
