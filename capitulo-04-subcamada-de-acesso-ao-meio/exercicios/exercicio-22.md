# Exercício 4.22

## Enunciado

Quantos quadros por segundo o gigabit Ethernet consegue tratar? Pense com cuidado e leve em conta todos os casos relevantes. Dica: o fato de ser gigabit Ethernet é importante.

---

## Resolução — @Pins

* **quadro mínimo** - na rede ethernet o menor quadro tem 64 bytes (512 bits), a 1 Gbps dá para transmitir 1.953.125 quadros de tamanho mínimo. Mas no gigabit ethernet em half-duplex usamos uma técnica conhecida pelo nome "extensão da portadora" (carrier extension) que aumenta para 512 bytes (4.096 bits) o tamanho mínimo do quadro, suportando a transmissão de aproximadamente 244.140 quadros. Também é usada outra técnica conhecida por "rajada de quadros" (frame bursting) que permite concatenar quadros, então se temos muitos quadros de tamanho mínimo (64 bytes) podemos concatená-los até o tamanho mínimo da rajada (512 bytes), ou seja, multiplicamos por 8 (512/64) chegando de volta a 1.953.125.

* **quadro máximo** - na rede ethernet o maior quadro tem 1.518 bytes (12.144 bits), a 1 Gbps dá para transmitir aproximadamente 82.345 quadros de tamanho máximo.

* **full-duplex** - neste caso não temos CSMA/CD, a extensão não é necessária e temos 1.953.125 quadros por segundo.

**Confiança:** alta  
**Referência:** subcapítulo 4.3.6 - Gigabit Ethernet

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
