#include<stdio.h>
#include<windows.h>

/*
7) Faça uma função que receba como parâmetro o valor desejado a ser sacado em um caixa eletrônico por um 
cliente de um banco, calcule e exiba a menor quantidade de células a ser recebida pelo cliente. Considere 
que o caixa eletrônico possui cédulas de R$100,00, R$50,00, R$20,00, R$10,00, R$5,00, R$2,00 e R$1,00.
*/

void valorSacado(int valor_desejado);

int main(){
	int valor;
	
	printf("Caixa eletronico");
	printf("\nDigite o valor que deseja sacar: R$");
	scanf("%d", &valor);
	
	Sleep(1500);
	printf("\nOtimo!\n");
	
	Sleep(1500);
	printf("\nContando cedulas");
	
	Sleep(1000);
	printf(".");
	Sleep(1000);
	printf(".");
	Sleep(1000);
	printf(".");
	Sleep(500);
	
	valorSacado(valor);
	
	return 0;
}

void valorSacado(int valor_desejado){
	int cem, cinquenta, vinte, dez, cinco, dois, um;
	int ref;
	
	cem		  = valor_desejado/100;
	ref		  = valor_desejado%100;
	
	cinquenta = ref/50;
	ref		  = ref%50;
	
	vinte	  = ref/20;
	ref		  = ref%20;
	
	dez		  = ref/10;
	ref		  = ref%10;
	
	cinco	  = ref/5;
	ref		  = ref%5;
	
	dois	  = ref/2;
	um		  = ref%2;
	
	printf("\nNotas a serem sacadas:");
	printf("\n%d notas de cem reais", cem);
	printf("\n%d notas de cinquenta reais", cinquenta);
	printf("\n%d notas de vinte reais", vinte);
	printf("\n%d notas de dez reais", dez);
	printf("\n%d notas de cinco reais", cinco);
	printf("\n%d notas de dois reais", dois);
	printf("\n%d notas de um real", um);
}

