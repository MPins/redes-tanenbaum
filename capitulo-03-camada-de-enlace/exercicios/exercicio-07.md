# Exercício 3.7

## Enunciado

Você consegue imaginar alguma circunstância em que um protocolo de malha aberta (por exemplo, um código de Hamming) possa ser preferível aos protocolos com realimentação (*feedback*) discutidos ao longo deste capítulo?

---

## Resolução — @Pins

Segundo o próprio livro Hamming é muito utilizado para correção de dados em memórias, e o motivo é bem simples na verdade, não tem como o receptor pedir um novo envio. As circunstâncias em que a realimentação não funciona bem são:

- **Não existe canal de retorno**: enlaces simplex ou difusão (TV, rádio, satélite para muitos receptores), em que o receptor não tem como pedir de novo.
- **O atraso de propagação é muito grande**: numa sonda espacial, esperar a confirmação e retransmitir levaria minutos ou horas.
- **Tempo real**: em voz e vídeo, o quadro retransmitido chegaria tarde demais para ser útil.
- **Taxa de erros muito alta**: em canais sem fio ruidosos, a retransmissão provavelmente chegaria danificada também.

**Confiança:** alta  
**Referência:** subcapítulo 3.2.1 - códigos de correção de erro

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
