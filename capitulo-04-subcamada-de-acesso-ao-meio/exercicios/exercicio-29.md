# Exercício 4.29

## Enunciado

Dois dispositivos conectados à mesma rede 802.11 estão baixando um arquivo grande da Internet. Explique como um dispositivo poderia obter uma taxa de dados maior que o outro (ab)usando um mecanismo do 802.11 criado para oferecer qualidade de serviço.

---

## Resolução — @Pins

O dispositivo pode marcar seu tráfego como alta prioridade (voz) e usar sempre o AIFS1. Como ele espera menos tempo que o outro depois que o canal fica livre, começa a transmitir primeiro e ganha a disputa quase sempre. O 802.11 não confere se o tráfego é mesmo de voz, a prioridade é declarada por quem envia. Num download o ganho vem de duas formas: os ACKs do TCP enviados pelo dispositivo saem antes, e o AP também prioriza os dados que descem para ele se vierem marcados como alta prioridade.

**Confiança:** alta  
**Referência:** subcapítulo 4.4.3 - The 802.11 MAC Sublayer Protocol

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
