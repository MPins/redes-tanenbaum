# Exercício 1.25

## Enunciado

Qual das camadas dos modelos **OSI** e **TCP/IP** é responsável por cada uma das seguintes tarefas?

(a) Dividir o fluxo de bits transmitido em quadros (*frames*).

(b) Determinar qual rota usar através da sub-rede.


---

## Resolução — @Pins

| # | OSI | TCP/IP |
|:-:|:---|:---|
| 7 | Aplication | Aplication |
| 6 | Apresentação | *(não presente no modelo)* |
| 5 | Sessão | *(não presente no modelo)* |
| 4 | Transport | Transport |
| 3 | Network | Internet |
| 2 | Data link | Link |
| 1 | Physical | *(não presente no modelo)* |

$(a) Resp: OSI \rightarrow \text{Data link } \text{ TCP/IP} \rightarrow \text{Link}$  
$(b) Resp: OSI \rightarrow \text{Network } \text{ TCP/IP} \rightarrow \text{Internet}$

**Confiança:** alta  
**Referência:** subcapítulo 1.6 - modelos de referência

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
