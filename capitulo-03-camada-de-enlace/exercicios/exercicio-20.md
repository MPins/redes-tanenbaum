# Exercício 3.20

## Enunciado

Suponha que os dados sejam transmitidos em blocos de 1.000 bits. Qual é a taxa de erros máxima sob a qual o mecanismo de detecção de erros e retransmissão (1 bit de paridade por bloco) é melhor do que usar o código de Hamming? Suponha que os erros de bits sejam independentes uns dos outros e que nenhum erro de bit ocorra durante a retransmissão.

---

## Resolução — @Pins

Como visto no [exercício 15](exercicio-15.md), para corrigir um erro de 1 bit temos:

* r = quantidade de bits de paridade
* m = quantidade de bits de dados

$$ 2^r \ge m + r + 1 $$
$$ 2^{10} \ge 1000 + 10 + 1 $$
$$ 1024 \ge 1011 $$

Com r = 9 não basta, pois $2^9 = 512 < 1000 + 9 + 1 = 1010$. Precisamos então de 10 bits para corrigir qualquer erro unitário.

Custo de cada estratégia, em bits extras por bloco:

* Hamming: 10 bits, sempre.
* Paridade com retransmissão: 1 bit, mais o reenvio do bloco inteiro (1.001 bits) quando ele chega com erro. Com P = probabilidade de o bloco ter erro, o custo médio é 1 + 1001 · P.

Ponto de empate:

$$1 + 1001 \cdot P = 10 \quad\Rightarrow\quad P = \frac{9}{1001} \approx 0{,}009$$

Ou seja, o empate acontece quando cerca de 0,9% dos blocos chegam com erro.

Para converter em taxa de erro por bit (p): cada bit chega certo com probabilidade 1 − p e os erros são independentes, então o bloco chega todo certo com probabilidade $(1 - p)^{1000}$ (como no [exercício 6](exercicio-06.md)) e tem algum erro com probabilidade:

$$P = 1 - (1 - p)^{1000} \approx 1000 \cdot p \quad \text{(para p pequeno)}$$

$$1000 \cdot p \approx 0{,}009 \quad\Rightarrow\quad p \approx 9 \times 10^{-6}$$

**Resposta:** a detecção com retransmissão é melhor enquanto a taxa de erro por bit for menor que cerca de $9 \times 10^{-6}$; acima disso, o código de Hamming compensa.

**Confiança:** alta    
**Referência:** subcapítulo 3.2.1 - códigos de correção de erro

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
