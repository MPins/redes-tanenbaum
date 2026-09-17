# Exercício 1.42
## Enunciado

Suponha que ocorra uma alteração no serviço — isto é, no conjunto de operações — oferecido pela camada (k). Como essa alteração afeta os serviços das camadas (k-1) e (k+1)?


---

## Resolução — @Pins

A alteração não afeta diretamente a camada (k-1), pois a camada (k) pode continuar utilizando os mesmos serviços oferecidos pela camada inferior. Entretanto, ela afeta a camada (k+1), que utiliza os serviços da camada (k) e, portanto, precisa ser adaptada ao novo conjunto de operações disponíveis.

**Confiança:** alta  
**Referência:** subcapítulo 1.5.2 - protocol layering

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
