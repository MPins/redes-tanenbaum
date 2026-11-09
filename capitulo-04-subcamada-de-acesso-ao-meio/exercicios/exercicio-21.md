# Exercício 4.21

## Enunciado

A especificação 1000Base-SX determina que o relógio deve operar a 1.250 MHz, embora o gigabit Ethernet deva entregar uma taxa máxima de dados de apenas 1 Gbps. Essa velocidade mais alta serve para dar uma margem extra de segurança? Se não, o que está acontecendo?

---

## Resolução — @Pins

Não. Passou-se a usar a codificação 8B/10B, esse esquema codifica 8 bits de dados em palavras de código de 10 bits, mantendo o número de 0s e 1s equilibrado no que é transmitido no fio (balanceamento de transições para facilitar a recuperação do relógio), esse esquema transmite 25% a mais de bits, o que é compensado pelo relógio 25% mais rápido.

**Confiança:** alta  
**Referência:** subcapítulo 4.3.6 - Gigabit Ethernet

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
