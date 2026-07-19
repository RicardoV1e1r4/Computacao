#include<stdio.h>
#define PI 3.141592653

/*
7. Sabe-se que o volume de uma caixa de lados a, b e c é dado por Vcaixa = a x b x c e que o volume de um 
cilindro de raio r e altura h é dado por Vcilindro = phr2. Pede-se: 
a) Escreva uma função para calcular e retornar o volume de uma caixa de lados a, b e c. Esta função deverá 
receber como parâmetro os lados a, b e c. 
b) Escreva uma função para calcular e retornar o volume de um cilindro de raio r e altura h. Esta função 
deverá receber como parâmetro o raio e a altura. 
c) Usando as funções dos itens anteriores, escreva um programa para calcular o volume de uma caixa com 
um furo cilíndrico, com as dimensões ilustradas na figura abaixo. 
O programa deve capturar do teclado os valores das dimensões da peça e deve exibir o valor do volume 
calculado
*/

float Vcaixa(float a, float b, float c);

float Vcilindro(float r, float h);

int main(){
	float a, b, c;
	float r, h;
	float volcaixa, volcilindro;
	
	printf("\nVolume do paralelepipedo");
	printf("\nDigite o valor do comprimento (a): ");
	scanf("%f", &a);
	
	printf("\nDigite o valor da largura (b): ");
	scanf("%f", &b);
	
	printf("\nDigite o valor da altura (c): ");
	scanf("%f", &c);
	
	printf("\nVolume do cilindro");
	printf("\nDigite o valor do raio r: ");
	scanf("%f", &r);
	
	printf("\nDigite o valor da altura h: ");
	scanf("%f", &h);
	
	volcaixa	= Vcaixa(a, b, c);
	volcilindro = Vcilindro(r, h);
	
	printf("\nO volume resultante do paralelepido menos o volume do cilindro e igual a:");
	printf("\n%f", volcaixa - volcilindro);
	
	return 0;
}

float Vcaixa(float a, float b, float c){
	return a * b * c;
}

float Vcilindro(float r, float h){
	return PI * r * r * h;
}
