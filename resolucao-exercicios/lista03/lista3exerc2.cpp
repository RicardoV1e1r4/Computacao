#include<stdio.h>

/*
2) Faça um programa, utilizando a função abaixo, que leia a idade de uma pessoa e exiba a sua situação 
eleitoral. 
a) Faça uma função que receba como parâmetro a idade de uma pessoa e exiba uma das mensagens 
abaixo: 
• Não eleitor: idade < 16 
• Eleitor facultativo: 16 <= idade < 18 ou idade > 70 
• Eleitor: 18<= idade <= 70
*/

void situacaoEleitoral(int idade);

int main(){
	int idade;
	
	printf("\nSituacao Eleitoral\n");
	printf("\nDigite a idade do eleitor: ");
	scanf("%d", &idade);
	
	situacaoEleitoral(idade);
	
	return 0;
}

void situacaoEleitoral(int idade){
	if(idade < 16) printf("\nNao eleitor");
	
	else{
		if(idade >= 16 && idade < 18 || idade > 70) printf("\nEleitor facultativo");
		
		else printf("\nEleitor");		// if(idade >= 18 || idade <= 70)
	}
}

