#include <stdio.h>

/*
2) Faça um programa, utilizando as funções abaixo, que permite que o usuário escolha a opção desejada, 
quantas vezes desejar, até que escolha a opção 5 (FIM). A cada opção escolhida pelo usuário para cálculo 
da área, o programa deverá ler os dados necessários, a área deverá ser calcula e exibida. 
a) Faça a função menu que exibe as opções abaixo, lê e retorna a opção escolhida pelo usuário validada. 
1 – Quadrado (Dado a ser lido: lado. Área: lado x lado). 
2 – Retângulo (Dados a serem lidos: base e altura. Área: base x altura). 
3 – Triângulo (Dados a serem lido: base e altura. Área: (base x altura) / 2). 
4 – Trapézio (Dados a serem lidos: base maior, base menor e altura. Área: ((base maior + base menor) x 
altura)/2). 
5 – Fim. 
b) Faça a função quadrado que irá ler o lado, calcular e retornar a área. 
c) Faça a função retangulo que irá ler a base e a altura, calcular e retornar a área. 
d) Faça a função triangulo que irá ler a base e a altura, calcular e retornar a área. 
e) Faça a função trapezio que irá ler a base maior, a base menor e a altura, calcular e retornar a área.
*/

int menu();
void quadrado();
void retangulo();
void triangulo();
void trapezio();

int main(){
	int condicao;
	
	do{
		condicao = menu();
	}while(condicao != 5);
	
	return 0;
}

int menu(){
	int opcao;
	
	printf("\nEscolha a area que deseja calcular:");
	printf("\n1 - Quadrado\n2 - Retangulo\n3 - Triangulo\n4 - Trapezio\n5 - Fim");
	printf("\nOpcao: ");
	scanf("%d", &opcao);
	
	switch(opcao){
		case 1: quadrado(); return 1;
		case 2: retangulo(); return 2;
		case 3: triangulo(); return 3;
		case 4: trapezio(); return 4;
		case 5: return 5;
		default: return 5;
	}
}

void quadrado(){
	float lado, area;
	
	printf("\n-------------------------------");
	printf("\nArea do Quadrado");
	printf("\nDigite o valor do lado: ");
	scanf("%f", &lado);
	
	area = lado*lado;
	printf("A area do quadrado e %.2f", area);
}
void retangulo(){
	float base, altura, area;
	
	printf("\n-------------------------------");
	printf("\nArea do Retangulo");
	printf("\nDigite o valor da base: ");
	scanf("%f", &base);
	printf("\nDigite o valor da altura: ");
	scanf("%f", &altura);
	
	area = base*altura;
	printf("A area do retangulo e %.2f", area);
}
void triangulo(){
	float base, altura, area;
	
	printf("\n-------------------------------");
	printf("\nArea do Triangulo");
	printf("\nDigite o valor da base: ");
	scanf("%f", &base);
	printf("\nDigite o valor da altura: ");
	scanf("%f", &altura);
	
	area = (base*altura)/2;
	printf("A area do retangulo e %.2f", area);
}
void trapezio(){
	float baseMaior, baseMenor, altura, area;
	
	printf("\n-------------------------------");
	printf("\nArea do Trapezio");
	printf("\nDigite o valor da base maior: ");
	scanf("%f", &baseMaior);
	printf("\nDigite o valor da base menor: ");
	scanf("%f", &baseMenor);
	printf("\nDigite o valor da altura: ");
	scanf("%f", &altura);
	
	area = ((baseMaior + baseMenor)*altura)/2;
	printf("A area do retangulo e %.2f", area);
}

