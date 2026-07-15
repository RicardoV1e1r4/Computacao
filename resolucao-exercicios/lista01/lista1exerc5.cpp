#include<stdio.h>

/*
5)
a) Faça uma função que receba como parâmetros dois números inteiros: horas e minutos. Esta função 
deverá retornar o horário convertido em minutos.
b) Faça uma função que receba como parâmetros quatro números inteiros: horas e minutos do horário 
previsto de chegada de um vôo e horas e minutos do horário efetivo de chegada de um vôo. Esta função 
deverá utilizar, obrigatoriamente, a função anterior e retornar a diferença em minutos dos 2 horários. 
Considere que o primeiro horário ocorre sempre antes do segundo.
*/

int hora2minute(int h, int min);		// Função do item (a)

int diferenca_horarios(int h_previsto, int min_previsto, int h_efetiva, int min_efetiva);		// Função do item (b)

int main(){
	int hora_prev, minuto_prev, tempo_convertido;
	int hora_efet, minuto_efet, diferenca;
	
	printf("Diferenca entre o horario de chegada previsto e o efetivo");
	printf("\nDigite os horarios que seram convertidos para minutos");
	// Previsto
	printf("\nDigite a hora prevista para a chegada: ");
	scanf("%d", &hora_prev);
	
	printf("\nDigite o minuto previsto para a chegada: ");
	scanf("%d", &minuto_prev);
	
	// Efetivo
	printf("\nDigite a hora efetiva da chegada: ");
	scanf("%d", &hora_efet);
	
	printf("\nDigite o minuto efetivo da chegada: ");
	scanf("%d", &minuto_efet);
	/*
	//Item (a)
	tempo_convertido = hora2minute(hora_prev, minuto_prev);
	
	printf("O horario: %0.2d:%0.2dh convertido para minutos e igual a %dmin", hora_prev, minuto_prev, tempo_convertido);
	*/
	
	// Item (b)
	diferenca = diferenca_horarios(hora_prev, minuto_prev, hora_efet, minuto_efet);
	
	printf("\nA diferenca entre %0.2d:%0.2dh e %0.2d:%0.2dh, em minutos e igual a %dmin", hora_prev, minuto_prev, hora_efet, minuto_efet, diferenca);
	return 0;
}

// Função do item (a)
int hora2minute(int h, int min){
	int h2min;
	
	h2min = 60*h;
	
	return h2min + min;
}

// Função do item (b)
int diferenca_horarios(int h_previsto, int min_previsto, int h_efetiva, int min_efetiva){
	int h2min_prev, h2min_efet;
	
	h2min_prev = hora2minute(h_previsto, min_previsto);
	h2min_efet = hora2minute(h_efetiva, min_efetiva);
	
	return h2min_efet - h2min_prev;
}

