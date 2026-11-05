# Exercício 4.16

## Enunciado

Esboce a codificação Manchester em uma Ethernet clássica para a sequência de bits 0001110101.

---

## Resolução — @Pins

Na codificação Manchester cada bit ocupa duas metades com níveis opostos: o bit 0 é uma transição de baixo para alto e o bit 1 de alto para baixo (Fig. 2-14). Quando dois bits seguidos são iguais, o sinal precisa mudar de nível também na fronteira entre eles, para conseguir fazer de novo a mesma transição no meio do bit seguinte. Desta forma para 0001110101 temos:

```
bit:   0     0     0     1     1     1     0     1     0     1
          ┌──┐  ┌──┐  ┌─────┐  ┌──┐  ┌──┐     ┌─────┐     ┌─────┐
          │  │  │  │  │     │  │  │  │  │     │     │     │     │
       ───┘  └──┘  └──┘     └──┘  └──┘  └─────┘     └─────┘     └──
```

**Confiança:** alta    
**Referência:** subcapítulos 2.4.3 - modulação digital e 4.3.1 - camada física da Ethernet clássica

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
