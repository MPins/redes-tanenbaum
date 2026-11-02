# Exercício 4.7

## Enunciado

Quanto tempo uma estação *s* precisa esperar, no pior caso, antes de poder começar a transmitir seu quadro em uma LAN que usa o protocolo básico de mapa de bits?

---

## Resolução — @Pins

O protocolo básico de mapa de bits tem um bit no mapa para cada estação, sendo assim o pior caso é quando a estação s é a última a transmitir quando todas as estações sinalizam ao mesmo tempo a intenção de transmitir, ela então tem uma espera total que será o tempo para a transmissão do mapa de bits, somado ao tempo de transmissão de todas as N − 1 estações para por fim poder fazer a sua transmissão.

Medindo o tempo em slots de bit, com N estações e quadros de d slots:

$$T_{\text{espera}} = N + (N-1)\,d$$

**Confiança:** alta    
**Referência:** subcapítulo 4.2.3 - protocolos livres de colisão

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
