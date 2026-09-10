# Exercício 1.14

## Enunciado

Uma desvantagem de uma sub-rede (sub-net) de difusão (broadcast) é o desperdício de capacidade que ocorre quando vários hosts tentam acessar o canal ao mesmo tempo. Como exemplo simplificado, suponha que o tempo seja dividido em intervalos discretos (slots) e que cada um dos (n) hosts tente utilizar o canal com probabilidade (p) durante cada intervalo. Qual fração dos intervalos será desperdiçada devido a colisões?

---

## Resolução — @Pins

$p \rightarrow \text{probabilidade de um host específico usar o canal}$  
$(1-p) \rightarrow  \text{probabilidade de um host específico não usar o canal}$  
$(1 - p)^n \rightarrow  \text{probabilidade de nenhum host usar o canal}$  
$(1-p)^{n-1} \rightarrow  \text{probabilidade de (n-1) hosts não usarem o canal}$  
$$np(1−p)^{n−1} \rightarrow  \text{probabilidade de qualquer um dos n  hosts usar o canal e os outros (n-1) não usarem}$$

Para termos então a probabilidade de colisão basta subtrairmos de 1 a probabilidade de nenhum host usar o canal, e em seguida subtrairmos a possibilidade de apenas 1 usar o canal:

$$\boxed{1 - (1 - p)^n - np(1−p)^{n−1}}$$


**Confiança:** alta  
**Referência:** NA

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
