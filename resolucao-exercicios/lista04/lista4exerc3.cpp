#include <stdio.h>

/*
3) Faça um programa, utilizando a função abaixo, para processar os 20 postos de combustível de uma franquia. 
Para cada posto, o programa deverá ler o código do posto e o valor total arrecadado com as vendas de todos 
os combustíveis. Ao final, o programa deverá exibir o maior valor total arrecadado com as vendas de todos 
os combustíveis por um posto e o valor geral total arrecadado pelos 20 postos de combustível. Considere 
que não ocorrerá empate. Faça uma função para processar os 20 postos de combustível. A função irá ler os 
dados de cada posto, calcular e exibir o maior valor total arrecadado com as vendas de todos os 
combustíveis por um posto e calcular e retornar o valor geral total arrecadado pelos 20 postos de 
combustível.
*/

void analisaPostos(int qtd);

int main(){
	int qtd;
	
	printf("Calculo de arrecadacao");
	printf("\nDigite a quantidade postos: ");
	scanf("%d", &qtd);
	
	analisaPostos(qtd);
	
	return 0;
}

void analisaPostos(int qtd){
	int codg, codg_maior;
	float valor, maior_valor, soma_valores;
	
	maior_valor	 = 0;
	soma_valores = 0;
	
	for(int i = 0; i < qtd; i++){
		printf("\nDigite o codigo do posto e valor arrecadado (codg, valor): ");
		scanf("%d,%f", &codg, &valor);
		
		soma_valores = soma_valores + valor;
		if(valor >= maior_valor){maior_valor = valor, codg_maior = codg;}
	}
	
	printf("\nA maior arracadacao foi de %.2f, do posto de codigo %d", maior_valor, codg_maior);
	printf("\nE o valor total de arrecadacao foi de %.2f", soma_valores);
}
