# Exercício 4.37

## Enunciado

O Bluetooth suporta dois tipos de enlace entre um controlador (controller) e um worker. Quais são eles e para que serve cada um?

---

## Resolução — @Pins

* **SCO (Synchronous Connection Oriented)** - usado para dados em tempo real, como ligações telefônicas. Recebe um slot fixo em cada sentido e os quadros nunca são retransmitidos; para aumentar a confiabilidade usa-se correção de erros (FEC).

* **ACL (Asynchronous ConnectionLess)** - usado para dados comutados por pacotes que chegam de forma irregular. A entrega é de melhor esforço, sem garantias: quadros podem se perder e precisar ser retransmitidos.

**Confiança:** alta  
**Referência:** subcapítulo 4.5.5 - The Bluetooth Link Layers

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
