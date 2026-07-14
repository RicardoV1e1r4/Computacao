#include<stdio.h>
#include<locale.h>

/*
2) Faça uma função que receba como parâmetros as 2 notas de um aluno (valores reais), calcule e retorne a 
média aritmética.
*/

float calculaMedia(float num1, float num2);

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float num1, num2, mediaNota;
	
	printf("Calculadora de média das notas\n");
	printf("\nDigite a primeira nota: ");
	scanf("%f", &num1);
	printf("\nDigite a primeira nota: ");
	scanf("%f", &num2);
	
	mediaNota = calculaMedia(num1, num2);
	
	printf("\nA média das notas é %f", mediaNota);
	
	return 0;
}

float calculaMedia(float num1, float num2){
	float media;
	media = (num1 + num2)/2;
	
	return media;
}
