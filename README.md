# ♟️ Simulação de Movimentação de Peças de Xadrez em C

Este projeto tem como objetivo simular o movimento de peças de xadrez utilizando estruturas de repetição e recursividade na linguagem C. O desafio é proposto em três níveis de dificuldade (Novato, Aventureiro e Mestre), com foco em aplicar conceitos fundamentais da programação.

## 📌 Objetivos

- Aplicar estruturas de repetição `for`, `while` e `do-while`.
- Utilizar loops aninhados e múltiplas condições.
- Implementar recursividade.
- Simular os movimentos das peças: Torre, Bispo, Rainha e Cavalo.

---

## 🔍 Níveis de Implementação

### 🧩 Nível Novato
**Peças:** Torre, Bispo e Rainha  
**Técnicas utilizadas:**  
- `for` para Torre (movimento horizontal de 5 casas).
- `while` para Bispo (diagonal superior direita, 5 casas).
- `do-while` para Rainha (movimento horizontal de 8 casas à esquerda).

### ⚔️ Nível Aventureiro
**Peça:** Cavalo  
**Técnicas utilizadas:**  
- Loops aninhados para simular movimento em "L" (2 casas para baixo e 1 para a esquerda).
- Um dos loops obrigatoriamente `for`.

### 🧠 Nível Mestre
**Peças:** Torre, Bispo, Rainha e Cavalo  
**Técnicas utilizadas:**  
- Recursividade para Torre, Bispo e Rainha.
- Loops complexos (múltiplas variáveis, `continue`, `break`) para o Cavalo (movimento 2 casas para cima e 1 para a direita).
- Bispo também simulado com loops aninhados além da recursividade.

---

## ⚙️ Requisitos Técnicos

- Linguagem: C
- Arquivo principal: `xadrez.c`
- Saídas via `printf()` indicando cada direção percorrida:
  - `"Cima"`, `"Baixo"`, `"Esquerda"`, `"Direita"`, `"Cima Direita"`, etc.

---

## ✏️ Estrutura do Código

* Cada função está devidamente comentada, explicando:

  * A lógica do movimento.
  * O tipo de estrutura de repetição utilizada.
  * O papel das variáveis e controle de fluxo.
* Código formatado e identado corretamente.

---

## 🚀 Conclusão

Este projeto é uma prática completa para dominar estruturas de repetição, lógica de programação e organização de código em C. Ideal para iniciantes que desejam aprofundar seu conhecimento com aplicações práticas e divertidas.

---
