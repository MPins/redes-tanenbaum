# Exercício 3.39

## Enunciado

Suponha que, no problema anterior, fosse usado um protocolo de janela deslizante. Para qual tamanho de janela de envio a utilização do enlace será de 100%? Você pode ignorar os tempos de processamento do protocolo no transmissor e no receptor.

---

## Resolução — @Pins

> **Observação:** o enunciado parece conter um erro. O "problema anterior" citado não corresponde ao [exercício 38](exercicio-38.md), que trata do laço `while` do protocolo 6 e não fornece taxa de bits, atraso nem tamanho de quadro. Além disso, o protocolo 6 já é de janela deslizante, então a pergunta "e se fosse usado um protocolo de janela deslizante" não faz sentido em relação a ele. O problema anterior provavelmente era um enlace com *stop-and-wait*. Não foi encontrada errata oficial que esclareça o caso.

Sem os dados do enlace, a resposta fica genérica: a utilização chega a 100% quando a janela de envio cobre o ciclo inteiro, isto é, o tempo de transmitir um quadro mais o tempo de ida e volta. Com BD sendo o produto largura de banda × atraso de ida, expresso em quadros:

$$w \ge 2BD + 1$$

**Confiança:** alta    
**Referência:** subcapítulo 3.4.2 - exemplos de protocolos full-duplex sliding window

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
