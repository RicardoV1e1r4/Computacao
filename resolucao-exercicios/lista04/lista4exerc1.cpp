#include<stdio.h>

/*
1)
a) Faça uma função que receba como parâmetro um número inteiro (N) e exiba a tabuada de N. 
b) Faça um programa, utilizando a função acima, que exiba as tabuadas de 1 a 10. 
*/

void tabuada(int num);

int main(){
	int n;
	/*
	printf("Digite um numero para mostrar a sua tabuada: ");
	scanf("%d", &n);
	
	tabuada(n);
	*/
	printf("Tabuada de 1 ate 9");
		
	for(int i=1; i <= 9; i++){
		printf("\n");
		tabuada(i);
	}
	
	return 0;
}

void tabuada(int num){
	
	for(int i = 1; i <= 10; i++){
		if(i < 10) printf("\n%2.d x %d = %d", i, num, i*num);
		else printf("\n%d x %d = %d", i, num, i*num);
	}
}
