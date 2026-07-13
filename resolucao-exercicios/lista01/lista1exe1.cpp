#include<stdio.h>
#include<locale.h>

/*
1) Faça uma função que receba como parâmetros os 2 números inteiros, calcule, exiba e retorne a soma dos 
números.
*/
int funcaoSoma(int n1, int n2);

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2, result;
	
	printf("Soma de dois números inteiros\n");
	printf("\nDigite o primeiro número: ");
	scanf("%d", &num1);
	printf("\nDigite o segundo número: ");
	scanf("%d", &num2);
	
	result = funcaoSoma(num1, num2);
	
	return 0;
}

int funcaoSoma(int n1, int n2){
	int soma;
	
	soma = n1 + n2;
	printf("\nO resultado da soma %d + %d é igual a %d", n1, n2, soma);
	
	return soma;
}
