# Exercício 4.19

## Enunciado

Um pacote IP a ser transmitido por Ethernet tem 60 bytes, incluindo todos os seus cabeçalhos. Se o LLC não estiver em uso, é necessário preenchimento (padding) no quadro Ethernet? Em caso afirmativo, de quantos bytes?

---

## Resolução — @Pins

No Ethernet clássico, o tamanho mínimo é de 64 bytes para o quadro inteiro, do endereço de destino até o checksum.


| Preâmbulo | Destino | Origem | Tipo | Dados | Pad | Checksum |
|:-:|:-:|:-:|:-:|:-:|:-:|:-:|
| 8 | 6 | 6 | 2 | 0–1500 | 0–46 | 4 |

Ou seja, ao pegar um pacote IP de 60 bytes e acrescentar os 18 bytes (destino, origem, tipo e checksum), o quadro fica com 78 bytes, acima do mínimo, e não é necessário "padding".


**Confiança:** alta  
**Referência:** subcapítulo 4.3.2 - Protocolo da subcamada MAC do Ethernet clássico

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
