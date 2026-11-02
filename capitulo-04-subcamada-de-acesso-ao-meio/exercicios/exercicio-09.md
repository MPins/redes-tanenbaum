# Exercício 4.9

## Enunciado

Veja a Fig. 4-10. Suponha que as estações sabem que há quatro estações prontas: B, D, G e H. Como o protocolo de percurso adaptativo em árvore (*adaptive tree walk*) percorre a árvore para permitir que as quatro estações enviem seus quadros? Quantas colisões adicionais ocorrem se a busca começar pela raiz?

---

## Resolução — @Pins

Começando pela raiz, o protocolo percorre a árvore da seguinte maneira:

```
               1(colisão)
           /               \
       2(colisão)          3(colisão)
      /     \             /           \
    4(ok B)   5(ok D)    6(ocioso)     7(colisão)
   A  B     C  D       E   F       G(ok) H(ok)  
```

Ordem das sondagens: 1 → 2 → 4 → 5 → 3 → 6 → 7 → G → H.

Como as estações sabem que há 4 prontas, a busca pode começar no nível $\log_2 4 = 2$ (nós 4 a 7). Nesse caso só o nó 7 colide, contra 4 colisões começando pela raiz.

**Resposta:** começando pela raiz ocorrem 3 colisões adicionais (nós 1, 2 e 3).

**Confiança:** alta    
**Referência:** subcapítulo 4.2.4 - protocolos de contenção limitada

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
