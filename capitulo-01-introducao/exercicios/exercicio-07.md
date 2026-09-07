# Exercício 1.07

## Enunciado

Um dos fatores no atraso de um sistema de comutação de pacotes do tipo armazenar e encaminhar (store-and-forward) é o tempo necessário para armazenar e encaminhar um pacote através de um switch. Se o tempo de comutação for de 20 microssegundos (µs), é provável que ele seja um fator importante no tempo de resposta de um sistema cliente-servidor no qual o cliente está em Nova York e o servidor está na Califórnia?

Considere que a velocidade de propagação em cabos de cobre e fibras ópticas corresponde a 2/3 da velocidade da luz no vácuo.

---

## Resolução — @Pins

Não. O tempo de comutação de **20 µs por switch** provavelmente não será um fator importante, pois o atraso de propagação entre Nova York e a Califórnia será muito maior.

Considerando uma distância aproximada de **4.000 km** e uma velocidade de propagação igual a \(2/3\) da velocidade da luz:

$$
v = \frac{2}{3} \times 300.000\ \text{km/s}
= 200.000\ \text{km/s}
$$

O atraso de propagação em um sentido será:

$$
t = \frac{4.300\ \text{km}}{200.000\ \text{km/s}}
= 0{,}0215\ \text{s}
= 21,5\ \text{ms}
$$

Já o tempo de comutação é:

$$
20\ \mu s = 0{,}02\ \text{ms}
$$

Portanto, o atraso de propagação de aproximadamente **21,5 ms** é mais de **mil vezes maior** que o tempo de passagem por um único switch. Mesmo que o pacote atravesse vários switches, o tempo de comutação continuará sendo relativamente pequeno. Em uma comunicação de ida e volta, o atraso de propagação seria de pelo menos **43 ms**, sem considerar outros atrasos.

Assim, o principal fator no tempo de resposta será a distância entre o cliente e o servidor, e não os 20 µs gastos em cada switch.


**Confiança:** alta  
**Referência:** subcapítulo 1.5.3 - Conexões

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
