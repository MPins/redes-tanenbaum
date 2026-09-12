# Exercício 1.21

## Enunciado

Duas redes oferecem, cada uma, um serviço confiável e orientado à conexão. Uma delas fornece um **fluxo confiável de bytes**, enquanto a outra fornece um **fluxo confiável de mensagens**. Esses serviços são idênticos? Se forem, por que se faz essa distinção? Se não forem, dê um exemplo de como diferem.

---

## Resolução — @Pins

Os serviços não são idênticos. Ambos podem entregar os dados de forma confiável e na ordem correta, mas apenas o fluxo de mensagens preserva os limites de cada mensagem enviada.

Por exemplo, se o remetente enviar `"ABC"` e depois `"DEF"`, um fluxo de mensagens entregará duas mensagens distintas. Já um fluxo de bytes entregará a sequência `"ABCDEF"`: o destinatário poderá lê-la em partes diferentes das usadas no envio e precisará de uma regra adicional para identificar onde termina uma mensagem e começa a outra.

Essa diferença não significa que as garantias atuem necessariamente em camadas distintas. Confiabilidade e preservação dos limites das mensagens são propriedades independentes; a mesma camada, como a de transporte, pode oferecer um serviço com uma ou outra forma de entrega.


**Confiança:** alta  
**Referência:** subcapítulo 1.5.3 - conexões e confiabilidade

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
