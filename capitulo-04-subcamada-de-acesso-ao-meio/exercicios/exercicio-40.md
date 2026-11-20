# Exercício 4.40

## Enunciado

Um switch projetado para uso com fast Ethernet tem um backplane capaz de mover 10 Gbps. Quantos quadros por segundo ele consegue tratar no pior caso?

---

## Resolução — @Pins

O backplane move uma quantidade fixa de bits por segundo (10 Gbps). Mas o trabalho do switch é por quadro: para cada um, ele lê o cabeçalho, consulta a tabela e decide a porta de saída. Quanto menores os quadros, mais quadros cabem nos mesmos 10 Gbps, e mais decisões ele tem que tomar por segundo. O pior caso então seria todos os quadros com o tamanho mínimo de 64 bytes (512 bits), teríamos:

$$\text{Qtd}_{\text{quadros/s}}=\frac{10\times10^9}{512}=19{.}531{.}250 \text{ quadros por segundo}$$

**Confiança:** alta  
**Referência:** subcapítulo 4.3.4 - Switched Ethernet

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
