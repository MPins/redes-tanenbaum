# Exercício 1.26

## Enunciado

Se a unidade trocada na camada de enlace de dados é chamada de **quadro** (*frame*) e a unidade trocada na camada de rede é chamada de **pacote** (*packet*), os quadros encapsulam os pacotes ou os pacotes encapsulam os quadros? Explique sua resposta.


---

## Resolução — @Pins

A camada inferior da pilha de protocolos encapsula a unidade de dados recebida da camada superior, acrescentando seu próprio cabeçalho e, em alguns protocolos, um trailer. Nesse caso, os quadros (frames) da camada de enlace encapsulam os pacotes (packets) da camada de rede. O pacote torna-se a carga útil do quadro durante a transmissão por um enlace. Ao chegar ao destino daquele enlace, a camada de enlace remove o cabeçalho e o trailer do quadro e entrega o pacote à camada de rede.

**Confiança:** alta  
**Referência:** subcapítulo 1.6 - modelos de referências

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
