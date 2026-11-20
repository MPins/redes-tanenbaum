# Exercício 4.38

## Enunciado

O texto menciona que a eficiência de um quadro de 1 slot com codificação por repetição é de cerca de 13% na taxa básica. Qual será a eficiência se for usado um quadro de 5 slots com codificação por repetição, também na taxa básica?

---

## Resolução — @Pins

De onde vêm os 13% (1 slot, 625 bits):

- 259 bits de tempo de estabilização (41%);
- 126 bits de código de acesso e cabeçalho (20%);
- 240 bits de dados, mas com repetição tripla: só 80 são úteis (os outros 160, 26%, são cópias);
- eficiência: $80 / 625 \approx 0{,}13$ (13%).

Agora com 5 slots, 3.125 bits:

- 259 bits de tempo de estabilização;
- 126 bits de código de acesso e cabeçalho;
- 2.740 bits de dados, mas com repetição tripla: só 913 são úteis;
- eficiência: $913 / 3.125 \approx 0{,}292$ (29,2%).

**Confiança:** alta  
**Referência:** subcapítulos 4.5.5 - The Bluetooth Link Layers e 4.5.6 - The Bluetooth Frame Structure

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
