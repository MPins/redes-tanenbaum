# Exercício 1.16

## Enunciado

Explique por que as camadas de enlace (link), de rede (network) e de transporte (transport) precisam, cada uma delas, adicionar informações de origem e destino ao "payload".


---

## Resolução — @Pins

Cada camada precisa adicionar informações próprias de origem e destino porque elas identificam entidades diferentes e atuam em escopos distintos.

A camada de enlace utiliza endereços físicos, como os endereços MAC, para transportar um quadro entre dispositivos conectados ao mesmo enlace. Esses endereços normalmente identificam o remetente e o destinatário do próximo salto e podem mudar cada vez que o pacote atravessa um roteador.

A camada de rede utiliza endereços lógicos, como os endereços IP, para identificar os computadores de origem e destino ao longo de toda a comunicação. Esses endereços permitem que os roteadores encaminhem o pacote através de diferentes redes até o computador de destino.

Por fim, a camada de transporte utiliza números de porta para identificar os processos ou aplicações que estão se comunicando dentro desses computadores. Por exemplo, um mesmo computador pode executar simultaneamente um navegador, um servidor web e outros programas; os números de porta indicam a qual aplicação os dados devem ser entregues.

Portanto, cada camada adiciona informações de origem e destino porque precisa realizar uma forma diferente de entrega:

* camada de enlace: entrega entre dispositivos no mesmo enlace ou salto;
* camada de rede: entrega entre computadores através de diferentes redes;
* camada de transporte: entrega entre processos ou aplicações.

Assim, um endereço IP identifica o computador, mas não a aplicação; uma porta identifica a aplicação, mas não permite o roteamento entre redes; e um endereço MAC permite a entrega no enlace local, mas não o encaminhamento completo pela Internet.


**Confiança:** alta  
**Referência:** subcapítulo 1.6.5 - o modelo usado neste livro

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
