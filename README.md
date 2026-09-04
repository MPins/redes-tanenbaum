# Redes de Computadores — Tanenbaum (6ª edição)

Anotações e resoluções de exercícios do livro **Computer Networks**, de
Andrew S. Tanenbaum, Nick Feamster e David Wetherall (6ª edição, 2021),
feitas em grupo.

## Como está organizado

```text
capitulo-01-introducao/
├── anotacoes.md          # anotações do capítulo, uma seção por pessoa
└── exercicios/
    ├── exercicio-01.md
    ├── exercicio-05.md
    └── ...
capitulo-02-camada-fisica/
...
.templates/               # modelos para copiar ao criar arquivo novo
```

Um arquivo por exercício, agrupado por capítulo. Dentro do arquivo, cada
pessoa escreve sob o seu próprio `## Resolução — @usuario`. Resoluções
diferentes para o mesmo exercício **convivem no mesmo arquivo** — é assim que
dá para comparar abordagens, que é metade da graça de estudar em grupo.

| Capítulo | Tema |
|---|---|
| 1 | Introdução |
| 2 | A Camada Física |
| 3 | A Camada de Enlace de Dados |
| 4 | A Subcamada de Controle de Acesso ao Meio |
| 5 | A Camada de Rede |
| 6 | A Camada de Transporte |
| 7 | A Camada de Aplicação |
| 8 | Segurança de Redes |

## Começando

```bash
git clone git@github.com:MPins/redes-tanenbaum.git
cd redes-tanenbaum
git config pull.rebase true
```

Se você não tem chave SSH configurada no GitHub, use HTTPS na primeira linha:

```bash
git clone https://github.com/MPins/redes-tanenbaum.git
```

O clone por HTTPS não pede nada, porque o repositório é público. Já o `push`
pede — e a senha da conta **não** funciona: crie um Personal Access Token em
[github.com/settings/tokens](https://github.com/settings/tokens) com o escopo
`repo` e use o token no lugar da senha. Como o git vai perguntar de novo a
cada push, vale guardar (`git config --global credential.helper store`, que
grava em texto puro no seu home, ou o helper do seu sistema).

Com SSH nada disso é necessário depois que a chave está no lugar — se você
pretende usar o repositório com frequência, compensa
[configurar a chave](https://docs.github.com/authentication/connecting-to-github-with-ssh)
uma vez. Dá para trocar de ideia depois: `git remote set-url origin <url>`.

Qualquer pessoa pode ler e clonar o repositório. Para **escrever** é preciso
ser colaborador: peça para ser adicionado e aceite o convite que chega por
e-mail. Sem isso o clone funciona, mas o `git push` é recusado.

O `git config pull.rebase true` é local e vale só para este clone — rode uma
vez, logo depois de clonar. É o que faz a regra 1 do CONTRIBUTING acontecer
sozinha.

Leia o [CONTRIBUTING.md](CONTRIBUTING.md) antes do primeiro commit — são três
regras, e a primeira evita 90% da dor de cabeça.

## Escopo

Só material autoral: nossas anotações, nossas resoluções, nossos diagramas.
(o `.gitignore` já bloqueia `*.pdf`, `*.epub`, `*.djvu`).
