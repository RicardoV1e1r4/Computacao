#include<stdio.h>

/*
3) Faça uma função que receba como parâmetros o preço unitário de um produto. Esta função deverá calcular 
e retornar o novo preço unitário considerando que houve um aumento de 20% no preço unitário. 
*/

float reajuste(float precoOriginal);

int main(){
	float preco, precoNovo;
	
	printf("Digite o valor do preco unitario do produto: ");
	scanf("%f", &preco);
	
	precoNovo = reajuste(preco);
	
	printf("\nO valor do preco com reajuste de 20 per (para mais) e igual a %.2f", precoNovo);
	
	return 0;
}

float reajuste(float precoOriginal){
	return 1.2*precoOriginal; //Preco reajustado = 1.2 * precoOriginal
}
