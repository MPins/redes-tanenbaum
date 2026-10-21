# Exercício 3.26

## Enunciado

Os protocolos de enlace de dados sempre colocam o CRC em um trailer (no final do quadro) em vez de no cabeçalho. Por quê?

---

## Resolução — @Pins

Porque dessa forma o receptor pode ir calculando o CRC conforme recebe a sequência de bits, e o transmissor também pode calcular o CRC enquanto envia os dados e anexá-lo assim que o último bit sair, sem precisar percorrer o quadro antes.

**Confiança:** alta    
**Referência:** subcapítulo 3.2.2 - códigos de detecção de erros

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
