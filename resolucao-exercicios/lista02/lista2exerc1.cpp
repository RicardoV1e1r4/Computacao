#include<stdio.h>

/*
1. Faça um programa que leia três números inteiros que serão fornecidos pelo usuário, calcule e exiba a soma 
e a média dos números. Este programa deverá utilizar as seguintes funções: 
a) calcula_soma: recebe como parâmetros os 3 números inteiros, calcula e retorna a soma. 
b) calcula_media: recebe como parâmetros os 3 números inteiros, calcula e exibe a média
*/

int calcula_soma(int num1, int num2, int num3);		// Item (a)

void calcula_media(int num1, int num2, int num3);		// Item (b)

int main(){
	int n1, n2, n3, soma;
	
	printf("\nDigite tres numeros para calcular a sua soma e media");
	printf("\nDigite o primeiro numero: ");
	scanf("%d", &n1);
	
	printf("\nDigite o segundo numero: ");
	scanf("%d", &n2);
	
	printf("\nDigite o terceiro numero: ");
	scanf("%d", &n3);
	
	soma = calcula_soma(n1, n2, n3);
	calcula_media(n1, n2, n3);
	
	printf("\nSoma dos numeros: %d + %d + %d = %d", n1, n2, n3, soma);
	
	return 0;
}

int calcula_soma(int num1, int num2, int num3){		// Item (a)
	return num1 + num2 + num3;
}

void calcula_media(int num1, int num2, int num3){		// Item (b)
	int soma;
	float media;
	
	soma = calcula_soma(num1, num2, num3);
	
	//media = soma/3;
	media = (float)soma/3;
	
	printf("\nMedia dos numeros: %d + %d + %d = %f", num1, num2, num3, media);
}
