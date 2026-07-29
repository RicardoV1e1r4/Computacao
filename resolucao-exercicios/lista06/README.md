# Lista 06 - Passagem de Parâmetros por Referência

Esta pasta reúne as soluções desenvolvidas para a **Lista 06** da disciplina de Computação.

O principal objetivo desta lista é apresentar a **passagem de parâmetros por referência** na linguagem C, utilizando ponteiros para permitir que uma função modifique diretamente variáveis pertencentes à função chamadora. Esse recurso é especialmente útil quando uma função precisa retornar mais de um resultado.

---

## Objetivos da lista

Ao concluir esta lista, espera-se que o aluno seja capaz de:

- Compreender o conceito de passagem de parâmetros por referência;
- Utilizar ponteiros em funções;
- Manipular endereços de memória utilizando os operadores `&` e `*`;
- Desenvolver funções capazes de alterar variáveis da função principal;
- Criar programas mais eficientes e organizados utilizando modularização.

---

# Conceitos abordados

## Passagem de Parâmetros por Referência

Na passagem por referência, a função recebe o **endereço de memória** de uma variável, permitindo alterar diretamente seu conteúdo.

Essa técnica é muito utilizada quando uma função precisa produzir mais de um resultado.

### Exemplo

```c
void troca(int *a, int *b)
{
    int aux = *a;
    *a = *b;
    *b = aux;
}
```

Utilização:

```c
troca(&x, &y);
```

---

## Operador `&` (Endereço de Memória)

O operador `&` retorna o endereço de memória de uma variável.

Ele é utilizado tanto na função `scanf()` quanto na passagem de parâmetros por referência.

### Exemplo

```c
int idade;

scanf("%d", &idade);
```

Também pode ser utilizado na chamada de funções:

```c
calculos(&resultado);
```

---

## Operador `*` (Desreferenciamento)

O operador `*` permite acessar ou modificar o conteúdo armazenado em um determinado endereço de memória.

### Exemplo

```c
int valor = 10;
int *p = &valor;

*p = 20;
```

Após a execução, a variável `valor` passa a armazenar o valor `20`.

---

## Ponteiros

Um ponteiro é uma variável que armazena o endereço de memória de outra variável.

Sua utilização permite compartilhar dados entre funções sem a necessidade de realizar cópias.

### Exemplo

```c
int numero = 15;
int *ptr = &numero;
```

---

## Funções com Múltiplos Resultados

Como uma função em C pode retornar apenas um valor através do comando `return`, a passagem por referência permite que outros resultados sejam armazenados diretamente em variáveis fornecidas pela função chamadora.

### Exemplo

```c
void calculos(int a, int b, int *soma, int *produto)
{
    *soma = a + b;
    *produto = a * b;
}
```

---

## Validação de Dados

Diversos exercícios da lista utilizam funções responsáveis por validar informações digitadas pelo usuário antes de prosseguir com o processamento.

Essa abordagem melhora a confiabilidade do programa e evita entradas inválidas.

### Exemplo

```c
int leValidaTipo()
{
    int tipo;

    do
    {
        scanf("%d", &tipo);
    } while(tipo < 1 || tipo > 3);

    return tipo;
}
```

---

## Modularização

A lista reforça a importância da divisão de um programa em pequenas funções, cada uma responsável por uma tarefa específica.

Essa prática torna o código mais organizado, reutilizável e facilita sua manutenção.

---

# Estrutura da pasta

```text
lista06/
│
├── exercicio01.c
├── exercicio02.c
├── exercicio03.c
├── exercicio04.c
└── README.md
```

Cada arquivo corresponde à solução de um exercício da lista.

---

# Competências desenvolvidas

Ao resolver esta lista foram praticados conceitos importantes da programação estruturada, como:

- passagem de parâmetros por referência;
- utilização de ponteiros;
- operadores `&` e `*`;
- manipulação de endereços de memória;
- funções que retornam múltiplos resultados;
- validação de dados;
- modularização de programas.

Esses conceitos são fundamentais para o estudo de estruturas de dados, alocação dinâmica de memória e manipulação de vetores e matrizes, sendo amplamente utilizados em aplicações desenvolvidas na linguagem C.

---

## Autor

**Ricardo Alexandre Vieira**

Graduando em Engenharia de Telecomunicações — CEFET/RJ
