# Simulação de Movimentos de Peças de Xadrez em C

Este projeto simula os movimentos de algumas peças de xadrez utilizando a linguagem C. O objetivo é praticar estruturas de repetição (`for`, `while`, `do-while`) e loops aninhados, conforme os desafios propostos na disciplina.

## 📦 Arquivo principal

- `xadrez.c`: contém toda a lógica de movimentação das peças: Torre, Bispo, Rainha e Cavalo.

## ♟️ Peças implementadas

### 🔹 Torre
- Movimento: 5 casas para a **direita**.
- Estrutura utilizada: `for`.

### 🔹 Bispo
- Movimento: 5 casas na **diagonal para cima e à direita**.
- Estrutura utilizada: `while`.

### 🔹 Rainha
- Movimento: 8 casas para a **esquerda**.
- Estrutura utilizada: `do-while`.

### 🔹 Cavalo
- Movimento: 2 casas para **baixo** e 1 casa para a **esquerda** (movimento em "L").
- Estrutura utilizada: **loops aninhados** (`for` + `while`).
- Impressão da direção de cada casa percorrida:
