# Exercício 3.5

## Enunciado

Quando a inserção de bits (*bit stuffing*) é usada, é possível que a perda, a inserção ou a modificação de um único bit cause um erro não detectado pelo checksum? Se não, por que não? Se sim, como? O tamanho do checksum desempenha algum papel aqui?

---

## Resolução — @Pins

Existe a possibilidade de perdermos justamente um bit de stuffing, e os bits ao redor colaborarem:

```
dados originais:   0 11111 1 0
transmitido:       0 11111 0 1 0     (0 inserido após os cinco 1s)
perde o 0:         0 11111 1 0   →   01111110 = flag
```
O mesmo efeito pode vir de um bit modificado (um dado como 01111010 vira 01111110) ou inserido, e também no sentido inverso: um bit estragado na flag verdadeira faz dois quadros se fundirem em um.

Nestes casos, os dados que antecedem a flag de encerramento do quadro serão interpretados como checksum e normalmente falham por não se tratar do checksum propriamente dito, mas existe uma possibilidade de coincidirem e o erro não ser detectado, tanto menor quanto maior for a quantidade de bits do checksum.

**Confiança:** alta  
**Referência:** subcapítulo 3.1.2 - enquadramento

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
