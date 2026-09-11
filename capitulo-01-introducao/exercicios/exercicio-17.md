# Exercício 1.17

## Enunciado

As correspondências entre as garantias e as camadas são:

---

## Resolução — @Pins


As correspondências entre as garantias e as camadas são:

| Garantia | Camada |
|---|---|
| Entrega por melhor esforço (*best-effort delivery*) | Rede |
| Entrega confiável (*reliable delivery*) | Transporte |
| Entrega em ordem (*in-order delivery*) | Transporte |
| Abstração de fluxo de bytes (*byte-stream abstraction*) | Transporte |
| Abstração de enlace ponto a ponto (*point-to-point link abstraction*) | Enlace |

A camada de enlace oferece às camadas superiores a abstração de uma conexão ponto a ponto entre dispositivos ligados pelo mesmo enlace.

A camada de rede realiza a entrega de pacotes entre computadores através de diferentes redes. No caso do IP, essa entrega é feita por melhor esforço, sem garantia de entrega, ordenação ou ausência de duplicação.

A camada de transporte pode fornecer uma comunicação confiável e ordenada entre processos. Protocolos como o TCP detectam perdas, retransmitem dados e os entregam à aplicação na ordem correta, oferecendo a abstração de um fluxo contínuo de bytes.


**Confiança:** alta  
**Referência:** subcapítulo 1.6.5 - o modelo usado neste livro

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
