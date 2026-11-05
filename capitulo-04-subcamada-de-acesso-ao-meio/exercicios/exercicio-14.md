# Exercício 4.14

## Enunciado

Um prédio comercial de sete andares tem 15 escritórios adjacentes por andar. Cada escritório tem uma tomada de parede para um terminal na parede da frente, de modo que as tomadas formam uma grade retangular no plano vertical, com 4 m de separação entre tomadas, tanto na horizontal quanto na vertical. Supondo que seja possível passar um cabo reto entre qualquer par de tomadas, na horizontal, na vertical ou na diagonal, quantos metros de cabo são necessários para conectar todas as tomadas usando:

(a) uma configuração em estrela com um único roteador no meio?  
(b) uma LAN 802.3 clássica?

---

## Resolução — @Pins

**(a)** Na estrela, o roteador fica na tomada do meio da parede e cada tomada tem um cabo próprio, em linha reta, até ele. Não há cabo passando de tomada em tomada. Vista de frente, a parede é uma grade de 15 colunas por 7 andares, e o roteador (R) fica no centro:

```
andar 7  o o o o o o o o o o o o o o o
andar 6  o o o o o o o o o o o o o o o
andar 5  o o o o o o o o o o o o o o o
andar 4  o o o o o o o R o o o o o o o   ← escritório 8
andar 3  o o o o o o o o o o o o o o o
andar 2  o o o o o o o o o o o o o o o
andar 1  o o o o o o o o o o o o o o o
```

Cada "o" liga ao R por um cabo reto, como raios saindo do centro, muitos deles na diagonal. Para medir um cabo, conte quantas colunas ($i$) e quantos andares ($j$) a tomada está do R. O comprimento é a hipotenusa:

$$L = 4\sqrt{i^2 + j^2}\ \text{m}$$

A soma completa percorre todas as tomadas: $i$ de −7 a 7 (colunas) e $j$ de −3 a 3 (andares).

$$L_{\text{total}} = \sum_{i=-7}^{7}\ \sum_{j=-3}^{3} 4\sqrt{i^2+j^2}$$

A tomada do próprio roteador ($i=j=0$) dá 0 e não atrapalha.

```python
import math
print(sum(4*math.hypot(i, j) for i in range(-7, 8) for j in range(-3, 4)))
```

**Resposta:** 1831,77 m

**(b)** São 7 andares de escritórios o que daria na vertical 4 metros vezes (7 - 1) andares de cabo vertical, 24 metros. Mais (15-1) vezes 7 andares vezes 4 metros de cabos na horizontal, 392 metros. Para termos o total basta somar os cabos verticais e horizontais.

**Resposta:** 416 m

**Confiança:** alta    
**Referência:** subcapítulo 4.3.1 - camada física da Ethernet clássica

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
