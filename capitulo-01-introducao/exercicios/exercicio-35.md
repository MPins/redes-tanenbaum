# Exercício 1.35

## Enunciado

Uma imagem possui **3840 × 2160 pixels**, com **3 bytes por pixel**. Considere que a imagem não está compactada.

Quanto tempo é necessário para transmiti-la através de:

* um canal de modem de **56 kbps**;
* um modem a cabo de **1 Mbps**;
* uma rede Ethernet de **10 Mbps**;
* uma rede Ethernet de **100 Mbps**;
* uma rede Ethernet Gigabit?


---

## Resolução — @Pins

A imagem sem nenhuma compressão possui:

$$
3840 \times 2160 \times 3 \times 8
=
199.065.600\text{ bits}
$$

O tempo de transmissão é obtido dividindo o tamanho da imagem, em bits, pela taxa de transmissão.

Para 56 kbps:

$$
\frac{199.065.600}{56 \times 10^3}
\approx
3.554{,}74\text{ s}
\approx
59\text{ min }15\text{ s}
$$

Para 1 Mbps:

$$
\frac{199.065.600}{1 \times 10^6}
\approx
199{,}07\text{ s}
\approx
3\text{ min }19\text{ s}
$$

Para 10 Mbps:

$$
\frac{199.065.600}{10 \times 10^6}
\approx
19{,}91\text{ s}
$$

Para 100 Mbps:

$$
\frac{199.065.600}{100 \times 10^6}
\approx
1{,}99\text{ s}
$$

Para 1 Gbps:

$$
\frac{199.065.600}{1 \times 10^9}
\approx
0{,}199\text{ s}
\approx
199\text{ ms}
$$

Portanto, em uma rede Gigabit Ethernet, a transmissão levaria aproximadamente 199 ms, desconsiderando os cabeçalhos dos protocolos e outras sobrecargas.


**Confiança:** alta  
**Referência:** NA

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
