# Exercício 2.31

## Enunciado

Quantos códigos de centrais locais existiam antes de 1984, quando cada central local era identificada pelo seu código de área de três dígitos e pelos três primeiros dígitos do número local? Os códigos de área começavam com um dígito no intervalo de 2 a 9, tinham 0 ou 1 como segundo dígito e terminavam com qualquer dígito. Os dois primeiros dígitos de um número local estavam sempre no intervalo de 2 a 9. O terceiro dígito podia ser qualquer dígito.

---

## Resolução — @Pins

O código de uma central local é formado pelo código de área (3 dígitos) mais o prefixo da central (os 3 primeiros dígitos do número local). Pelo princípio multiplicativo, basta multiplicar as opções de cada dígito:

| Parte | Dígito | Opções |
|---|---|---|
| Código de área | 1º (2 a 9) | 8 |
| | 2º (0 ou 1) | 2 |
| | 3º (qualquer) | 10 |
| Prefixo da central | 1º (2 a 9) | 8 |
| | 2º (2 a 9) | 8 |
| | 3º (qualquer) | 10 |

Temos então $8\times2\times10 = 160$ códigos de área, $8\times8\times10= 640$ prefixos de centrais, totalizando $160\times640=102.400$ códigos de centrais locais. 

**Confiança:** alta  
**Referência:** subcapítulo 2.5.1 - estrutura do sistema telefônico

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
