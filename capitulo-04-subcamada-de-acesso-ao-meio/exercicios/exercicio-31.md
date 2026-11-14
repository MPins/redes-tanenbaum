# Exercício 4.31

## Enunciado

Dê dois motivos pelos quais uma rede poderia usar um código de correção de erros em vez de detecção de erros e retransmissão.

---

## Resolução — @Pins

1. Usar correção ao invés de detecção e retransmissão é melhor quando o meio é ruidoso (ex.: redes sem fio): as retransmissões seriam frequentes e também poderiam chegar com erro. Em meios confiáveis (ex.: fibra) os erros são raros e é mais barato só detectar e retransmitir do que gastar bits extras de correção em todos os quadros.
2. Aplicações em tempo real (ex.: voz e vídeo ao vivo) não podem esperar a retransmissão, que leva pelo menos uma ida e volta; um dado que chega atrasado já não serve, então é melhor corrigir na chegada. O mesmo vale para enlaces com atraso grande, como satélite.

**Confiança:** alta  
**Referência:** subcapítulo 3.2 - Error Detection and Correction

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
