#include <stdio.h>

/*
2) Faça um programa que, utilizando a função abaixo, que inicialmente leia a quantidade de automóveis 
diferentes produzidos por uma empresa. A seguir, para cada automóvel, o programa deverá ler o código do 
modelo e a quantidade em estoque. Ao final, o programa deverá exibir a quantidade de automóveis 
diferentes que tem quantidade em estoque acima de 1000. Faça uma função que recebe como parâmetro 
a quantidade de automóveis diferentes produzidos por uma empresa. A função irá ler os dados de cada 
automóvel, calcular e retornar a quantidade de automóveis diferentes que tem quantidade em estoque 
acima de 1000. 
*/

int estoqueAcimadeMil(int qtd);

int main(){
	int qtd_modelos, acima_mil;
	
	printf("Quantidade de estoques acima de mil (1000)");
	printf("\nDigite a quantidade de modelos: ");
	scanf("%d", &qtd_modelos);
	
	acima_mil = estoqueAcimadeMil(qtd_modelos);
	
	printf("\n%d modelo(s) possui(em) estoque acima de 1000 (mil)", acima_mil);
	return 0;
}

int estoqueAcimadeMil(int qtd){
	int codg, qtd_estoq, i;
	int maior_qtd_estoq = 0;
	
	i = 0;
	while(i < qtd){
		printf("\nDigite o codigo do modelo e a quantidade em estoque (codg, quantidade): ");
		scanf("%d,%d", &codg, &qtd_estoq);
		
		if(qtd_estoq > 1000) maior_qtd_estoq = maior_qtd_estoq + 1;
		
		++i;
	}
	return maior_qtd_estoq;
}
