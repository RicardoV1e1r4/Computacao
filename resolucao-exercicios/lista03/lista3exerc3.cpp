#include<stdio.h>
#include<math.h>

/*
3) A área da superfície corporal de um ser humano pode ser calculada, de forma aproximada, pela fórmula de 
Mosteller: 
A = sqrt(ph)/60 onde:  A é a área em m^2 (valor real), p é o peso em quilos (valor real) e h, a altura em cm (valor 
inteiro). 
a) Faça uma função que receba como parâmetros a altura e o peso de uma pessoa e retorne sua área 
corporal de acordo com a fórmula de Mosteller. 
b) Faça uma função que receba como parâmetro duas áreas (em m^2) e exibe se “Manteve área inalterada”, 
“Aumentou a área corporal” ou “Diminuiu a área corporal”.
c) Faça um programa, utilizando as funções acima, que leia os valores da altura e do peso no início do ano 
e o valor do peso no final do ano e exiba uma das mensagens: “Manteve área inalterada”, “Aumentou a 
área corporal” ou “Diminuiu a área corporal”.
*/

float formulaMosteller(float p, float h);

void situacao(float Area1, float Area2);

int main(){
	float peso1, peso2, altura;
	float area1, area2;
	
	printf("Calculadora da diferenca de area corporal");
	printf("\nDigite a sua altura (cm): ");
	scanf("%f", &altura);
	
	printf("\nDigite o seu peso no inicio do ano: ");
	scanf("%f", &peso1);
	
	printf("\nDigite o seu peso no final do ano: ");
	scanf("%f", &peso2);
	
	area1 = formulaMosteller(altura, peso1);
	area2 = formulaMosteller(altura, peso2);
	
	situacao(area1, area2);
	
	return 0;
}

float formulaMosteller(float h, float p){
	return sqrt(p * h)/60;
}

void situacao(float Area1, float Area2){
	if(Area1 == Area2) printf("\nManteve a area inalterada");
	
	else{
		if(Area1 < Area2) printf("\nAumentou area corporal");
		
		else printf("\nDiminuiu a area corporal");
	}
}
