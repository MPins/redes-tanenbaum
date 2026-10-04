# Exercício 2.19

## Enunciado

Qual é a largura de banda mínima necessária para atingir uma taxa de dados de B bits/s se o sinal for transmitido utilizando as codificações NRZ, MLT-3 e Manchester? Explique sua resposta.

---

## Resolução — @Pins

No NRZ a menor frequência do sinal é 0, e ocorre quando enviamos um sequencia de bits de mesmo valor (0 ou 1). Já a maior frequência acontece quando alternamos entre 0 e 1, atingindo uma frequência igual a B/2 Hz.

No MLT-3 a menor frequência do também sinal é 0, e ocorre quando enviamos um sequencia de bits iguais a 0. Quando enviamos bits iguais a 1 os níveis mudam de estado 3 vezes (-1, 0 e +1), logo precisamos de 4 bits iguais a 1 para que o sinal complete um ciclo completo, essa é a maior frequencia igual B/4 Hz.

No Manchester cada bit é dividido em duas metades e sempre existe uma transição no centro do intervalo do bit, o que faz com que ele oscile 2 vezes mais rápido que o NRZ exigindo o dobro da banda deste.

| Codificação | Largura de banda mínima |
|---|---|
| NRZ | $B/2$ Hz |
| MLT-3 | $B/4$ Hz |
| Manchester | $B$ Hz |

**Confiança:** média  
**Referência:** subcapítulo 2.4.3 - modulação digital

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
