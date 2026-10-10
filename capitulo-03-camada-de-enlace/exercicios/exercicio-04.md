# Exercício 3.4

## Enunciado

Você recebe o seguinte fragmento de dados: 0110 0111 1100 1111 0111 1101. Você sabe que o protocolo usa inserção de bits (*bit stuffing*). Mostre os dados após a remoção dos bits inseridos.

---

## Resolução — @Pins


A regra: o transmissor insere um 0 depois de cinco 1s consecutivos, então o receptor remove o 0 que vem logo após cada sequência de cinco 1s. Os grupos de 4 do enunciado são só visuais; é preciso olhar o fluxo contínuo

Resp: 0110011111011110111111

**Confiança:** alta  
**Referência:** subcapítulo 3.1.2 - enquadramento

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
