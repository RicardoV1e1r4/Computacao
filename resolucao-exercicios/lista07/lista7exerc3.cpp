#include <stdio.h>

#define LEN 5

/*
3) Faça uma função que receba como parâmetro um vetor de números reais, a quantidade de números 
armazenados no vetor e a média dos números. Esta função deverá retornar a quantidade de números acima 
e a média dos números.
*/

void preencheVetor(float *vet1);
void mediaNumeros(float *vet2, float *media2);

int main(){
	float numReais[LEN];
	float media;
	
	preencheVetor(numReais);
	mediaNumeros(numReais, &media);
	
	printf("A media dos numeros digitados e igual a %.2f", media);
	return 0;
}

void preencheVetor(float *vet1){
	for(int i=0; i < LEN; i++){
		printf("Digite o %d numero: ", i+1);
		scanf("%f", &vet1[i]);
	}
}

void mediaNumeros(float *vet2, float *media2){
	float soma=0;
	
	for(int i=0; i< LEN; i++){
		soma = soma + vet2[i];
	}
	
	*media2 = soma/LEN;
}
