#include<stdio.h>

/*
5) Faça um programa, utilizando a função abaixo, que leia 3 números inteiros e exiba o maior, considerando 
que os números são diferentes. Faça uma função que receba como parâmetros três números inteiros e 
retorne o maior. Considere que os números são diferentes.
*/

int comparaNumeros(int n1, int n2, int n3);

int main(){
	int num1, num2, num3;
	int maiorNum;
	
	printf("Digite tres numeros para ver qual e o maior");
	
	printf("\nDigite o primeiro numero: ");
	scanf("%d", &num1);
	
	printf("\nDigite o segundo numero: ");
	scanf("%d", &num2);
	
	printf("\nDigite o terceiro numero: ");
	scanf("%d", &num3);
	
	maiorNum = comparaNumeros(num1, num2, num3);
	
	printf("\nO maior numero digitado foi o %d", maiorNum);
	
	return 0;
}

int comparaNumeros(int n1, int n2, int n3){
	int maiorNum;
	
	if(n1 > n2){
		if(n1 > n3) maiorNum = n1;
		else maiorNum = n3;
	}
	else{
		if(n2 > n3) maiorNum = n2;
		else maiorNum = n3;
	}
	
	return maiorNum;
}
