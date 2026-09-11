# Exercício 1.19

## Enunciado

Suponha que dois pontos finais de uma rede tenham um tempo de ida e volta (*round-trip time* — RTT) de 100 milissegundos e que o remetente transmita cinco pacotes a cada viagem de ida e volta. Qual será a taxa de transmissão do remetente para esse RTT, considerando pacotes de 1.500 bytes? Dê sua resposta em bytes por segundo.


---

## Resolução — @Pins

São transmitidos 5 pacotes de 1.500 bytes a cada 100 ms:

$$
5 \times 1.500\ \text{bytes}
=7.500\ \text{bytes}
$$

Como $100\ \text{ms}=0{,}1\ \text{s}$:

$$
\frac{7.500\ \text{bytes}}{100\ \text{ms}}
=
\frac{7.500\ \text{bytes}}{0{,}1\ \text{s}}
=
\boxed{75.000\ \text{bytes/s}}
$$

**Confiança:** alta   
**Referência:** NA

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
