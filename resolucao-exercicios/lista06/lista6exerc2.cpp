#include <stdio.h>

/*
2) Faça um programa, utilizando a função abaixo, para processar os 40 produtos comercializados por uma loja. 
Para cada produto, o programa deverá ler o código, o tipo (N – Nacional, I – Importado), a quantidade em 
estoque e o preço unitário, calcular o valor em estoque e exibir o código, a descrição do tipo e o valor em 
estoque. Ao final o programa deverá exibir a quantidade de produtos nacionais e a quantidade de produtos 
importados diferentes comercializados pela loja. Faça uma função que receba como parâmetro o tipo do 
produto, exiba a descrição do tipo e contabilize este produto nos nacionais ou nos importados. A função irá 
contabilizar os nacionais e os importados nas variáveis cujos endereços são fornecidos na chamada da 
função.
*/

void funcaoAuxiliar(char tipo, int *qtdN, int *qtdI);

int main(){
	int codg, qtdProdts, qtdEstoq, qtd_estoqN = 0, qtd_estoqI = 0;
	char tipo;
	float precoUnitario;
	
	printf("Digite a quantidade de produtos: ");
	scanf("%d", &qtdProdts);
	
	for(int i = 0; i < qtdProdts; i++){
		printf("\nDigite o codigo do produto: ");
		scanf("%d", &codg);
		
		printf("\nDigite o tipo do produto (I/N): ");
		scanf(" %c", &tipo);
		
		printf("\nDigite a quantidade em estoque: ");
		scanf("%d", &qtdEstoq);
		
		printf("\nDigite o preco unitario: ");
		scanf("%f", &precoUnitario);
		
		printf("\nO valor total em estoque do produto de codigo %d e de R$%.2f", codg, qtdEstoq * precoUnitario);
		
		funcaoAuxiliar(tipo, &qtd_estoqN, &qtd_estoqI);
	}
	
	printf("\nO estoque possui %d produtos nacionais", qtd_estoqN);
	printf("\nO estoque possui %d produtos importados", qtd_estoqI);
	return 0;
}

void funcaoAuxiliar(char tipo, int *qtdN, int *qtdI){
	if(		tipo == 'I' || tipo == 'i') *qtdI = *qtdI + 1, printf("\nImportado");
	else{
		if( tipo == 'N' || tipo == 'n') *qtdN = *qtdN + 1, printf("\nNacional");
		else printf("\nTipo invalido");
	}
}

