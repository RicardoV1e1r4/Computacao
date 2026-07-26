# Lista 02 - Funções e Modularização em C

Esta pasta reúne as soluções desenvolvidas para a **Lista 02** da disciplina de Computação.

O principal objetivo desta lista é aprofundar o uso de **funções** na linguagem C, incentivando a construção de programas mais organizados, reutilizáveis e fáceis de manter. Além disso, são introduzidas funções da biblioteca matemática para resolver problemas envolvendo geometria e cálculos numéricos.

---

## Objetivos da lista

Ao concluir esta lista, espera-se que o aluno seja capaz de:

- Desenvolver programas utilizando múltiplas funções;
- Reutilizar funções para evitar repetição de código;
- Compreender a passagem de parâmetros e valores de retorno;
- Aplicar funções matemáticas da biblioteca `math.h`;
- Resolver problemas envolvendo cálculos geométricos e fórmulas matemáticas.

---

# Conceitos abordados

## Modularização

A modularização consiste em dividir um programa em pequenas funções, onde cada uma executa uma tarefa específica. Essa abordagem torna o código mais organizado, reutilizável e facilita sua manutenção.

### Exemplo

```c
int calculaSoma(int a, int b, int c)
{
    return a + b + c;
}

float calculaMedia(int soma)
{
    return soma / 3.0;
}
```

---

## Reutilização de Funções

Uma função pode ser utilizada por diversas partes do programa, evitando que o mesmo código seja escrito várias vezes.

### Exemplo

```c
int soma = calculaSoma(x, y, z);

float media = calculaMedia(soma);
```

Nesse exemplo, a média é calculada utilizando o resultado retornado pela função responsável pela soma.

---

## Funções Chamando Outras Funções

Uma função pode utilizar outra função para realizar parte do processamento. Essa prática torna os programas mais organizados e reduz a duplicação de código.

### Exemplo

```c
int calculaSoma(int a, int b, int c)
{
    return a + b + c;
}

float calculaMedia(int a, int b, int c)
{
    return calculaSoma(a, b, c) / 3.0;
}
```

---

## Biblioteca Matemática (`math.h`)

A biblioteca `math.h` fornece diversas funções matemáticas prontas para uso, como cálculo de raízes, potências e funções trigonométricas.

Para utilizá-la, é necessário incluir:

```c
#include <math.h>
```

---

## Função `sqrt()`

A função `sqrt()` calcula a raiz quadrada de um número.

### Exemplo

```c
float distancia;

distancia = sqrt(25);
```

Resultado:

```
5
```

---

## Função `pow()`

A função `pow()` calcula uma potência.

### Exemplo

```c
float resultado;

resultado = pow(3, 2);
```

Resultado:

```
9
```

---

## Cálculos Geométricos

Nesta lista são utilizados conceitos matemáticos para resolver problemas envolvendo distância entre pontos, perímetro de figuras e cálculo de volumes.

Esses exercícios demonstram como a programação pode ser aplicada para automatizar cálculos utilizando fórmulas conhecidas.

### Exemplo

```c
float distancia;

distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
```

---

# Estrutura da pasta

```text
lista02/
│
├── exercicio01.c
├── exercicio02.c
├── exercicio03.c
├── ...
└── README.md
```

Cada arquivo corresponde à solução de um exercício da lista.

---

# Competências desenvolvidas

Ao resolver esta lista foram praticados conceitos importantes da programação estruturada, como:

- modularização de programas;
- reutilização de funções;
- passagem de parâmetros;
- retorno de valores;
- utilização da biblioteca `math.h`;
- aplicação de funções matemáticas;
- resolução de problemas envolvendo geometria e cálculos numéricos.

Esses conceitos são fundamentais para o desenvolvimento de programas mais organizados e serão utilizados nas próximas listas da disciplina.

---

## Autor

**Ricardo Alexandre Vieira**

Graduando em Engenharia de Telecomunicações — CEFET/RJ
