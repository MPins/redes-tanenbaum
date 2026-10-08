# Exercício 2.36

## Enunciado

Um sistema ADSL que utiliza DMT aloca 3/4 dos canais de dados disponíveis para o enlace de descida (downstream). Ele utiliza modulação QAM-64 em cada canal. Qual é a capacidade do enlace de descida?

---

## Resolução — @Pins

DMT cria 256 canais de 4312,5 Hz cada do espectro de 1,1 MHz no loop local. Destes temos:

- canal 0: voz;
- canais 1 a 5: banda de guarda;
- 2 canais de controle (subida e descida).

Sobram então 256 − 6 − 2 = 248 canais de dados, e 3/4 de 248 = 186 canais de descida.

Cada canal possui um baud rate de 4.000 símbolos por segundo, já o QAM-64 entrega 6 bits por símbolo, ou seja, temos a taxa de transferência de 24 kbps por canal. Com 186 canais de descida, chegamos a 186 × 24.000 = 4.464.000 bps ≈ **4,46 Mbps**.

**Confiança:** alta  
**Referência:** subcapítulo 2.5.2 - loop local

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
