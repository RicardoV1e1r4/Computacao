#include <stdio.h>

/*
1) Um site especializado em programação em C possui vários arquivos disponíveis para download. Os usuários 
podem fazer download dos arquivos desejados, pagando um preço fixo por MByte. Faça um programa, 
utilizando a função abaixo, para processar os downloads dos usuários do site. Inicialmente, o programa 
deverá ler o preço que o site cobra por Mbytes. Para cada usuário, o programa deverá ler a quantidade de 
downloads desejada e para cada download o tamanho em MBytes, calcular e exibir o valor a ser pago pelo 
usuário. Término da leitura dos usuários: quantidade de downloads desejada = 0. No final, o programa 
deverá fornecer o valor médio pago pelos usuários e o maior valor pago.
Faça uma função para processar os downloads de um usuário. A função recebe como parâmetro a 
quantidade de downloads de um usuário e o preço que o site cobra por Mbyte. A função deverá ler o 
tamanho de cada download, calcular, exibir e retornar o valor a ser pago pelo usuário.
*/

float processaDados(int qtd_downloads, float preco);

int main(){
	float preco_mbyte, val, soma, media;
	int qtd_dls, qtd_usuarios, cont;
	
	printf("Digite o preco por Mbyte (R$)\n: ");
	scanf("%f", &preco_mbyte);
	
	printf("\nDigite a quantidade arquivos a serem baixados: ");
	scanf("%d", &qtd_dls);
	
	val = cont = 0;
	while(qtd_dls != 0){
		val = processaDados(qtd_dls, preco_mbyte);
		soma = soma + val;
		
		cont = cont + 1;
		
		printf("\nDigite a quantidade arquivos a serem baixados: ");
		scanf("%d", &qtd_dls);
	}
	
	media = soma/cont;
	printf("\nA soma de todos os valores e igual a: %.2f", soma);
	printf("\nO valor media pago foi de %.2f", media);
	return 0;
}

float processaDados(int qtd_downloads, float preco){
	float tamanho_arquivos, valor, soma_valores;
	
	printf("\n--Funcao--");
	
	soma_valores = 0;
	for(int i = 0; i < qtd_downloads; i++){
		printf("\nDigite o tamanho do arquivo (Mbytes): ");
		scanf("%f", &tamanho_arquivos);
		
		valor = preco * tamanho_arquivos;
		soma_valores = soma_valores + valor;
	}
	
	printf("\nValor total a ser pago %.2f\n", soma_valores);
	return soma_valores;
}
