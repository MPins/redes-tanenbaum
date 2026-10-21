# Exercício 3.29

## Enunciado

Dois protocolos, A e B, diferem apenas no tamanho da janela de envio. O protocolo A usa uma janela de envio de 20 quadros. O protocolo B é um protocolo *stop-and-wait*. Os dois protocolos operam em dois canais idênticos. Se o protocolo A atinge quase 100% de eficiência de largura de banda, qual é a eficiência de largura de banda do protocolo B?

---

## Resolução — @Pins

Uma janela de 20 quadros dar quase 100% significa que 20 quadros enchem exatamente o tempo de um ciclo de ida e volta (transmissão + 2 × propagação). Pela fórmula da utilização do canal:

$$\text{eficiência} \approx \frac{w}{1 + 2BD}$$

com w = 20 dando ≈ 100%, temos 1 + 2BD ≈ 20. O stop-and-wait tem w = 1, então:

$$\text{eficiência} \approx \frac{1}{20} = 5\%$$

**Resposta:** cerca de 5%.

**Confiança:** alta    
**Referência:** subcapítulo 3.3.3 e 3.3.4

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
