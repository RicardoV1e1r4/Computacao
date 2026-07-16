#include<stdio.h>

/*
5. Faça um programa, utilizando a função abaixo, que processe um aluno de uma turma. O programa deverá 
ler as seguintes informações do aluno: matrícula, nota da primeira prova, nota da segunda prova, nota do 
primeiro trabalho e nota do segundo trabalho. Este programa deverá calcular e exibir: matrícula, média das 
provas, média dos trabalhos e média final. Todas as médias são aritméticas. Faça a seguinte função: 
a) calcula_media: esta função deverá receber os dois valores para o cálculo da média aritmética como 
parâmetros, calcular e retornar a média aritmética.
*/

float calcula_media(float num1, float num2);

int main(){
	int matricula;
	float nota1, nota2;
	float nota_trabalho1, nota_trabalho2;
	float media_provas, media_trabalhos, media_final;
	
	printf("Media de um aluno");
	printf("\nDigite a matricula do aluno: ");
	scanf("%d", &matricula);
	
	printf("Digite a nota da prinmeira prova: ");
	scanf("%f", &nota1);
	printf("Digite a nota da segunda prova: ");
	scanf("%f", &nota2);
	
	printf("Digite a nota do primeiro trabalho: ");
	scanf("%f", &nota_trabalho1);
	printf("Digite a nota do segundo trabalho: ");
	scanf("%f", &nota_trabalho2);
	
	media_provas	= calcula_media(nota1, nota2);
	
	media_trabalhos = calcula_media(nota_trabalho1, nota_trabalho2);
	
	media_final		= calcula_media(media_provas, media_trabalhos);
	
	printf("\nSituacao do aluno");
	printf("\nMatricula: %d", matricula);
	
	printf("\nMedia das provas:	%.2f", media_provas);
	printf("\nMedia dos trabalhos:	%.2f", media_trabalhos);
	printf("\nMedia final:		%.2f", media_final);
	
	return 0;
}

float calcula_media(float num1, float num2){
	float media;
	
	return media = (num1 + num2)/2;
}
