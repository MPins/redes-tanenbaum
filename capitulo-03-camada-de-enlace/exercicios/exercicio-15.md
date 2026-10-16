# Exercício 3.15

## Enunciado

Considere um protocolo que, para cada 16 bytes de dados da mensagem, acrescenta 1 byte de dados redundantes. Esse protocolo pode usar um código de Hamming para corrigir erros únicos?

---

## Resolução — @Pins

Com m bits de dados e r bits de verificação, temos (m + r) possibilidades de algum bit ter invertido, 1 possibilidade de nenhum bit ter invertido, então são (m + r + 1) situações. Com r bits de paridade só dá para formar $2^r$ combinações diferentes. Para não termos situações diferentes com a mesma combinação nos bits de paridade precisamos que:

$$ 2^r \ge m + r + 1 $$

Aplicando os dados do enunciado, m=128 bits e r=8 bits:

$$ 2^8 \ge 128 + 8 + 1 $$
$$ 256 \ge 137 $$

Ou seja, o número de situações que precisamos representar é menor que o número de combinações que conseguimos representar, o que torna viável o uso de Hamming para correção.

**Resposta:** sim

**Confiança:** alta  
**Referência:** subcapítulo 3.2.1 - códigos de correção de erro

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
