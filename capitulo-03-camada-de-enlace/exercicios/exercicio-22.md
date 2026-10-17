# Exercício 3.22

## Enunciado

Suponha que a mensagem 1001 1100 1010 0011 seja transmitida usando o *checksum* da Internet (com palavras de 4 bits). Qual é o valor do *checksum*?

---

## Resolução — @Pins

O *checksum* da Internet, usado nos cabeçalhos do IP, do TCP e do UDP, é definido como a soma em complemento de um. Convertendo as palavras para decimal (1001 = 9, 1100 = 12, 1010 = 10, 0011 = 3) e somando as 4 palavras, temos:

9+12+10+3=34
```
34 = 10 0010
     ↑↑ ↑↑↑↑  
     │  └── os 4 bits da palavra: 0010  
     └───── o que "transbordou" para fora dos 4 bits: 10
```

O que transbordou é somado novamente:

2+2=4=0100

Finalmente, achamos o complemento da soma, invertendo os bits: 0100 → 1011

**Resultado:** 1011

**Confiança:** alta  
**Referência:** subcapítulo 3.2.2 - códigos de detecção de erros

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
