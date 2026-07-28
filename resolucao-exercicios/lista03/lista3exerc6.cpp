#include<stdio.h>

/*
6) Faça um programa para calcular o pagamento de um funcionário de uma empresa. Este programa deverá 
ler os seguintes dados do funcionário: matrícula, valor da hora de trabalho e quantidade de horas 
trabalhadas. Este programa deverá exibir a matrícula, o salário base, o desconto do INSS, o desconto do 
imposto de renda e o salário líquido do funcionário. Faça as seguintes funções: 
a) Para calcular e retornar o salário base. Esta funçõo deverá receber o valor da hora de trabalho e a 
quantidade horas trabalhadas. 
b) Para calcular e retornar o desconto do INSS. Esta função deverá receber o salário base. O desconto do 
INSS é de 11% do salário base, não podendo ultrapassar R$450,27.
c) Para calcular e retornar o desconto do imposto de renda. Esta função deverá receber o salário base. O 
desconto do imposto de renda é calculado da seguinte forma: 
	- salário base até 1800,00					-> isento (desconto = 0) 
	- salário base acima de 1800,00 até 2900,00 -> desconto é de 15% do salário base 
	- salário base acima de 2900,00				-> desconto é de 27,5% do salário base 
*/

float salarioBase			(float reais_por_hora, float qtd_horas);
float descontoINSS			(float salarioBase);
float descontoImpostoRenda	(float salarioBase);

int main(){
	int mtrl;
	float reais_por_hora, qtd_horas;		// Matricula, valor da hora de trabalho e quantidade horas trabalhadas
	float salbase, desc_imposto_renda, desc_inss, salarioLiquido; 

	printf("\nDigite a matricula do funcionario: ");
	scanf("%d", &mtrl);

	printf("\nDigite o valor da hora de trabalho (R$/h): ");
	scanf("%f", &reais_por_hora);
	
	printf("\nDigite a quantidade de horas trabalhadas: ");
	scanf("%f", &qtd_horas);

	salbase				= salarioBase(reais_por_hora, qtd_horas);
	desc_inss			= descontoINSS(salbase);
	desc_imposto_renda	= descontoImpostoRenda(salbase);

	salarioLiquido = salbase - desc_inss - desc_imposto_renda;

	printf("\nMatricula: %d", mtrl);
	printf("\nSalario base e: %.2f", salbase);
	printf("\nDesconto do INSS: %.2f", desc_inss);
	printf("\nDesconto imposto de renda: %.2f", desc_imposto_renda);
	printf("\nSalario liquido: %.2f", salarioLiquido);
	
	return 0;
}

float salarioBase(float reais_por_hora, float qtd_horas){
	return reais_por_hora * qtd_horas;
}

float descontoINSS(float salBase){
	return salBase*0.11;
}

float descontoImpostoRenda(float salBase){
	float desc;
	
	if(salBase <= 1800) desc = 0;
	else{
		if(salBase > 1800 && salBase <= 2900) desc = (salBase * 0.15);
		else desc = salBase * 0.27;
	}
	
	return desc;
}

