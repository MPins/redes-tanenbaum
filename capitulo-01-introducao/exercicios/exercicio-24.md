# Exercício 1.24

## Enunciado

Em algumas redes, a camada de enlace (link) de dados lida com erros de transmissão solicitando a retransmissão de quadros (frames) danificados. Se a probabilidade de um quadro (frame) ser danificado é (p), qual é o número médio de transmissões necessárias para enviar um quadro (frame) com sucesso? Suponha que as confirmações de recebimento (*acknowledgements*) nunca sejam perdidas.


---

## Resolução — @Pins

 Cada tentativa tem probabilidade (1-p) de sucesso. O detalhe é que uma retransmissão também pode chegar danificada.

Para entregar, em média, (n) quadros com sucesso, precisamos de um número (T) de transmissões tal que:

$$ T(1-p)=n $$

Logo:

$$ T=\frac{n}{1-p} $$

Como a pergunta é sobre um único quadro, o número médio de transmissões é:

$$\boxed{\frac{1}{1-p}}$$


**Confiança:** alta  
**Referência:** NA

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
