#include <stdio.h>
#define LEN 15

/*
2. Faça uma função que receba como parâmetro um vetor de números inteiros e a quantidade de números 
armazenados no vetor. Esta função deverá calcular a quantidade de números pares e a quantidade de 
números ímpares, armazenando-as nas variáveis cujos endereços são fornecidos na chamada da função. 
*/

void inicializa(int *vet);
void numParImpar(int *vet, int *par, int *impar);

int main(){
	int vetor[LEN], qtdPar=0, qtdImpar=0;
	
	inicializa(vetor);
	numParImpar(vetor, &qtdPar, &qtdImpar);
	
	printf("\nNo vetor tem %d pares e %d impares", qtdPar, qtdImpar);
	
	return 0;
}

void inicializa(int *vet){
	printf("Digite %d numeros para saber quantos sao pares e quantos sao impares", LEN);
	
	for(int i = 0; i < LEN; i++){
		printf("\nDigite o %d elemento: ", i+1);
		scanf("%d", &vet[i]);
	}
}

void numParImpar(int *vet, int *par, int *impar){
	for(int i = 0; i < LEN; i++){
		if(vet[i]%2 == 0) *par=*par+1;
		else *impar=*impar+1;
	}
}
