# Exercício 4.13

## Enunciado

Seis estações, de A a F, se comunicam usando o protocolo MACA. É possível que duas transmissões ocorram simultaneamente? Explique sua resposta.

---

## Resolução — @Pins

Sim, é possível pois podem existir estações fora do alcance da primeira dupla, que não recebem o RTS/CTS e podem iniciar o mesmo protocolo com alguma outra que também não recebeu o RTS/CTS. Por exemplo, com as estações em linha (A-B-C-D-E-F) e cada uma alcançando só as vizinhas, A pode transmitir para B ao mesmo tempo que E transmite para F.

**Confiança:** alta    
**Referência:** subcapítulo 4.2.5 - protocolos de LANs sem fio

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
