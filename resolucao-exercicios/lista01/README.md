# Lista 01 - Fundamentos da Linguagem C

Esta pasta reúne as soluções desenvolvidas para a **Lista 01** da disciplina de Computação, abordando os conceitos fundamentais da linguagem **C**.

O objetivo desta lista é introduzir a sintaxe básica da linguagem, operações matemáticas, criação de funções e entrada e saída de dados, servindo como base para o desenvolvimento de programas mais complexos nas listas seguintes.

---

## Objetivos da lista

Ao concluir esta lista, espera-se que o aluno seja capaz de:

- Declarar e utilizar variáveis;
- Realizar operações matemáticas;
- Manipular expressões aritméticas;
- Criar funções em C;
- Utilizar parâmetros e valores de retorno;
- Exibir informações no terminal utilizando `printf()`;
- Desenvolver programas compostos por múltiplas funções.

---

# Conteúdo abordado

## Tipos de Dados

Os tipos de dados definem quais valores uma variável pode armazenar.

Nesta lista são utilizados principalmente:

| Tipo | Descrição | Exemplo |
|------|-----------|----------|
| `int` | Números inteiros | idade, quantidade |
| `float` | Números reais | média, temperatura, preço |
| `char` | Caractere | a, b, c, k, v |

### Exemplo

```c
int idade = 20;
float nota = 8.5;
```

---

## Identificadores

Identificadores são os nomes dados às variáveis e funções.

Devem seguir algumas regras:

- iniciar por letra ou `_`;
- não conter espaços;
- não utilizar palavras reservadas da linguagem;
- podem conter números (desde que não sejam o primeiro caractere).

### Exemplos

```c
int idade;
float mediaFinal;
int quantidade_alunos;
```

---

## Operador de Atribuição (`=`)

O operador de atribuição armazena um valor em uma variável.

### Exemplo

```c
int x;

x = 10;
```

Também pode receber o resultado de uma expressão.

```c
int soma;

soma = 10 + 20;
```

---

## Operadores Aritméticos

São utilizados para realizar cálculos matemáticos.

| Operador | Função |
|----------|---------|
| `+` | Soma |
| `-` | Subtração |
| `*` | Multiplicação |
| `/` | Divisão |

### Exemplo

```c
float media;

media = (nota1 + nota2) / 2;
```

---

## Operador de Resto (`%`)

O operador `%` retorna o resto da divisão inteira.

É muito utilizado para problemas envolvendo:

- semanas e dias;
- horas e minutos;
- conversão de unidades;
- troco em cédulas e moedas.

### Exemplo

```c
int dias = 15;

int semanas = dias / 7;
int resto = dias % 7;
```

Resultado:

```
Semanas: 2
Dias restantes: 1
```

---

## Criação de Funções

Uma função permite organizar o código em pequenas tarefas reutilizáveis.

Sua estrutura é composta por:

- tipo de retorno;
- nome;
- parâmetros;
- corpo da função.

### Exemplo

```c
int quadrado(int x)
{
    return x * x;
}
```

---

## Parâmetros e Retorno

Os parâmetros permitem enviar informações para uma função.

O comando `return` devolve um resultado para quem chamou a função.

### Exemplo

```c
float media(float a, float b)
{
    return (a + b) / 2;
}
```

Uso:

```c
float resultado;

resultado = media(7.5, 8.0);
```

---

## Entrada e Saída de Dados

Nesta lista, a principal função utilizada para exibir informações é `printf()`.

### Exemplo

```c
printf("Media = %.2f\n", media);
```

Saída:

```
Media = 7.75
```

---

## Programas Compostos por Funções

Uma boa prática é dividir um problema em várias funções menores.

Além de deixar o código mais organizado, isso facilita a reutilização e manutenção.

### Exemplo

```c
int quadrado(int x)
{
    return x * x;
}

int dobroDoQuadrado(int x)
{
    return 2 * quadrado(x);
}
```

Observe que a função `dobroDoQuadrado()` utiliza outra função (`quadrado()`), caracterizando um programa composto por funções.

---

# Estrutura da pasta

```text
lista01/
│
├── exercicio01.c
├── exercicio02.c
├── exercicio03.c
├── ...
└── README.md
```

Cada arquivo contém a solução correspondente a um exercício da lista.

---

# Competências desenvolvidas

Ao resolver esta lista foram praticados conceitos importantes da programação estruturada, como:

- declaração de variáveis;
- manipulação de tipos de dados;
- operadores aritméticos;
- modularização;
- reutilização de código;
- passagem de parâmetros;
- retorno de funções;
- organização de programas em C.

Esses conceitos constituem a base para o estudo de estruturas condicionais, laços de repetição, vetores, matrizes e estruturas de dados que serão abordados nas próximas listas.

---

## Autor

**Ricardo Alexandre Vieira**

Graduando em Engenharia de Telecomunicações — CEFET/RJ
