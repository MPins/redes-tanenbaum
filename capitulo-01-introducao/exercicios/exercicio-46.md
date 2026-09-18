# Exercício 1.46

## Enunciado

Acesse o site da IETF, [www.ietf.org](https://www.ietf.org), para conhecer os trabalhos que estão sendo desenvolvidos. Escolha um projeto que considere interessante e escreva um relatório de aproximadamente meia página sobre o problema abordado e a solução proposta.


---

## Resolução — @Pins

### RFC 9420 — Messaging Layer Security

A RFC 9420 especifica o protocolo **Messaging Layer Security (MLS)**, criado para proteger comunicações em grupo com criptografia de ponta a ponta. O problema central é estabelecer e atualizar chaves criptográficas compartilhadas entre vários participantes, especialmente quando eles não estão conectados simultaneamente. Soluções tradicionais baseadas na distribuição de uma chave individual para cada remetente podem funcionar em grupos pequenos, mas tornam-se ineficientes à medida que o grupo cresce. Além disso, quando uma chave é comprometida, um invasor pode continuar lendo mensagens futuras até que novas chaves sejam distribuídas a todos os integrantes.

O MLS resolve esse problema organizando os participantes em uma **árvore criptográfica**, chamada *ratchet tree*. Essa estrutura permite adicionar ou remover membros e renovar as chaves do grupo com custos de processamento e comunicação que crescem aproximadamente com o logaritmo do número de participantes, em vez de crescer linear ou quadraticamente. Com isso, o protocolo pode atender grupos que variam de duas a milhares de pessoas.

O estado do grupo é dividido em **épocas**. Sempre que ocorre uma alteração relevante, como a entrada ou saída de um participante ou a atualização de uma chave, o grupo avança para uma nova época e deriva novos segredos. Mensagens do tipo `Proposal` propõem modificações, enquanto mensagens `Commit` aplicam essas alterações e estabelecem o novo estado criptográfico. Novos integrantes recebem uma mensagem `Welcome`, contendo as informações necessárias para ingressar no grupo.

A solução oferece **sigilo futuro**, impedindo que o comprometimento de uma chave atual revele mensagens antigas, e **segurança pós-comprometimento**, permitindo que o grupo volte a ter comunicações seguras após a atualização de suas chaves. Assim, o MLS fornece uma base padronizada, eficiente e escalável para aplicações de mensagens em grupo com criptografia de ponta a ponta, mesmo quando o serviço responsável pela entrega das mensagens não é confiável.

Fonte: [RFC 9420 — The Messaging Layer Security Protocol](https://www.rfc-editor.org/rfc/rfc9420.html).


**Confiança:** alta 
**Referência:** subcapítulo 1.7 - padronização

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
