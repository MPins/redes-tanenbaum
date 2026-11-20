# Exercício 4.39

## Enunciado

Os quadros de beacon da variante do 802.11 com espalhamento espectral por salto de frequência (FHSS) contêm o tempo de permanência (dwell time). Você acha que os quadros de beacon análogos do Bluetooth também contêm o tempo de permanência? Discuta sua resposta.

---

## Resolução — @Pins

Não. No 802.11 FHSS o tempo de permanência é configurável por rede, por isso precisa ser anunciado no beacon. No Bluetooth ele é fixado pela especificação (slots de 625 µs, até 1600 saltos/s), todo dispositivo já o conhece e enviá-lo seria gastar bits à toa num protocolo que já tem muito overhead. O que o controlador precisa informar é o que muda de uma piconet para outra: seu relógio e seu endereço, que definem a sequência de saltos.

**Confiança:** alta  
**Referência:** subcapítulo 4.5.4 - The Bluetooth Radio Layer

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
