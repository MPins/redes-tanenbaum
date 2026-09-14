# Exercício 1.28

## Enunciado

Um sistema possui uma hierarquia de protocolos com \(n\) camadas. As aplicações geram mensagens com comprimento de \(M\) bytes. Em cada uma das camadas, é acrescentado um cabeçalho de \(h\) bytes. Qual fração da largura de banda da rede é ocupada pelos cabeçalhos?


---

## Resolução — @Pins

Existem (n) cabeçalhos de (h) bytes, totalizando:

$$ (n\times h) \text{ bytes} $$

O tamanho total transmitido será:

$$ (M+n \times h) \text{ bytes} $$

Portanto, a fração da largura de banda ocupada pelos cabeçalhos é:

$$ \boxed{\frac{n \times h}{M+n \times h}} $$

**Confiança:** alta  
**Referência:** NA

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
