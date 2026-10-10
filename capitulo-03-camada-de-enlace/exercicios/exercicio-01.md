# Exercício 3.1

## Enunciado

O Ethernet usa um preâmbulo em combinação com uma contagem de bytes para separar os quadros. O que acontece se um usuário tentar enviar dados que contenham esse preâmbulo?

---

## Resolução — @Pins

**Dentro do quadro**: o receptor só procura o preâmbulo quando está esperando o início de um quadro. Depois de achá-lo, ele lê o campo de comprimento e simplesmente conta os bytes até o fim. Nesse trecho nada é interpretado como delimitador, então um preâmbulo no meio dos dados é tratado como dado comum.
**Se a sincronização se perder**: aí sim o receptor pode confundir esse falso preâmbulo com o início de um quadro, por exemplo se começar a escutar no meio de uma transmissão ou se um erro corromper o campo de comprimento. Ele leria um "cabeçalho" sem sentido, mas o checksum (CRC) falharia e o quadro seria descartado. Depois ele volta a procurar o próximo preâmbulo.

**Confiança:** alta  
**Referência:** subcapítulo 3.1.2 - framing
---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
