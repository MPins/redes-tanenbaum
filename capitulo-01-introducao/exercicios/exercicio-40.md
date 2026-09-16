# Exercício 1.40

## Enunciado

A Figura 1-34 mostra diversos protocolos diferentes na pilha de protocolos TCP/IP. Explique por que pode ser útil haver vários protocolos em uma mesma camada. Dê um exemplo.


---

## Resolução — @Pins

Ter vários protocolos em uma mesma camada proporciona flexibilidade para atender aplicações com necessidades diferentes. Embora pertençam à mesma camada, os protocolos podem oferecer características distintas de confiabilidade, velocidade, controle de erros e sobrecarga.

Por exemplo, na camada de transporte existem o TCP e o UDP. O TCP oferece uma comunicação confiável e orientada à conexão, garantindo a entrega e a ordenação dos dados. Por isso, é adequado para aplicações como transferência de arquivos e navegação na Web.

O UDP possui menor sobrecarga e não garante a entrega nem a ordenação dos dados. Ele é útil para aplicações nas quais uma latência baixa é mais importante do que a recuperação de cada pacote perdido, como chamadas de voz, jogos on-line e transmissões de vídeo em tempo real.

Portanto, a existência de vários protocolos na mesma camada permite que cada aplicação utilize aquele que melhor atende às suas necessidades.


**Confiança:** alta  
**Referência:** subcapítulo 1.6.2 - modelo de referência TCP/IP

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
