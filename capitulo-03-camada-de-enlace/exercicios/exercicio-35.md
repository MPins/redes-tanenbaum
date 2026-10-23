# Exercício 3.35

## Enunciado

Um tronco T1 de 3.000 km de comprimento é usado para transmitir quadros de 64 bytes com o protocolo 5. Se a velocidade de propagação é de 6 µs/km, quantos bits devem ter os números de sequência?

---

## Resolução — @Pins

Vamos primeiro calcular o tempo de propagação:

$$t_{\text{prop}} = 3.000\text{ km} \times6\text{ µs/km}=18.000\text{ µs}=18\text{ ms}$$

Agora o tempo para enviar um quadro, T1 transmite a 1,544 Mbps, e o quadro tem 64 bytes = 512 bits:

$$t_{\text{quadro}}=\frac{512}{1544\times10^3}=0{,}3316\text{ ms}$$

A duração total do ciclo é t_quadro + 2 × t_prop:

$$t_{\text{ciclo}}=0{,}3316+2\times18=36{,}3316\text{ ms}$$

A janela deve ser então:

$$w=\frac{t_{\text{ciclo}}}{t_{\text{quadro}}}=\frac{36{,}3316}{0{,}3316}=109{,}5645$$

A janela precisa ter pelo menos 110 quadros. No protocolo 5, a janela máxima é 2ⁿ − 1: com 6 bits seriam 63 quadros, insuficiente; com 7 bits, 127 ≥ 110. Portanto o número de sequência precisa de 7 bits.

**Resposta:** 7 bits

**Confiança:** alta  
**Referência:** subcapítulo 3.4.2 - exemplos de protocolos full-duplex sliding window

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
