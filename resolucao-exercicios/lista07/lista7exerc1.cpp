#include <stdio.h>
#define LEN 5

/*
1) Faça uma função que receba como parâmetro um vetor de números inteiros e a quantidade de números 
armazenados no vetor. Esta função deverá retornar o produto dos números. 
*/

void inicializa(int *vet, int qtd); // vet[] ou vet[LEN]
void calcula(int *vet);

int main(){
	int vetor[LEN];
	
	inicializa(vetor, LEN);
	
	printf("Digite os elementos do vetor");
	for(int j = 0; j < LEN; j++){
		printf("\nDigite o elemento %d: ", j);
		scanf("%d", &vetor[j]);
	}
	calcula(vetor);
	return 0;
}

void inicializa(int *vet, int qtd){
	for(int i = 0; i < qtd; i++){
		vet[i] = 0;
	}
}

void calcula(int *vet){
	int produto = 1;		//Numero neutro
	
	printf("\nO produto dos numeros: ");
	for(int i = 0; i < LEN; i++){
		printf(" %d", vet[i]);
		
		produto = produto * vet[i];
	}
	printf("\nE igual a %d", produto);
}
