# Exercício 3.16

## Enunciado

Uma maneira de detectar erros é transmitir os dados como um bloco de n linhas de k bits por linha e acrescentar bits de paridade a cada linha e a cada coluna. O bit no canto inferior direito é um bit de paridade que verifica sua linha e sua coluna. Esse esquema detectará todos os erros simples? E os erros duplos? E os triplos? Mostre que esse esquema não consegue detectar alguns erros de quatro bits.

---

## Resolução — @Pins

Exemplo com a palavra "Network" em ASCII de 7 bits, com paridade par:

```
                paridade da linha
                        ↓
  N     1 0 0 1 1 1 0 │ 0
  e     1 1 0 0 1 0 1 │ 0
  t     1 1 1 0 1 0 0 │ 0
  w     1 1 1 0 1 1 1 │ 0
  o     1 1 0 1 1 1 1 │ 0
  r     1 1 1 0 0 1 0 │ 0
  k     1 1 0 1 0 1 1 │ 1
        ──────────────┼──
        1 0 1 1 1 1 0 │ 1   ← paridade das colunas
```

**Erros simples:** são sempre detectados, tanto pelo bit de paridade da sua linha quanto pelo da sua coluna.

**Erros duplos:** também são sempre detectados. Se os dois estiverem na mesma coluna, a paridade dessa coluna não acusa, mas a paridade de cada uma das duas linhas acusa. O mesmo raciocínio vale para dois erros na mesma linha.

**Erros triplos:** também são sempre detectados, pois o bit do canto equivale à paridade de todos os bits de dados, e um número ímpar de erros sempre altera essa paridade.

**Erros de quatro bits:** podem passar despercebidos quando os quatro erros formam os cantos de um retângulo (duas linhas e duas colunas), pois assim cada linha e cada coluna afetada fica com exatamente dois erros e nenhuma paridade muda.

**Confiança:** alta    
**Referência:** subcapítulo 3.2.2 - códigos de detecção de erros

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
