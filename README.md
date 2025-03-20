# Projetos em C++

Este repositório contém dois projetos em C++: um exercício simples de manipulação de listas e um jogo de labirinto. Ambos os projetos possuem um arquivo `.cpp` com o código-fonte e um executável `.exe` para testes.

## 📌 Lista de Números Positivos e Negativos

### Descrição  
Este é um exercício simples onde o usuário insere 10 números, que são armazenados em um vetor. O programa então separa os números positivos em uma lista e os negativos em outra.

### Como executar  
1. **Executável (`.exe`)**  
   - Basta baixar o arquivo `.exe` na pasta `ListarPositivosENegativos` e executá-lo.  
2. **Código-fonte (`.cpp`)**  
   - Se desejar compilar o código-fonte, utilize um compilador como `g++`:
     ```sh
     g++ Exercicio5lista3.cpp -o Exercicio5lista3.exe
     ```
   - Em seguida, execute o programa:
     ```sh
     ./Exercicio5lista3.exe
     ```

---

## 🎮 Jogo Labirinto
![image](https://github.com/user-attachments/assets/36d5854a-3cc2-4441-ae47-5837e4e828a1)

### Descrição  
Um jogo de labirinto simples onde o jogador (`@`) deve encontrar a saída do labirinto.  
- As paredes são representadas pelo número `1`.  
- O jogador pode se mover pelas áreas vazias usando as teclas:
  - `W` → Cima  
  - `A` → Esquerda  
  - `S` → Baixo  
  - `D` → Direita  

### Como executar  
1. **Executável (`.exe`)**  
   - Baixe e execute o arquivo `.exe` na pasta `GameLabirinto`.  
2. **Código-fonte (`.cpp`)**  
   - Para compilar manualmente, use:
     ```sh
     g++ GameLabirinto.cpp -o GameLabirinto.exe
     ```
   - Depois, execute:
     ```sh
     ./GameLabirinto.exe
     ```

---

## 📥 Como baixar o repositório  

Para baixar os arquivos do repositório, você pode usar o Git:  

```sh
git clone https://github.com/cstavaresj/ProjetosCplusplus.git
