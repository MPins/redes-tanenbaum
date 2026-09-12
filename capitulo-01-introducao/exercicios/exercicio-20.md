# Exercício 1.20

## Enunciado

O presidente da Specialty Paint Corp. tem a ideia de trabalhar com uma cervejaria local para produzir uma lata de cerveja invisível, como medida para reduzir o lixo. Ela pede ao departamento jurídico que examine a ideia; o jurídico, por sua vez, solicita ajuda à engenharia. Assim, o engenheiro-chefe telefona para seu correspondente na cervejaria para discutir os aspectos técnicos do projeto.

Depois, os engenheiros informam seus respectivos departamentos jurídicos sobre o que foi discutido. Os departamentos jurídicos então conversam por telefone para acertar os aspectos legais. Por fim, os presidentes das duas empresas discutem a parte financeira do acordo.

Que princípio de um protocolo em camadas, no sentido do modelo OSI, esse mecanismo de comunicação viola?


---

## Resolução — @Pins

O mecanismo viola o princípio de que cada camada deve utilizar os serviços da camada imediatamente inferior para se comunicar. Embora entidades de uma mesma camada sejam *pares*, elas não trocam informações diretamente: a mensagem deve descer pelas camadas de uma empresa e subir pelas camadas da outra. Na situação descrita, os engenheiros, os departamentos jurídicos e, por fim, os presidentes conversam diretamente com seus correspondentes por telefone, contornando as camadas intermediárias.


**Confiança:** alta  
**Referência:** subcapítulo 1.6.1 - modelo de referência OSI

---

## Resolução — @outro-usuario

_(uma segunda resolução vai aqui embaixo, não substitua a de cima)_

---

## Discussão

_(divergências entre as resoluções, o que ficou em aberto)_
