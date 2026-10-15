# Exercício 3.12

## Enunciado

Um byte de 8 bits com valor binário 1001 1010 deve ser codificado usando um código de Hamming com paridade ímpar. Qual é o valor binário após a codificação?

---

## Resolução — @Pins

$$
\underbrace{
\begin{array}{cccccccccccc}
p_1 & p_2 & m_3 & p_4 & m_5 & m_6 & m_7 & p_8 & m_9 & m_{10} & m_{11} & m_{12}\\
? & ? & 1 & ? & 0 & 0 & 1 & ? & 1 & 0 & 1 & 0
\end{array}
}_{\text{Posições antes do cálculo das paridades}}
$$

Para ver para quais bits de verificação o bit de dados na posição k contribui, reescreva k como uma soma de potências de 2.

$m_3 \rightarrow p_1 \space p_2$  
$m_5 \rightarrow p_1 \space p_4$  
$m_6 \rightarrow p_2 \space p_4$  
$m_7 \rightarrow p_1 \space p_2 \space p_4$  
$m_9 \rightarrow p_1 \space p_8$  
$m_{10} \rightarrow p_2 \space p_8$  
$m_{11} \rightarrow p_1 \space p_2 \space p_8$  
$m_{12} \rightarrow p_4 \space p_8$

escrito de outra forma, escolhendo cada paridade para que o grupo tenha uma quantidade ímpar de 1s:

$p_1 \rightarrow m_3 \space m_5 \space m_7 \space m_9 \space m_{11} \rightarrow 1 \space 0 \space 1 \space 1 \space 1 \rightarrow 1$  
$p_2 \rightarrow m_3 \space m_6 \space m_7 \space m_{10} \space m_{11} \rightarrow 1 \space 0 \space 1 \space 0 \space 1 \rightarrow 0$  
$p_4 \rightarrow m_5 \space m_6 \space m_7 \space m_{12} \rightarrow 0 \space 0 \space 1 \space 0 \rightarrow 0$  
$p_8 \rightarrow m_9 \space m_{10} \space m_{11} \space m_{12} \rightarrow 1 \space 0 \space 1 \space 0 \rightarrow 1$  

$$
\underbrace{
\begin{array}{cccccccccccc}
p_1 & p_2 & m_3 & p_4 & m_5 & m_6 & m_7 & p_8 & m_9 & m_{10} & m_{11} & m_{12}\\
1 & 0 & 1 & 0 & 0 & 0 & 1 & 1 & 1 & 0 & 1 & 0
\end{array}
}_{\text{Palavra-código enviada}}
$$

**Resposta:** 101000111010

**Confiança:** alta    
**Referência:** subcapítulo 3.2.1 - códigos de correção de erro

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
