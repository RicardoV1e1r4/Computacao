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

# Conceitos abordados

## Operador de Atribuição (`=`)

O operador de atribuição é utilizado para armazenar um valor em uma variável. Esse valor pode ser informado diretamente ou ser o resultado de uma expressão matemática.

### Exemplo

```c
int idade;

idade = 20;
```

Também é possível atribuir o resultado de uma operação:

```c
int soma;

soma = 15 + 10;
```

---

## Operadores Aritméticos

Os operadores aritméticos permitem realizar cálculos matemáticos básicos, como soma, subtração, multiplicação e divisão. Eles são amplamente utilizados para resolver problemas envolvendo médias, áreas, conversão de unidades e diversas outras aplicações.

| Operador | Operação |
|----------|----------|
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

O operador `%` retorna o resto de uma divisão inteira. Ele é muito útil para problemas que envolvem conversão de unidades, cálculo de dias restantes, horas, minutos e distribuição de valores.

### Exemplo

```c
int dias = 15;

int semanas = dias / 7;
int restante = dias % 7;
```

Saída esperada:

```
Semanas: 2
Dias restantes: 1
```

---

## Criação de Funções

As funções permitem dividir um programa em partes menores e organizadas. Cada função executa uma tarefa específica, tornando o código mais reutilizável e fácil de manter.

Uma função é composta por um tipo de retorno, um nome, uma lista de parâmetros (quando necessário) e um bloco de instruções.

### Exemplo

```c
int quadrado(int numero)
{
    return numero * numero;
}
```

---

## Parâmetros e Retorno

Os parâmetros permitem que uma função receba informações para realizar seu processamento. O comando `return` é utilizado para devolver o resultado da função ao programa principal.

### Exemplo

```c
float calcularMedia(float n1, float n2)
{
    return (n1 + n2) / 2;
}
```

Utilizando a função:

```c
float media;

media = calcularMedia(7.5, 8.0);
```

---

## Entrada de Dados (`scanf()`)

A função `scanf()` é utilizada para receber dados digitados pelo usuário durante a execução do programa. Os valores informados são armazenados em variáveis para serem utilizados posteriormente.

### Exemplo

```c
int idade;

scanf("%d", &idade);
```

Nesse exemplo, o valor digitado pelo usuário será armazenado na variável `idade`.

---

## Saída de Dados (`printf()`)

A função `printf()` é utilizada para exibir informações na tela. Ela permite mostrar mensagens, valores de variáveis e resultados de cálculos.

### Exemplo

```c
float media = 8.75;

printf("Media = %.2f\n", media);
```

Saída:

```
Media = 8.75
```

---

## Programas Compostos por Funções

Um programa pode ser dividido em várias funções, cada uma responsável por uma tarefa específica. Além disso, uma função pode chamar outra função para reutilizar código e tornar a solução mais organizada.

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

Nesse exemplo, a função `dobroDoQuadrado()` utiliza a função `quadrado()` para realizar parte do processamento, evitando a repetição de código.

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

## Autor

**Ricardo Alexandre Vieira**

Graduando em Engenharia de Telecomunicações — CEFET/RJ
