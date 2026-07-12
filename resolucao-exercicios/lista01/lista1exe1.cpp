#include<stdio.h>
#include<locale.h>

/*
1) Faça uma função que receba como parâmetros os 2 números inteiros, calcule, exiba e retorne a soma dos 
números.
*/
int funcaoSoma(int n1, int n2);

int main(){
	setlocale(LC_ALL, "Portuguese")
	
	int num1, num2;
	printf("Soma de dois números inteiros \n Digite o primeiro número: ");
	scanf("%d", num1);
	printf("Digite o segundo número: ");
	scanf("%d");
	
	return 0;
}

int funcaoSoma(int n1, int n2){
	soma = n1 + n2
	printf("O resultado da soma %d + %d é igual a %d", n1, n2, soma);
	
	return soma;
}
