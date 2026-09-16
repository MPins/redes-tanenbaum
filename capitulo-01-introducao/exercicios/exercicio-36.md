# Exercício 1.36

## Enunciado

A Ethernet e as redes sem fio apresentam algumas semelhanças e algumas diferenças. Uma característica da Ethernet é que apenas um quadro por vez pode ser transmitido em uma rede Ethernet. O padrão 802.11 compartilha essa característica com a Ethernet? Discuta sua resposta.

---

## Resolução — @Pins

A afirmação de que apenas um quadro pode ser transmitido por vez se aplica principalmente à **Ethernet compartilhada tradicional**, na qual vários dispositivos utilizavam o mesmo meio físico, como um cabo coaxial ou uma rede conectada por hubs. Nesse caso, as estações utilizavam o CSMA/CD para detectar colisões.

Na **Ethernet moderna**, normalmente são utilizados switches e conexões full-duplex. Cada dispositivo possui um enlace exclusivo com o switch e pode transmitir e receber simultaneamente. Portanto, não existem colisões como nas antigas redes Ethernet compartilhadas.

O padrão 802.11 compartilha parcialmente a característica da Ethernet compartilhada. Em uma rede Wi-Fi, as estações que utilizam o mesmo canal de rádio e estão dentro da mesma área de cobertura compartilham o meio de transmissão. Em geral, apenas uma delas deve transmitir por vez.

Entretanto, o 802.11 não consegue detectar colisões durante a transmissão, pois o sinal transmitido pela própria estação é muito mais forte do que os sinais que ela poderia receber. Por isso, utiliza o CSMA/CA, que procura evitar colisões verificando se o canal está livre e empregando tempos aleatórios de espera e confirmações de recebimento.

Ainda assim, duas estações podem transmitir simultaneamente quando utilizam canais diferentes ou quando estão suficientemente distantes para permitir o reúso espacial da mesma frequência. Também pode ocorrer de duas estações que não conseguem detectar uma à outra transmitirem simultaneamente e causarem uma colisão no ponto de acesso. Essa situação é conhecida como **problema do terminal oculto**.

Portanto, o 802.11 compartilha essa propriedade com a Ethernet compartilhada tradicional: dentro da mesma área de cobertura e no mesmo canal, procura-se permitir apenas uma transmissão por vez. Porém, essa propriedade não se aplica de maneira absoluta a toda a rede sem fio e também não descreve adequadamente a Ethernet comutada moderna.

### CSMA/CD e CSMA/CA

O **CSMA/CD** (*Carrier Sense Multiple Access with Collision Detection*) era utilizado na Ethernet compartilhada tradicional. Antes de transmitir, o dispositivo verificava se o meio estava livre. Caso detectasse uma colisão durante a transmissão, interrompia o envio, aguardava um intervalo aleatório e tentava novamente. Portanto, seu objetivo era **detectar e tratar colisões**.

O **CSMA/CA** (*Carrier Sense Multiple Access with Collision Avoidance*) é utilizado nas redes Wi-Fi 802.11. Como uma estação sem fio não consegue detectar uma colisão com segurança enquanto transmite, ela procura **evitá-la**. Para isso, verifica se o canal está livre, aguarda um intervalo aleatório antes de transmitir e espera uma confirmação de recebimento, chamada **ACK**. Caso não receba o ACK, presume que o quadro não foi entregue e tenta transmiti-lo novamente.

Em resumo:

* **CSMA/CD:** detecta uma colisão depois que ela ocorre;
* **CSMA/CA:** procura evitar que a colisão ocorra.



**Confiança:** alta  
**Referência:** subcapítulo 1.4 - exemplos de redes


---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
