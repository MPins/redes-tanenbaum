# Exercício 4.36

## Enunciado

Qual é o tamanho máximo do campo de dados de um quadro Bluetooth de 3 slots na taxa básica (basic rate)? Explique sua resposta.

---

## Resolução — @Pins

Na taxa básica (1 Mbps) cada slot de 625 µs carrega 625 bits. Desse total saem 126 bits de cabeçalho (72 do código de acesso + 54 do header) e um tempo de estabilização do rádio de 250–260 µs a cada salto. Os números do livro batem com isso:

$$1 \text{ slot}: 625 - 126 - 259 = 240 \text{ bits} \qquad 5 \text{ slots}: 5\times625 - 126 - 255 = 2744 \text{ bits}$$

Para 3 slots:

$$3\times625 - 126 - (250 \text{ a } 260) \approx 1.490 \text{ a } 1.500 \text{ bits}$$

Como o cabeçalho e a estabilização são fixos por quadro, quanto mais slots, maior a fração do quadro usada para dados.

**Confiança:** alta  
**Referência:** subcapítulos 4.5.5 - The Bluetooth Link Layers e 4.5.6 - The Bluetooth Frame Structure

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
