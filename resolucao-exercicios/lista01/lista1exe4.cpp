#include<stdio.h>

/*
4) Faça a função calculaValor que receba como parâmetros o valor do litro de um combustível (número real) 
e a quantidade de litros abastecida por um cliente (número real). A função deverá calcular e exibir o valor a 
ser pago.
- Então não retorna
*/

void calculaValor(float valor_litro, float qtd_abastecido);

int main(){
	float preco_litro, litro_abastecido;
	
	printf("Digite o preco do combustivel (R$): ");
	scanf("%f", &preco_litro);
	
	printf("Digite a quantidade de litros abastecido (L): ");
	scanf("%f", &litro_abastecido);
	
	calculaValor(preco_litro, litro_abastecido);
	return 0;
}

void calculaValor(float valor_litro, float qtd_abastecido){
	float valor_total;
	
	valor_total = valor_litro * qtd_abastecido;
	
	printf("O valor a ser pago e de R$%f", valor_total);
}
