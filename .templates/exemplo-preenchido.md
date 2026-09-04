# Exercício 1.X  ← exemplo de como preencher; substitua pelo exercício real

## Enunciado

Um arquivo de 100 MB é transferido por um enlace de 10 Mbps entre duas máquinas
separadas por 3.000 km. Quanto tempo leva? Qual parcela do tempo é atraso de
propagação?

---

## Resolução — @maria

**Transmissão.** 100 MB = 100 × 8 × 10⁶ bits = 8 × 10⁸ bits.

```
t_transmissão = 8e8 bits / 10e6 bps = 80 s
```

**Propagação.** Em fibra o sinal anda a ~2/3 de c, ≈ 2 × 10⁸ m/s.

```
t_propagação = 3e6 m / 2e8 m/s = 0,015 s = 15 ms
```

**Total** ≈ 80,015 s. A propagação é 0,019% do total — desprezível aqui.

O ponto do exercício é justamente esse: para arquivos grandes em enlaces
lentos, quem manda é a largura de banda. A propagação passa a dominar quando a
mensagem é pequena (um ACK, um handshake) — aí os 15 ms aparecem em cada
ida e volta.

**Confiança:** alta
**Referência:** seção 1.1 (delay = transmissão + propagação)

---

## Resolução — @joao

Cheguei nos mesmos 80 s, mas usei c = 3 × 10⁸ m/s e deu 10 ms de propagação.

Vale registrar a diferença: 3 × 10⁸ é a velocidade da luz no vácuo. Em fibra o
índice de refração é ~1,5, então o certo para este exercício é 2 × 10⁸.
A resposta da Maria está mais correta.

**Confiança:** média

---

## Discussão

Ficou a pergunta: e se fosse enlace de satélite geoestacionário? Aí a
propagação é ~270 ms por salto e a conta inverte para mensagens pequenas.
Tanenbaum volta nisso no capítulo 2.
