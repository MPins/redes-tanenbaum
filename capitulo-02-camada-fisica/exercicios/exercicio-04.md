    # Exercício 2.4

## Enunciado

Deseja-se transmitir uma sequência de imagens de uma tela de computador por meio de uma fibra óptica. A tela possui **3840 × 2160 pixels**, sendo cada pixel representado por **24 bits**. São transmitidas **60 imagens por segundo**. Qual é a taxa de transmissão de dados necessária?


---

## Resolução — @Pins

Vamos primeiro calcular a quantidade de bits em uma imagem da tela:

$\text{Qtd de bit por imagem = } 3840 \times 2160 \times 24 = 199.065.600 \text { bits}$

Agora multiplica-se pela quantidade de imagens transmitidas por segundo:

$ \text{taxa de transmissão } = 199.065.600 \times 60 = 11.943.936.000 \text{ bits/s} \approx \boxed{12 \text{ Gbits/s}}$

Esse valor considera as imagens sem compressão e não inclui possíveis cabeçalhos ou outros dados de controle da transmissão.

**Confiança:** alta  
**Referência:** NA

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
