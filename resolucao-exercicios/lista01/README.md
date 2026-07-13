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
### printf()
Nesta lista, a principal função utilizada para exibir informações é `printf()`.

### Exemplo

```c
printf("Media = %.2f\n", media);
```

Saída:

```
Media = 7.75
```
### scanf()
A função scanf() é utilizada na linguagem C para a entrada de dados via teclado. Ela permite que o programa obtenha valores fornecidos pelo usuário e os armazene em variáveis para processamento posterior.
Como a função funciona:
1. Biblioteca: Para utilizá-la, é necessário incluir a diretiva #include <stdio.h> no início do programa.
2. Sintaxe: A forma geral da função é: scanf("formatos", &variável1, &variável2, ...);
3. Formatos (Especificadores): O primeiro argumento é uma string que define o tipo de dado que se espera ler. Os especificadores mais comuns são:
- %d: Para números inteiros (int).
- %f: Para números reais (float ou double).
- %c: Para um único caractere (char).
- %s: Para cadeias de caracteres (strings).
4. O Operador de Endereço (&): Com exceção de vetores e strings, deve-se colocar o símbolo & antes do nome da variável. Esse operador indica o endereço de memória onde o dado lido será guardado. Esquecer o & geralmente causa erros de execução, como falhas de segmentação.
5. Interação: Quando o programa executa o scanf(), ele interrompe a execução e aguarda que o usuário digite o valor e pressione a tecla Enter.
  
Exemplo Prático:
O exemplo abaixo (baseado nos materiais das aulas 07 e 08) demonstra como ler um número inteiro e exibi-lo:
#include <stdio.h>
```
int main() {
    int num; // Declaração da variável para armazenar o dado [14]

    printf("Digite um numero inteiro: "); // Prompt para o usuário [4]
    
    // O scanf lê o valor digitado e o guarda no endereço da variável 'num'
    scanf("%d", &num); // %d indica um inteiro e &num indica o local na memória [2, 15]

    printf("O numero que voce digitou foi: %d\n", num); // Exibe o resultado [15]

    return 0;
}
```
Observações importantes:
Múltiplas entradas: É possível ler vários valores em um único comando, como scanf("%d %d", &a, &b).
Limitação do %s: Ao ler strings com %s, a função para de ler no primeiro espaço em branco (espaço, tabulação ou nova linha).
Caractere %c: Diferente de outros formatos, o %c captura "caracteres brancos" (como o Enter de uma leitura anterior). Para evitar isso, costuma-se colocar um espaço antes do formato: scanf(" %c", &letra).
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



---

## Autor

**Ricardo Alexandre Vieira**

Graduando em Engenharia de Telecomunicações — CEFET/RJ
