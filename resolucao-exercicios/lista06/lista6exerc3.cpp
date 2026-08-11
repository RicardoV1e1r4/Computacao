#include <stdio.h>

/*
3) Faça um programa, utilizando a função abaixo, que exiba o maior salário de cada departamento de uma 
empresa e quantos funcionários ganham o maior salário do departamento. Para cada departamento, o 
programa deverá ler o código do departamento e a quantidade de funcionários, e para cada funcionário, a 
matrícula e o salário. Término da leitura dos departamentos: código do departamento = 0.
a) Faça a função umDepartamento para processar os funcionários de um departamento. Esta função 
deverá receber como parâmetro a quantidade de funcionários do departamento, ler os dados de cada 
funcionário, descobrir o maior salário do departamento e quantos funcionários ganham este maior 
salário, armazenando-os nas variáveis cujos endereços são fornecidos na chamada da função.

Salários
*/

void umDepartamento(int qtdFuncionarios, float *maiorSal, int *qtdMaiorSal);

int main(){
	int codgDepart, qtdFuncionarios, qtdMaiorSal=0;
	float maiorSal=0;
	
	printf("\nDigite o codigo do departamento: ");
	scanf("%d", &codgDepart);
	
	while(codgDepart != 0){
		printf("\nDigite a quantidade de funcionarios: ");
		scanf("%d", &qtdFuncionarios);
		umDepartamento(qtdFuncionarios, &maiorSal, &qtdMaiorSal);
		
		printf("\nO maior salario e %.2f", maiorSal);
		printf("\n%d recebem o respectivo salario", qtdMaiorSal);
		
		maiorSal = 0;
		
		printf("\nDigite o codigo do departamento: ");
		scanf("%d", &codgDepart);
	}
	
	return 0;
}

void umDepartamento(int qtdFuncionarios, float *maiorSal, int *qtdMaiorSal){
	int matricula;
	float salario;
	
	for(int i = 0; i < qtdFuncionarios; i++){
		printf("------------------------------------------");
		printf("\nDigite a matricula: ");
		scanf("%d", &matricula);
		
		printf("\nDigite o salario (R$1800/2500/3500): ");
		scanf("%f", &salario);
		
		if(*maiorSal == salario) *qtdMaiorSal = *qtdMaiorSal + 1;
		else if(salario > *maiorSal) *qtdMaiorSal = 1, *maiorSal = salario;
	}
}
