# Exercício 3.13

## Enunciado

Um código de Hamming de 12 bits com paridade ímpar, cujo valor hexadecimal é 0xB4D, chega a um receptor. Qual era o valor original em hexadecimal? Suponha que não mais do que 1 bit esteja errado.

---

## Resolução — @Pins

$$
\underbrace{
\begin{array}{cccccccccccc}
p_1 & p_2 & m_3 & p_4 & m_5 & m_6 & m_7 & p_8 & m_9 & m_{10} & m_{11} & m_{12}\\
1 & 0 & 1 & 1 & 0 & 1 & 0 & 0 & 1 & 1 & 0 & 1
\end{array}
}_{\text{Palavra-código recebida}}
$$

Dos exercícios [11](exercicio-11.md) e [12](exercicio-12.md) sabemos quais bits de dados impactam quais bits de paridade, então:

$p_1 \rightarrow m_3 \space m_5 \space m_7 \space m_9 \space m_{11} \rightarrow 1 \space 0 \space 0 \space 1 \space 0 \rightarrow 1$   
$p_2 \rightarrow m_3 \space m_6 \space m_7 \space m_{10} \space m_{11} \rightarrow 1 \space 1 \space 0 \space 1 \space 0 \rightarrow 0$  
$p_4 \rightarrow m_5 \space m_6 \space m_7 \space m_{12} \rightarrow 0 \space 1 \space 0 \space 1 \rightarrow 1$  
$p_8 \rightarrow m_9 \space m_{10} \space m_{11} \space m_{12} \rightarrow 1 \space 1 \space 0 \space 1 \rightarrow 0$  

Os bits de paridade não apontaram nenhum erro, logo a mensagem original é formada por:

$$
\underbrace{
\begin{array}{cccccccccccc}
m_3 & m_5 & m_6 & m_7 & m_9 & m_{10} & m_{11} & m_{12}\\
1 & 0 & 1 & 0 & 1 & 1 & 0 & 1
\end{array}
}_{\text{mensagem original}}
$$

**Resposta:** 0xAD

**Confiança:** alta  
**Referência:** subcapítulo 3.2.1 - códigos de correção de erro

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
