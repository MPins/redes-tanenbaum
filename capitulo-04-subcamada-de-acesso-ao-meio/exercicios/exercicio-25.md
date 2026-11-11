# Exercício 4.25

## Enunciado

Dê um exemplo que mostre que o RTS/CTS do protocolo 802.11 é um pouco diferente do usado no protocolo MACA.

---

## Resolução — @Pins

O RTS/CTS do 802.11 é um pouco diferente do protocolo MACA, porque todos que ouvem o RTS ou o CTS ficam em silêncio durante toda a troca, para que o ACK passe sem colisão. Por causa disso, ele não ajuda com terminais expostos, como o MACA ajudava, só com terminais ocultos.

Exemplo: A envia para B e C está no alcance de A, mas não de B. C ouve o RTS, mas não o CTS. No MACA, C pode transmitir depois do CTS, pois não interfere em B. No 802.11, C fica quieta até o fim, pois o ACK de B chega em A e a transmissão de C colidiria com ele.

**Confiança:** alta  
**Referência:** subcapítulos 4.2.5 - Wireless LAN Protocols e 4.4.3 - The 802.11 MAC Sublayer Protocol

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
