# Trabalho T2 — Jogo Mastermind (Senha)

Projeto desenvolvido para a disciplina de **Algoritmos e Programação** — Universidade do Vale do Itajaí (UNIVALI).

---

## Descrição

Este trabalho consiste na implementação do jogo **Mastermind (Senha)** em modo console.

O objetivo do jogo é descobrir uma sequência secreta de **4 dígitos únicos**, gerados aleatoriamente, dentro de um número limitado de tentativas.

---

## Como funciona

- O sistema gera um código secreto com:
  - 4 números
  - Valores entre **1 e 6**
  - **Sem repetição**

- O jogador tem **10 tentativas** para acertar a combinação.

- A cada tentativa, o sistema informa:
  - Quantos números estão **corretos na posição correta**
  - Quantos números estão **corretos, mas na posição errada**
  - Quantas tentativas ainda restam

---

## Menu do Programa

O sistema possui um menu simples com três opções:

### Jogar
Inicia uma nova partida.

### Sobre
Exibe:
- Nome dos integrantes do grupo
- Disciplina
- Professor
- Data

### Sair
Encerra o programa.

---

## Condições de vitória e derrota

- **Vitória:** acertar os 4 números na ordem correta  
- **Derrota:** esgotar as 10 tentativas

Após o término, o programa retorna ao menu principal.

---

## Regras de implementação da atividade

- Linguagem: **C/C++**
- Não é permitido utilizar:
  - Arrays
  - Funções     
---
