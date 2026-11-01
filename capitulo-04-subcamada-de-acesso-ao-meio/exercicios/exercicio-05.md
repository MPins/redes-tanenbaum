# Exercício 4.5

## Enunciado

A Figura 4-4 mostra que a vazão máxima varia do ALOHA puro (a menor) ao CSMA 0,01-persistente (a maior). Para alcançar uma vazão máxima maior, um protocolo faz algumas concessões, por exemplo, suporte extra de hardware ou maior tempo de espera. Para os protocolos mostrados nessa figura, explique que concessão cada um faz para alcançar uma vazão maior.

---

## Resolução — @Pins

**Slotted ALOHA** - essa abordagem exige que os usuários concordem sobre os limites dos slots, a estação não pode transmitir sempre que deseja, em vez disso, ela precisa esperar o início do próximo slot (uma espera de até um slot). Para isso é necessário que uma estação especial emita um *pip* no início de cada intervalo.

**p-persistent CSMA** - essa abordagem exige hardware adicional dando capacidade de as estações ficarem *ouvindo* uma portadora para identificar quando o canal está ocupado. Quando a estação identifica que o canal está livre ela transmite com probabilidade $p$, sendo assim quanto menor o $p$ menos colisões, mas também maior o tempo de espera para uma transmissão mesmo com um canal livre. No 1-persistente ($p = 1$) não há essa espera; a concessão é só o hardware de escuta.

**Nonpersistent CSMA** - essa abordagem também exige hardware adicional dando capacidade de as estações ficarem *ouvindo* uma portadora para identificar quando o canal está ocupado, quando o canal está livre ela transmite imediatamente, mas quando o canal se encontra ocupado ela só volta a *ouvir* o canal novamente depois de um tempo aleatório. Com isso ela evita o excesso de colisões presentes na **1-persistent CSMA**, mas acrescenta um tempo maior de espera.

**Confiança:** alta    
**Referência:** subcapítulos 4.2.1 - ALOHA e 4.2.2 - protocolos CSMA

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
