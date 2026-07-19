#include<stdio.h>
#include<math.h>

/*
6. Escreva um programa que capture do teclado as coordenadas dos 3 vértices de um triângulo, calcule e exiba 
o perímetro deste triângulo. Este programa deve utilizar a função que calcula a distância. Obs: Perímetro de 
um polígono é a soma das medidas dos seus lados. Considerando a fórmula abaixo para o cálculo da 
distância entre dois pontos (x1, y1) e (x2, y2), escreva uma função que receba como parâmetros as 
coordenadas de dois pontos e retorne a distância entre eles.

Distância entre dois pontos: d = sqrt((x2 - x1)^2 + (y2 - y1)^2)
*/
float calcula_distancia(float x1, float y1, float x2, float y2);

int main(){
	float x1, y1, x2, y2, x3, y3;
	float dist1, dist2, dist3;
	float perimetro;
	
	printf("Calculo do perimetro de um triangulo por meio de suas coordenadas");
	
	printf("\nDigite a primeira coordenada x1 e y1: ");
	scanf("%f %f", &x1, &y1);
	
	printf("\nDigite a segunda coordenada x2 e y2: ");
	scanf("%f %f", &x2, &y2);
	
	printf("\nDigite a terceira coordenada x3 e y3: ");
	scanf("%f %f", &x3, &y3);
	
	dist1 = calcula_distancia(x1, y1, x2, y2);
	
	dist2 = calcula_distancia(x2, y2, x3, y3);
	
	dist3 = calcula_distancia(x3, y3, x1, y1);
	
	perimetro = dist1 + dist2 + dist3;
	
	printf("\nDado as coordenadas do triango, o seu perimetro e igual a %.3f unidades de medida", perimetro);
	
	return 0;
}

float calcula_distancia(float x1, float y1, float x2, float y2){
	double distancia;
	double dif1, dif2, expoent = 2;
	
	dif1 = x1 - x2;
	dif2 = y1 - y2;
	
	distancia = sqrt(pow(dif1, expoent) + pow(dif2, expoent));
	
	return distancia;
}
