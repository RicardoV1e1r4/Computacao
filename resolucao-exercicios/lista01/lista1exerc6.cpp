#include<stdio.h>

/*
6) Faça uma função que receba como parâmetro o número de dias decorrido em um evento e exiba o mesmo 
valor expresso em números de semanas e número de dias. Por exemplo, se o número de dias decorrido em 
um evento for o valor 19, a função deve exibir: “2 semanas e 5 dias”
*/

void qtd_semanas(int qtd_dias);

int main(){
	int dias;
	
	printf("Evento MUNDIAL");
	printf("\nDigite a duracao do evento MUNDIAL em dias: ");
	scanf("%d", &dias);
	
	qtd_semanas(dias);
	
	return 0;
}

void qtd_semanas(int qtd_dias){
	int semanas, dias;
	
	semanas = qtd_dias/7;		// Quantidade de semanas - parte inteira da divisão
	
	dias = qtd_dias%7;			// Quantidade de dias - resto da divisão
	
	printf("\nA duracao do evento foi de %d semanas e %d dias", semanas, dias);
}

