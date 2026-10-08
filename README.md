# CFORGE

**CFORGE** é um projeto desenvolvido em C com o objetivo de construir, de forma incremental, um sistema de gestão completo utilizando conceitos de Estruturas de Dados, algoritmos e gerenciamento de memória.

## Nenhum código gerado por IA foi implementado no projeto. Sendo ele construído totalmente a mão (Com Exceção do README.md).


O projeto nasceu como uma forma prática de estudar a disciplina de **Estruturas de Dados e Informações (EDI)**, mas a proposta vai além de exercícios isolados.

A ideia é transformar cada novo conceito aprendido em uma parte funcional de um único sistema.


![Language](https://img.shields.io/badge/language-C-blue)
![License](https://img.shields.io/badge/license-MIT-green)
![Status](https://img.shields.io/badge/status-in%20development-orange)
## 🎯 Objetivo

Construir um sistema cada vez mais completo enquanto exploro, na prática, conceitos fundamentais da programação em C:

* Estruturas (`struct`)
* Ponteiros
* Alocação dinâmica
* `malloc`, `calloc`, `realloc` e `free`
* TADs
* Listas encadeadas
* Pilhas
* Filas
* Árvores
* Tabelas hash
* Recursão
* Busca
* Algoritmos de ordenação
* Ponteiros para funções
* Estruturas genéricas com `void *`
* Manipulação de memória
* Arquivos e persistência de dados
* Modularização com `.c` e `.h`

## 🏗️ Filosofia

O CFORGE não foi projetado para ser construído inteiro de uma vez.

Ele começa pequeno e evolui conforme novos conceitos são necessários.

A ideia é evitar implementar estruturas de dados apenas como exercícios artificiais. Cada estrutura deve resolver um problema real dentro do sistema.

Por exemplo:

```text
Necessidade de armazenar dados
        ↓
struct

Quantidade variável de dados
        ↓
memória dinâmica

Inserção e remoção frequentes
        ↓
lista encadeada

Desfazer operações
        ↓
pilha

Processar operações em ordem
        ↓
fila

Busca eficiente
        ↓
árvore / tabela hash
```

Dessa forma, os conceitos estudados em EDI passam a fazer parte de um sistema único.

## 📈 Evolução planejada

```text
[Fundamentos]
     │
     ├── Structs
     ├── Ponteiros
     └── Funções
          ↓
[Memória]
     │
     ├── malloc
     ├── realloc
     └── free
          ↓
[TAD]
     │
     └── Modularização
          ↓
[Estruturas Lineares]
     │
     ├── Lista
     ├── Pilha
     └── Fila
          ↓
[Algoritmos]
     │
     ├── Busca
     ├── Ordenação
     └── Recursão
          ↓
[Estruturas Não Lineares]
     │
     ├── Árvores
     └── Hash
          ↓
[Persistência]
     │
     └── Arquivos
          ↓
[Sistema integrado]
```

## 🧠 Objetivo de aprendizado

Mais do que fazer o programa funcionar, o objetivo é entender **por que cada estrutura existe, como ela funciona na memória e quais problemas ela resolve**.

O desenvolvimento será feito de forma incremental, permitindo acompanhar a evolução do projeto e dos conceitos utilizados.

## 🛠️ Tecnologias

* C
* GCC
* Git
* GitHub

## 📌 Status

🚧 Em desenvolvimento.

O projeto está sendo desenvolvido progressivamente conforme novos conceitos de Estruturas de Dados são estudados.

## 👨‍💻 Autor

**Arthur Barbosa**

Projeto desenvolvido como parte do processo de aprendizado em Estruturas de Dados e programação em C.
