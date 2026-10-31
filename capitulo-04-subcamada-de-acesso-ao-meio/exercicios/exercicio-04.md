# Exercício 4.4

## Enunciado

Medições de um canal *slotted* ALOHA com um número infinito de usuários mostram que 10% dos *slots* estão ociosos.

(a) Qual é a carga do canal, G?  
(b) Qual é a vazão?  
(c) O canal está subcarregado ou sobrecarregado?

---

## Resolução — @Pins

No slotted ALOHA, o número de tentativas por slot segue uma distribuição de Poisson com média G. A probabilidade de nenhuma tentativa num slot, isto é, de ele ficar ocioso, é:

$$P_0 = e^{-G}$$

$$0{,}1 = e^{-G}$$

$$G = -\ln 0{,}1 \approx 2{,}3026$$

**Resposta (a):** G ≈ 2,30

No ALOHA slotted temos que a vazão é dada por:

$$S=G\times e^{-G} = 2{,}3026\times 0{,}1 \approx 0{,}2303$$

**Resposta (b):** S ≈ 0,23

**Resposta (c):** O canal está sobrecarregado: G ≈ 2,3 > 1, valor em que a vazão é máxima.

**Confiança:** alta / média / baixa  
**Referência:** subcapítulo 4.2.1 - ALOHA

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
