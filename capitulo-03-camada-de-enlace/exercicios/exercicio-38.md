# Exercício 3.38

## Enunciado

Suponha que o laço `while` de três comandos perto do fim do protocolo 6 fosse removido do código. Isso afetaria a correção do protocolo ou apenas o desempenho? Explique sua resposta.

---

## Resolução — @Pins

Afetaria a correção. Esse laço processa os ACKs recebidos: para cada quadro confirmado, libera o buffer (`nbuffered`), para o seu temporizador e avança `ack_expected`, a borda inferior da janela do transmissor. Sem ele, as confirmações seriam ignoradas: a janela nunca avançaria e, assim que `nbuffered` chegasse a `NR_BUFS`, a camada de rede seria desabilitada para sempre, enquanto os temporizadores continuariam provocando retransmissões de quadros já entregues. O protocolo travaria.

**Confiança:** alta    
**Referência:** subcapítulo 3.4.2 - exemplos de protocolos full-duplex sliding window

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
