# Exercício 2.03

## Enunciado

Qual é a largura de banda correspondente a uma faixa de 0,1 mícron do espectro em um comprimento de onda de 1 mícron?

---

## Resolução — `@Pins`

Para converter uma faixa de comprimentos de onda em largura de banda em frequência, usamos a relação:

$$f=\frac{c}{\lambda}$$

$c = \text{velocidade da luz no vácuo} \approx 300.000 \text{ km/s}$  
$\lambda = \text{ comprimento de onda}$  

Para uma pequena variação no comprimento de onda, podemos usar[*](#dedução-da-aproximação):

$$\Delta f \approx \frac{c\Delta\lambda}{\lambda^2}$$


onde:

$\lambda=1 \mu\text{m}=1\times10^{-6} \text{ m}$

$\Delta\lambda=0{,}1 \mu\text{m}=1\times10^{-7} \text{ m}$  

substituindo:

$$
\Delta f \approx
\frac{(3\times10^8)(1\times10^{-7})}
{(1\times10^{-6})^2}
= 3 \times10^{13}\text{ Hz}
= 30 \text{ THz}
$$

### Dedução da aproximação

Sabemos que:

$$f=\frac{c}{\lambda}$$

Se o comprimento de onda aumentar de $\lambda$ para $\lambda + \Delta\lambda$  a frequência passa de:

$$
f_1=\frac{c}{\lambda}
$$

para:

$$
f_2=\frac{c}{\lambda+\Delta\lambda}
$$

A variação da frequência será:

$$
\Delta f=f_2-f_1
$$

Substituindo:

$$
\Delta f=\frac{c}{\lambda+\Delta\lambda}-\frac{c}{\lambda}
$$

Colocando no mesmo denominador:

$$
\Delta f=
\frac{c\lambda-c(\lambda+\Delta\lambda)}
{\lambda(\lambda+\Delta\lambda)}
$$

Simplificando:

$$
\Delta f=
-\frac{c\Delta\lambda}
{\lambda(\lambda+\Delta\lambda)}
$$

$\text{Quando }(\Delta\lambda)\text{ é pequeno em comparação com }(\lambda)\text{, podemos considerar:}$

$$\lambda+\Delta\lambda\approx\lambda$$

Portanto:  

$$
\Delta f\approx-\frac{c\Delta\lambda}{\lambda^2}
$$

Como queremos a largura da faixa, e não o sentido da variação, usamos o valor positivo.



**Confiança:** alta  
**Referência:** NA

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
