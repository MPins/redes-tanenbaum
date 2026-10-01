# Exercício 2.10

## Enunciado

Calcule os coeficientes de Fourier para a função:

$$
f(t)=t,\qquad 0\leq t\leq1
$$

---

## Resolução — @Pins (by GPT)

Consideramos que essa função se repete com período:

$$
T=1
$$

Ela forma uma onda do tipo “dente de serra”: cresce de 0 até 1 e depois retorna a 0 a cada período.

### Resolução

O livro utiliza a série de Fourier na forma:

$$
f(t)=\frac{c}{2}
+\sum_{n=1}^{\infty}a_n\sin(2\pi nt)
+\sum_{n=1}^{\infty}b_n\cos(2\pi nt)
$$

Como \(T=1\), a frequência fundamental é:

$$
f_0=\frac{1}{T}=1
$$

Os coeficientes são:

$$
c=2\int_0^1 f(t)\,dt
$$

$$
a_n=2\int_0^1 f(t)\sin(2\pi nt)\,dt
$$

$$
b_n=2\int_0^1 f(t)\cos(2\pi nt)\,dt
$$

#### Coeficiente constante

Como \(f(t)=t\):

$$
c=2\int_0^1t\,dt
$$

$$
c=2\left[\frac{t^2}{2}\right]_0^1
$$

$$
\boxed{c=1}
$$

Portanto, o termo constante é:

$$
\frac{c}{2}=\frac{1}{2}
$$

#### Coeficientes dos senos

$$
a_n=2\int_0^1t\sin(2\pi nt)\,dt
$$

Usando integração por partes:

$$
u=t
\qquad\Longrightarrow\qquad
du=dt
$$

$$
dv=\sin(2\pi nt)\,dt
\qquad\Longrightarrow\qquad
v=-\frac{\cos(2\pi nt)}{2\pi n}
$$

Logo:

$$
\int_0^1t\sin(2\pi nt)\,dt
=
\left[
-\frac{t\cos(2\pi nt)}{2\pi n}
\right]_0^1
+
\frac{1}{2\pi n}
\int_0^1\cos(2\pi nt)\,dt
$$

Como \(n\) é inteiro:

$$
\cos(2\pi n)=1
$$

e:

$$
\int_0^1\cos(2\pi nt)\,dt=0
$$

Portanto:

$$
\int_0^1t\sin(2\pi nt)\,dt
=
-\frac{1}{2\pi n}
$$

Multiplicando por 2:

$$
\boxed{a_n=-\frac{1}{\pi n}}
$$

#### Coeficientes dos cossenos

$$
b_n=2\int_0^1t\cos(2\pi nt)\,dt
$$

Após a integração por partes, todos os termos se anulam nos limites \(0\) e \(1\):

$$
\boxed{b_n=0}
$$

### Resultado

Os coeficientes de Fourier são:

$$
\boxed{
c=1,\qquad
a_n=-\frac{1}{\pi n},\qquad
b_n=0
}
$$

Assim, a série de Fourier da função é:

$$
\boxed{
f(t)=
\frac{1}{2}
-
\sum_{n=1}^{\infty}
\frac{1}{\pi n}\sin(2\pi nt)
}
$$

Ou, escrevendo os primeiros termos:

$$
f(t)=
\frac{1}{2}
-\frac{1}{\pi}\sin(2\pi t)
-\frac{1}{2\pi}\sin(4\pi t)
-\frac{1}{3\pi}\sin(6\pi t)
-\cdots
$$

Essa expressão representa (f(t)=t) no intervalo (0<t<1), repetida periodicamente. Nos pontos de descontinuidade t=0,1,2, ..., a série converge para 1/2, a média entre os limites 0 e 1.


**Confiança:** alta  
**Referência:** NA

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
