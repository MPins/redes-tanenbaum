# Exercício 1.43

## Enunciado

Descubra como abrir o monitor de rede integrado do seu navegador. Abra-o e acesse uma página da Web, por exemplo, [https://www.cs.vu.nl/~ast/](https://www.cs.vu.nl/~ast/).

Quantas requisições o seu navegador — o cliente — envia ao servidor? Que tipos de requisições ele envia? Por que essas requisições são realizadas separadamente, em vez de serem feitas como uma única grande requisição?


---

## Resolução — @Pins

Ao abrir o monitor de rede do navegador e acessar a página indicada, foram registradas **14 requisições HTTP**.

Dessas requisições:

* **11 utilizaram o método GET**, para obter o documento HTML, a folha de estilos CSS, imagens nos formatos GIF, JPEG e PNG, o ícone da página e arquivos JavaScript;
* **3 utilizaram o método POST**, para enviar informações a serviços de estatísticas e análise de acesso, como Google Analytics e StatCounter.

A primeira requisição obtém o documento HTML principal. Depois de interpretá-lo, o navegador encontra referências a outros recursos necessários para exibir e executar a página, fazendo uma nova requisição para cada um deles.

Os recursos são solicitados separadamente porque cada um possui seu próprio endereço, tipo e finalidade. Isso também permite que sejam carregados em paralelo, armazenados individualmente no cache, reutilizados em outras páginas e atualizados sem a necessidade de transferir novamente todo o conteúdo da página.


**Confiança:** alta  
**Referência:** NA

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
