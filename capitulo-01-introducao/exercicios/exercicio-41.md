# Exercício 1.41

## Enunciado

Suponha que os algoritmos utilizados para implementar as operações na camada \(k\) sejam alterados. Como essa mudança afeta as operações nas camadas \(k-1\) e \(k+1\)?


---

## Resolução — @Pins

A alteração não afeta diretamente as camadas (k-1) e (k+1), desde que a camada (k) mantenha as mesmas interfaces e ofereça os mesmos serviços. A camada (k+1) continuará utilizando os serviços fornecidos pela camada (k), enquanto a camada (k) continuará utilizando os serviços da camada (k-1). Assim, os detalhes internos dos novos algoritmos permanecem ocultos das camadas adjacentes.

**Confiança:** alta  
**Referência:** subcapítulo 1.5.2 - protocol layering

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
