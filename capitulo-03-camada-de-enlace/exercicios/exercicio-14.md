# Exercício 3.14

## Enunciado

Os códigos de Hamming têm distância três e podem ser usados para corrigir um único erro ou detectar um erro duplo. Eles podem ser usados para fazer as duas coisas ao mesmo tempo? Explique por que sim ou por que não. Em geral, se a distância de Hamming é n, quantos erros podem ser corrigidos? Quantos erros podem ser detectados?

---

## Resolução — @Pins

Não dá para fazer as duas coisas ao mesmo tempo. Porque se houve 2 erros, a palavra recebida está a 2 bits da original, e como as palavras válidas estão a 3 bits umas das outras, ela pode estar a só 1 bit de outra palavra válida.

O receptor não sabe quantos erros aconteceram; ele só vê uma palavra inválida. Se estiver em modo de correção, ele escolhe a palavra válida mais próxima, que no caso de 2 erros é a errada, e "corrige" para ela sem avisar nada. Ou seja, ao ligar a correção de 1 erro, o erro duplo deixa de ser detectado e vira uma correção errada, assim passa a detectar apenas um erro.

Em geral, com distância n é possível detectar (n − 1) erros ou corrigir [(n − 1)/2] erros.

**Confiança:** alta  
**Referência:** subcapítulo 3.2.1 - códigos de correção de erro

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
