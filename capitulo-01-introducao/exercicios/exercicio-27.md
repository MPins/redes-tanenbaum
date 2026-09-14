# Exercício 1.27

## Enunciado

Considere uma hierarquia de protocolos com seis camadas, na qual a camada 1 é a camada mais baixa e a camada 6 é a mais alta. Uma aplicação envia uma mensagem \(M\), entregando-a à camada 6. Todas as camadas de número par acrescentam um **trailer** à sua carga útil, enquanto todas as camadas de número ímpar acrescentam um **cabeçalho** à sua carga útil.

Desenhe os cabeçalhos, os *trailers* e a mensagem original \(M\) na ordem em que são transmitidos pela rede.


---

## Resolução — @Pins

O encapsulamento acontece da camada 6 para a camada 1:

$$ M \rightarrow MT_6 \rightarrow H_5MT_6 \rightarrow H_5MT_6T_4 \rightarrow H_3H_5MT_6T_4 \rightarrow H_3H_5MT_6T_4T_2 \rightarrow H_1H_3H_5MT_6T_4T_2 $$

Portanto, a ordem transmitida pela rede é:

$$ \boxed{H_1\ H_3\ H_5\ M\ T_6\ T_4\ T_2} $$


**Confiança:** alta  
**Referência:** subcapítulo 1.6 - modelos de referência

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
