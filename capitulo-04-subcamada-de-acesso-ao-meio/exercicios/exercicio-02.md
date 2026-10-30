# Exercício 4.2

## Enunciado

Um grupo de N estações compartilha um canal ALOHA puro de 56 kbps. Cada estação gera, em média, um quadro de 1.000 bits a cada 100 s, mesmo que o anterior ainda não tenha sido enviado (por exemplo, as estações podem armazenar em buffer os quadros a enviar). Qual é o valor máximo de N?

---

## Resolução — @Pins

No ALOHA puro, por causa das colisões, a vazão máxima é de $S = \frac{1}{2e} \approx 0{,}184$ (quando G = 0,5), ou seja, só cerca de 18,4% da capacidade do canal é aproveitada:

$$0{,}184 \times 56\text{ kbps} \approx 10.300\text{ bps}$$

Cada estação gera 1.000 bits a cada 100 s:

$$\frac{1.000\text{ bits}}{100\text{ s}} = 10\text{ bps}$$

Logo, o número máximo de estações é:

$$N = \frac{10.300\text{ bps}}{10\text{ bps}} \approx 1.030$$

**Resposta:** N ≈ 1.030 estações

**Confiança:** alta    
**Referência:** subcapítulo 4.2.1 - ALOHA

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
