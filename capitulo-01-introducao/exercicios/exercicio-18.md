# Exercício 1.18

## Enunciado

Toda camada de rede interage com a camada abaixo dela por meio de sua interface. Para cada uma das funções abaixo, indique a qual interface ela pertence.

| Função | Interface |
| --- | --- |
| `send_bits_over_link(bits)` |  |
| `send_bytes_to_process(dst, src, bytes)` |  |
| `send_bytes_over_link(dst, src, bytes)` |  |
| `send_bytes_to_machine(dst, src, bytes)` |  |

---

## Resolução — @Pins

| Função | Interface |
| --- | --- |
| `send_bits_over_link(bits)` | Física |
| `send_bytes_to_process(dst, src, bytes)` | Transporte |
| `send_bytes_over_link(dst, src, bytes)` | Enlace |
| `send_bytes_to_machine(dst, src, bytes)` | Rede |

A lógica é:

* send_bits_over_link(bits): envia bits pelo meio físico → interface da camada física;
* send_bytes_over_link(...): envia dados através de um enlace local → interface da camada de enlace;
* send_bytes_to_machine(...): envia dados para uma máquina em outra rede → interface da camada de rede;
* send_bytes_to_process(...): entrega dados a um processo específico → interface da camada de transporte.

A sequência das abstrações é:

$$ \text{bits} \rightarrow \text{enlace} \rightarrow \text{máquina} \rightarrow \text{processo} $$

Ou seja:

$$ \text{Física} \rightarrow \text{Enlace} \rightarrow \text{Rede} \rightarrow \text{Transporte} $$

**Confiança:** alta  
**Referência:** subcapítulo 1.6.5 - o modelo usado neste livro

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
