# Exercício 3.19

## Enunciado

Dada a resposta à questão anterior, explique a popularidade de mecanismos probabilísticos complexos de correção de erros, como os códigos convolucionais e os códigos de verificação de paridade de baixa densidade (LDPC, *Low-Density Parity Check*), discutidos neste capítulo.

---

## Resolução — @Pins

Pelo [exercício 18](exercicio-18.md), para corrigir com garantia todos os erros de até t bits o código precisa distinguir todos os padrões de erro possíveis, cerca de $\binom{n}{t}$, e esse número cresce muito depressa: num quadro de 1.000 bits são cerca de mil padrões para 1 erro, meio milhão para 2 e 166 milhões para 3. Garantir a correção de todos eles exige mais redundância e, principalmente, uma decodificação inviável na prática, e em canais reais (sobretudo sem fio) erros múltiplos são comuns.

Os códigos convolucionais e o LDPC abrem mão dessa garantia para o pior caso: corrigem os padrões de erro mais prováveis, com probabilidade de falha muito pequena, usando decodificadores eficientes (Viterbi, decodificação iterativa) e aproveitando a confiança de cada bit informada pela camada física (decisão *soft*). Assim corrigem muitos erros com pouca redundância e custo computacional viável, o que explica seu uso no 802.11, em vídeo digital e na Ethernet de 10 Gbps.

**Confiança:** alta   
**Referência:** subcapítulo 3.2.1 - códigos de correção de erro

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
