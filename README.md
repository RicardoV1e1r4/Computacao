# Computação — Programação em C

Resolução das listas de exercícios da disciplina **Computação** ([SEMESTRE, ex.: 2023.1]), feitas em **linguagem C**.

Cada lista tem uma pasta com os programas e um README que explica os conceitos usados.

---

## Conteúdo

| Lista | Assunto principal | Exemplos de exercícios |
|---|---|---|
| [Lista 01](resolucao-exercicios/lista01) | Fundamentos: variáveis, operadores, `printf` e funções | Expressões aritméticas e funções simples |
| [Lista 02](resolucao-exercicios/lista02) | Funções com parâmetros e retorno | Soma e média de três números |
| [Lista 03](resolucao-exercicios/lista03) | Estruturas condicionais (`if`/`else`) | Cálculo do IDH por regras condicionais |
| [Lista 04](resolucao-exercicios/lista04) | Estruturas de repetição (`for`) | Tabuadas de 1 a 10 |
| [Lista 05](resolucao-exercicios/lista05) | Repetição com condição de parada | Processamento de downloads, média e maior valor |
| [Lista 06](resolucao-exercicios/lista06) | Ponteiros e passagem por referência | Validação de entrada e contagem por tipo de produto |
| [Lista 07](resolucao-exercicios/lista07) | Vetores e ponteiros | Produto e média dos elementos de um vetor |

---

## Estrutura do repositório

```text
Computacao/
├── resolucao-exercicios/
│   ├── lista01/
│   │   ├── README.md
│   │   └── lista1exe1.cpp ...
│   ├── ...
│   └── lista07/
├── LICENSE
└── README.md
```

---

## Como compilar e executar

Os arquivos têm extensão `.cpp`, mas o código é **C**. Com o GCC:

```bash
gcc resolucao-exercicios/lista01/lista1exe1.cpp -o lista1exe1
./lista1exe1
```

No Windows, também dá para abrir os arquivos no Dev-C++ ou no VS Code.

---

## Tecnologias

- Linguagem C
- GCC (MinGW) / Dev-C++

## Licença

Distribuído sob a licença MIT. Veja [LICENSE](LICENSE).
