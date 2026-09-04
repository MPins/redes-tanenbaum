# Como contribuir

Trabalhamos direto na `main`, sem pull request. Isso funciona bem desde que
todo mundo siga três regras.

Se ainda não clonou:

```bash
git clone git@github.com:MPins/redes-tanenbaum.git
cd redes-tanenbaum
git config pull.rebase true
```

Sem chave SSH? Troque a primeira linha por
`git clone https://github.com/MPins/redes-tanenbaum.git` — só que aí o git vai
pedir credencial, e senha de conta não serve: é um Personal Access Token
([detalhes no README](README.md#começando)).

O repositório é público para leitura, mas dar `push` exige ser colaborador —
se o convite não chegou, peça.

## 1. Sempre puxe antes de começar, e rebase

```bash
git pull --rebase
```

Faça isso **antes de abrir o editor**, não depois de escrever. É a única regra
que realmente importa: sem ela, você vai escrever por uma hora e depois brigar
com um merge.

O `git config pull.rebase true` do bloco acima faz o `--rebase` virar padrão
neste clone, então um `git pull` simples já basta. Se você clonou antes e não
rodou, rode agora.

## 2. Escreva na sua própria seção

Dentro de um arquivo de exercício, cada pessoa tem o seu bloco:

```markdown
## Resolução — @maria

Minha resposta...

---

## Resolução — @joao

Minha resposta...
```

**Não edite a seção de outra pessoa.** Se você discorda, escreva na seção
`## Discussão` no fim do arquivo, ou acrescente a sua própria resolução.
Corrigir erro de digitação alheio é tranquilo; reescrever o raciocínio, não.

Este repositório usa `merge=union` para arquivos `.md`: quando duas pessoas
acrescentam seções diferentes no mesmo arquivo ao mesmo tempo, o git fica com
os dois lados em vez de abrir conflito. Isso só funciona porque cada um escreve
no seu próprio bloco — se duas pessoas editarem a **mesma linha**, o resultado
sai duplicado. Se ver texto repetido depois de um pull, é isso; é só apagar a
cópia extra.

## 3. Um arquivo por exercício

Nome do arquivo: `capitulo-05-camada-de-rede/exercicios/exercicio-12.md`
(dois dígitos, com zero à esquerda, para ordenar direito).

Ao criar um arquivo novo, copie o modelo:

```bash
cp .templates/exercicio.md capitulo-05-camada-de-rede/exercicios/exercicio-12.md
```

## Mensagens de commit

Prefixe com o capítulo, para dar para varrer o histórico:

```
cap5: exercício 12 — cálculo de subredes
cap5: anotações sobre roteamento por vetor de distância
cap2: corrige unidade no exercício 7 (era Mbps, não MBps)
```

## Diagramas

Diagramas são bem-vindos — muita coisa em redes só fecha desenhando. Use
[Excalidraw](https://excalidraw.com) e salve os dois arquivos ao lado do
exercício: o `.excalidraw` (editável) e um `.png` (para aparecer no GitHub).

```markdown
![Handshake de três vias](exercicio-12-handshake.png)
```

## O que não entra no repositório

- PDF, EPUB ou scan do livro
