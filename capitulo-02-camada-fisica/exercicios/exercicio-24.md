# Exercício 2.24

## Enunciado

Suponha que A, B e C estejam transmitindo bits 0 simultaneamente, utilizando um sistema CDMA com as sequências de chips da Fig. 2-22(a). Qual é a sequência de chips resultante?

---

## Resolução — @Pins

Em um sistema CDMA cada transmissão envia o seu chip para enviar o bit 1 e a negação do mesmo para envia o bit 0. Segundo a figura 2-22(a) os chips de A, B e C são:
```
A = (-1 -1 -1 +1 +1 -1 +1 +1)
B = (-1 -1 +1 -1 +1 +1 +1 -1)
C = (-1 +1 -1 +1 +1 +1 -1 -1)
```
logo suas respectivas negações são:
```
$\bar{A}$ = (+1 +1 +1 -1 -1 +1 -1 -1)
$\bar{B}$ = (+1 +1 -1 +1 -1 -1 -1 +1)
$\bar{C}$ = (+1 -1 +1 -1 -1 -1 +1 +1)
```
A resultante é a soma das negações:
```
S = (+3 +1 +1 -1 -3 -1 -1 +1)
```
**Confiança:** alta  
**Referência:** subcapítulo 2.4.3 - modulação digital

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
