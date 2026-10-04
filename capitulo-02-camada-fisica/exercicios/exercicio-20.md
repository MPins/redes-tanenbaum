# Exercício 2.20

## Enunciado

Prove que, em dados mapeados com 4B/5B e codificados com NRZI, uma transição de sinal ocorrerá pelo menos a cada quatro tempos de bit.

---

## Resolução — @Pins

No NRZI o bit 1 muda o sinal de nível e o zero mantém o nível.

O mapeamento 4B/5B evita que uma sequencia maior do 3 zeros seguidos ocorra:

- nenhum código começa com mais de 1 zero;
- nenhum código termina com mais de 2 zeros;
-nenhum código tem mais de 2 zeros seguidos no meio.


Sendo assim o pior caso de frequência de mudança de nível ocorrerá quando juntarmos o final com dois zeros e o início com um zero.

Ex:

1 0 1 0 0 | 0 1 0 0 1

Como depois de no máximo 3 zeros vem obrigatoriamente um bit 1, e no NRZI todo bit 1 provoca uma transição, o sinal muda de nível pelo menos a cada 4 tempos de bit.

**Confiança:** alta  
**Referência:** subcapítulo 2.4.3 - modulação digital

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
