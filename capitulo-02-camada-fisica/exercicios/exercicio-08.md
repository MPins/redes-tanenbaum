# Exercício 2.8

## Enunciado

O desvanecimento por múltiplos caminhos (*multipath fading*) é máximo quando os dois feixes chegam com uma diferença de fase de 180 graus. Qual deve ser a diferença entre os comprimentos dos caminhos para maximizar o desvanecimento em um enlace de micro-ondas de 1 GHz e 100 km de comprimento?


---

## Resolução — @Pins

A pergunta pede para calcular qual diferença de caminho produziria o pior caso de interferência destrutiva.

No multipath, duas cópias do mesmo sinal chegam ao receptor por caminhos diferentes:

uma pode chegar diretamente;
outra pode chegar após uma reflexão.

Se chegarem com diferença de fase de $180^o$, uma onda estará no máximo positivo enquanto a outra estará no máximo negativo. Se tiverem amplitudes semelhantes, elas podem praticamente se cancelar.

Uma volta completa, $360^o$, corresponde a um comprimento de onda $\lambda$. Portanto, $180^o$ corresponde à metade:

$$ \Delta d=\frac{\lambda}{2} $$

Para f=1 GHz:

$$ \lambda=\frac{c}{f} = \frac{3\times10^8}{1\times10^9} = 0{,}3\text{ m} $$

Logo, a menor diferença de caminho necessária é:

$$ \Delta d=\frac{0{,}3}{2}=0{,}15\ \text{m} = 15 \text{ cm}$$

	

**Confiança:** alta  
**Referência:** NA  

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
