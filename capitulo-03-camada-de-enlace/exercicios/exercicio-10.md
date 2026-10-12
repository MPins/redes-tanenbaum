# Exercício 3.10

## Enunciado

Considere um mecanismo de detecção de erros que envia cada mensagem duas vezes. Supondo que ocorram exatamente dois erros de um único bit, qual é a probabilidade de os erros passarem sem ser detectados? Qual é a probabilidade quando se usa um bit de paridade? Qual método detecta mais erros?

---

## Resolução — @Pins

A mensagem duplicada tem 2n bits. O primeiro erro pode cair em qualquer um deles. Para o erro passar despercebido, o segundo tem de cair exatamente no bit correspondente da outra cópia, e ele tem 2n − 1 posições possíveis (todas menos a que já errou). Só 1 delas serve:

$$P = \frac{1}{2n - 1}$$

Com bit de paridade, independentemente do tamanho da mensagem, dois erros de um único bit sempre passam despercebidos: a probabilidade é 1.

Com isso fica claro que o primeiro método detecta muito mais erros.

**Confiança:** alta  
**Referência:** subcapítulo 3.2.1 - códigos de correção de erro

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
