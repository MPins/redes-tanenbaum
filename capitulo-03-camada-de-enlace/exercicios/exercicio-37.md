# Exercício 3.37

## Enunciado

No protocolo 6, quando um quadro de dados chega, é feita uma verificação para saber se o número de sequência é diferente do esperado e se `no_nak` é verdadeiro. Se as duas condições forem satisfeitas, um NAK é enviado. Caso contrário, o temporizador auxiliar é iniciado. Suponha que a cláusula `else` fosse omitida. Essa mudança afetaria a correção do protocolo?

---

## Resolução — @Pins

Sim, afetaria. O temporizador auxiliar garante que um ACK seja enviado mesmo sem quadros de dados no sentido contrário para levá-lo de carona, algo que o protocolo 5 não fazia. Sem o `else`, e sem tráfego no sentido contrário, o lado que recebe os dados não envia nenhum ACK; a única confirmação que volta para o lado que transmite os dados é a que vai dentro do NAK, que o lado receptor envia quando chega um quadro com número de sequência diferente do esperado (por exemplo, um quadro fora de ordem ou a retransmissão de um quadro já aceito). Se esse NAK se perder, `no_nak` fica falso, o lado receptor passa a ignorar as retransmissões do quadro (causadas pelo temporizador específico de mensagem) sem responder nada, e o lado transmissor fica retransmitindo este mesmo quadro para sempre: o protocolo entra em impasse. Basta a perda de um único NAK.

**Confiança:** alta    
**Referência:** subcapítulo 3.4.2 - exemplos de protocolos full-duplex sliding window

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
