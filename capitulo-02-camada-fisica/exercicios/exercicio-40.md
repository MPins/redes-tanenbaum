# Exercício 2.40

## Enunciado

Se um sistema de portadora T1 sofrer um deslizamento e perder a noção de onde está, ele tentará se ressincronizar usando o primeiro bit de cada quadro. Quantos quadros terão de ser inspecionados, em média, para se ressincronizar com uma probabilidade de 0,001 de estar errado?

---

## Resolução — @Pins

Sabemos que dos 193 bits por quadro 1 é de enquadramento. Este bit, que é o primeiro de cada quadro, não é aleatório, ele segue um padrão conhecido: alterna 0, 1, 0, 1, ... de um quadro para o outro.

O problema é que um bit de dados também pode, por acaso, seguir esse padrão por alguns quadros. Supondo que os bits de dados são aleatórios:

- em cada quadro, a chance de um bit de dados "acertar" o próximo valor do padrão é 1/2;
- os quadros são independentes, então a chance de acertar k quadros seguidos é $(1/2)^k$.

O enunciado quer uma probabilidade de erro de 0,001. Então precisamos do menor k tal que:

$$\left(\frac{1}{2}\right)^k \le 0{,}001$$

$$\log_2\left(\frac{1}{2}\right)^k \le \log_2 0{,}001$$

$$k \cdot \log_2\frac{1}{2} \le \log_2 0{,}001$$

$$-k \le \log_2 0{,}001= \frac{\log_{10} 0{,}001}{\log_{10} 2} = \frac{-3}{0{,}301} \approx -9{,}97$$

$$-k \le -9{,}97$$

$$k \ge 9{,}97$$

Como k é inteiro, k = 10.

**Resposta:** 10 quadros.

**Confiança:** alta  
**Referência:** subcapítulo 2.5.3 - troncos e multiplexação

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
