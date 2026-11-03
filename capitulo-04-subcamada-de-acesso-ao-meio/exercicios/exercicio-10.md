# Exercício 4.10

## Enunciado

Um grupo de amigos se reúne para jogar videogames altamente interativos, que exigem muito da CPU e da rede. Eles jogam juntos usando uma rede sem fio de alta largura de banda. O sinal sem fio não atravessa paredes, mas os amigos estão todos na mesma sala. Nesse cenário, seria melhor usar CSMA não persistente ou o protocolo *token ring*? Explique sua resposta.

---

## Resolução — @Pins

Como todos estão na mesma sala, todas as estações se ouvem e o CSMA seria viável. Mesmo assim, neste cenário o token ring terá um desempenho melhor: com o tráfego intenso dos jogos o canal estará quase sempre ocupado, e no CSMA não persistente as estações teriam que esperar tempos aleatórios e sofreriam colisões. No token ring não há colisões e, como são poucas estações, o token circula rapidamente entre elas, garantindo um atraso máximo previsível, o que é importante para jogos interativos.

**Confiança:** alta    
**Referência:** subcapítulos 4.2.2 - protocolos CSMA e 4.2.3 - protocolos livres de colisão

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
