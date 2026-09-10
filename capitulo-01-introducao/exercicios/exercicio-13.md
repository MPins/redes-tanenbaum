# Exercício 1.13

## Enunciado

Um grupo de (2^n - 1) roteadores está interconectado na forma de uma árvore binária centralizada, com um roteador em cada nó da árvore. O roteador (i) se comunica com o roteador (j) enviando uma mensagem até a raiz da árvore. Em seguida, a raiz envia a mensagem de volta para baixo, até (j). Deduza uma expressão aproximada para o número médio de saltos (hops) por mensagem para valores grandes de (n), supondo que todos os pares de roteadores tenham a mesma probabilidade de se comunicar.

---

## Resolução — @Pins

Considerando a raiz como estando no nível zero, uma árvore binária completa com $n$ níveis possui $2^n-1$ roteadores. No nível $k$, existem $2^k$ roteadores, cada um a $k$ saltos da raiz.

Assim, a profundidade média de um roteador é:

$$
\bar{d}=
\frac{\sum_{k=0}^{n-1}k2^k}{2^n-1}
$$

Usando a identidade (veja a demonstração ao final):

$$
\sum_{k=0}^{n-1}k2^k=(n-2)2^n+2
$$

Logo:

$$
\bar{d}=
\frac{(n-2)2^n+2}{2^n-1}
$$

Para valores grandes de $n$:

$$
\bar{d}\approx n-2
$$

Como cada mensagem sobe do roteador de origem até a raiz e depois desce da raiz até o roteador de destino, o número médio de saltos é:

$$
\bar{h}=2\bar{d}\approx2(n-2)
$$

Portanto:

$$
\boxed{\bar{h}\approx2n-4}
$$

Logo, para valores grandes de $n$, uma mensagem percorre aproximadamente $2n-4$ saltos.

### Demonstração da identidade

Queremos demonstrar que:

$$
\sum_{k=0}^{n-1}k2^k=(n-2)2^n+2
$$

Chamamos essa soma de $S$:

$$
S=\sum_{k=0}^{n-1}k2^k
$$

Escrevendo os termos:

$$
S=1\cdot2^1+2\cdot2^2+3\cdot2^3+\cdots+(n-1)2^{n-1}
$$

Multiplicando os dois lados por 2:

$$
2S=1\cdot2^2+2\cdot2^3+3\cdot2^4+\cdots+(n-1)2^n
$$

Agora subtraímos $S$ de $2S$. Quando alinhamos os termos que possuem a mesma potência de 2, temos:

$$
\begin{aligned}
2S-S
={}&-1\cdot2^1 \\
&+(1-2)2^2 \\
&+(2-3)2^3 \\
&+\cdots \\
&+[(n-2)-(n-1)]2^{n-1} \\
&+(n-1)2^n
\end{aligned}
$$

Como todos os coeficientes intermediários são iguais a $-1$:

$$
2S-S=(n-1)2^n-\left(2^1+2^2+\cdots+2^{n-1}\right)
$$

Como $2S-S=S$:

$$
S=(n-1)2^n-\left(2^1+2^2+\cdots+2^{n-1}\right)
$$

A soma dentro dos parênteses é uma progressão geométrica:

$$
2^1+2^2+\cdots+2^{n-1}=2^n-2
$$

Substituindo:

$$
S=(n-1)2^n-(2^n-2)
$$

Desenvolvendo:

$$
S=(n-1)2^n-2^n+2
$$

Colocando $2^n$ em evidência:

$$
S=[(n-1)-1]2^n+2
$$

Portanto:

$$
\boxed{\sum_{k=0}^{n-1}k2^k=(n-2)2^n+2}
$$

**Confiança:** alta  
**Referência:** NA

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
