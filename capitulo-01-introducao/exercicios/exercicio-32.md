# Exercício 1.32

## Enunciado

Quando um arquivo é transferido entre dois computadores, podem ser utilizadas duas estratégias de confirmação de recebimento:

Na primeira, o arquivo é dividido em pacotes, e cada pacote é confirmado individualmente pelo receptor, mas a transferência do arquivo como um todo não recebe uma confirmação.

Na segunda, os pacotes não são confirmados individualmente, mas o arquivo inteiro é confirmado quando chega ao destino.

Discuta essas duas abordagens.


---

## Resolução — @Pins

Na primeira estratégia, cada pacote é confirmado individualmente. Se um pacote for perdido ou chegar danificado, apenas ele precisará ser retransmitido. Isso torna a abordagem eficiente para arquivos grandes e redes sujeitas a perdas. Por outro lado, o envio de uma confirmação para cada pacote aumenta o tráfego e exige que transmissor e receptor mantenham o estado de muitos pacotes. Além disso, receber a confirmação de todos os pacotes não garante necessariamente que o arquivo tenha sido corretamente reconstruído, validado e entregue à aplicação.

Na segunda estratégia, apenas o arquivo completo é confirmado. Isso reduz a quantidade de confirmações e fornece uma garantia de mais alto nível: o receptor conseguiu receber e reconstruir o arquivo inteiro. Entretanto, se um único pacote for perdido e não houver outro mecanismo de recuperação, o transmissor poderá descobrir o problema somente após um longo tempo de espera e talvez precise retransmitir todo o arquivo. Essa abordagem pode ser muito ineficiente para arquivos grandes ou redes com perdas frequentes.

Uma solução mais robusta seria combinar as duas estratégias: usar confirmações de pacotes para recuperar perdas com eficiência e, ao final, uma confirmação do arquivo completo, possivelmente após verificar seu tamanho ou hash. Dessa forma, as confirmações individuais garantem a transferência dos dados, enquanto a confirmação final garante que o objetivo da aplicação foi alcançado.


**Confiança:** alta  
**Referência:** NA

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
