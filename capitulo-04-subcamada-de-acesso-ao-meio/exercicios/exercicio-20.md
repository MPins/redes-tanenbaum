# Exercício 4.20

## Enunciado

Os quadros Ethernet devem ter pelo menos 64 bytes para garantir que o transmissor ainda esteja transmitindo caso ocorra uma colisão na ponta mais distante do cabo. O Fast Ethernet tem o mesmo tamanho mínimo de quadro de 64 bytes, mas consegue enviar os bits dez vezes mais rápido. Como é possível manter o mesmo tamanho mínimo de quadro?

---

## Resolução — @Pins

O tempo de bit foi reduzido de 100 ns para 10 ns, então os 64 bytes passam a ser transmitidos em 10 vezes menos tempo. Para o transmissor ainda detectar a colisão na ponta mais distante, o tempo de ida e volta no cabo também precisa cair 10 vezes, por isso o comprimento máximo do cabo foi reduzido de 2.500 m para cerca de 250 m. Na prática isso não foi um problema, porque o Fast Ethernet usa par trançado com hubs e cabos de até 100 m, que já ficam dentro desse limite.

**Confiança:** alta  
**Referência:** subcapítulo 4.3.5 - Fast Ethernet

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
