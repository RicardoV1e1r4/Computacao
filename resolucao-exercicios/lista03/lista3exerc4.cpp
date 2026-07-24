#include<stdio.h>

/*
4) Faça um programa, usando a função abaixo, que leia a matrícula de um aluno e exiba uma mensagem 
informando se a matrícula é válida ou inválida. Faça uma função que receba como parâmetro a matrícula 
de um aluno (número inteiro no seguinte formato AASNN). Está função deverá retornar 0, caso a matrícula 
seja inválida ou 1, caso a matrícula seja válida. Sabe-se: 
AA: representa o ano (10 a 26) 
S: representa o semestre (1 ou 2) 
NN: representa o número sequencial (01 a 90)
*/

bool verificaMatricula(int matricula);

int main(){
	int matricula;
	int validade;
	int num1, num2, num3;
	
	printf("Digite a matricula do aluno: ");
	scanf("%d", &matricula);
	
	validade = verificaMatricula(matricula);
	//printf("\n%d\n%d\n%d", num1, num2, num3);
	
	if(validade == true) printf("\nMatricula valida");
	else printf("\nMatricula invalida");
	return 0;
}

bool verificaMatricula(int matricula){
	bool situacao;
	bool condicao1, condicao2, condicao3;
	
	if(matricula/1000 >= 10 && matricula/1000 <= 26) condicao1 = true, printf("\nA%d", condicao1);
	else condicao1 = false;
	
	if((matricula%1000)/100 == 1 || (matricula%1000)/100 == 2) condicao2 = true, printf("\nB%d", condicao2);
	else condicao2 = false;
	
	if(matricula%100 >= 1 && matricula%100 <=90) condicao3 = true, printf("\nC%d", condicao3);
	else condicao3 = false;
	
	if(condicao1 == condicao2 && condicao2 == condicao3) situacao = true;
	else situacao = false;
	
	return situacao;
}
