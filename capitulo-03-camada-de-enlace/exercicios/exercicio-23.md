# Exercício 3.23

## Enunciado

Qual é o resto obtido ao dividir $x^7 + x^5 + 1$ pelo polinômio gerador $x^3 + 1$?

---

## Resolução — @Pins

A divisão de polinômios do CRC é uma divisão longa comum feita em **aritmética módulo 2**: subtrair é o mesmo que fazer XOR, sem "vai um" nem "empresta um".

**1. Passar os polinômios para bits.** Cada bit é o coeficiente de uma potência de x, da maior para a menor:

| Polinômio | x⁷ | x⁶ | x⁵ | x⁴ | x³ | x² | x¹ | x⁰ | Bits |
|---|---|---|---|---|---|---|---|---|---|
| $x^7 + x^5 + 1$ | 1 | 0 | 1 | 0 | 0 | 0 | 0 | 1 | `10100001` |
| $x^3 + 1$ | | | | | 1 | 0 | 0 | 1 | `1001` |

**2. Dividir.** A cada passo, o divisor vai para baixo do primeiro 1 que sobrou e faz-se XOR só nas 4 posições dele; os demais bits descem sem mudança:

```
  1 0 1 0 0 0 0 1      dividendo
⊕ 1 0 0 1
  -------
  0 0 1 1 0 0 0 1      1010 ⊕ 1001 = 0011
⊕     1 0 0 1
      -------
  0 0 0 1 0 1 0 1      1100 ⊕ 1001 = 0101
⊕       1 0 0 1
        -------
  0 0 0 0 0 1 1 1      1010 ⊕ 1001 = 0011
```

**3. Parar.** O que sobrou, `111`, tem grau menor que 3 (o grau do gerador), então não cabe mais o divisor: esse é o resto.

$$111 \rightarrow x^2 + x + 1$$

**Resposta:** $x^2 + x + 1$ (em bits, `111`)

**Confiança:** alta   
**Referência:** subcapítulo 3.2.2 - códigos de detecção de erros

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
