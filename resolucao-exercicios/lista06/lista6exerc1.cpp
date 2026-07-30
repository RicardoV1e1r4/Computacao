#include <stdio.h>

/*
1) Faça apenas as duas funções auxiliares abaixo.
a) Faça a função leValidaTipo que leia e valide o tipo do produto (1-fruta, 2-legume, 3-verdura). A função 
deverá retornar o tipo validado.
b) Faça uma função, utilizando a função acima, que receba a quantidade de produtos comercializados por 
uma loja como parâmetro. A função deverá ler para cada produto o código e o tipo (1-fruta, 2-legume, 
3-verdura), descobrir a quantidade de produtos que são do tipo 1, a quantidade de produtos que são do 
tipo 2 e a quantidade de produtos que são do tipo 3. Para isto a função irá guardar as quantidades nas 
variáveis cujos endereços são fornecidos na chamada da função.
*/

int leValidaTipo();
int funcaoAuxiliar(int qtd_produtos, int *qtd_tipo1, int *qtd_tipo2, int *qtd_tipo3);

int main(){
	return 0;
}

int leValidaTipo(){
}

/*
Para criar a função principal (main) e validar o seu exercício, você precisará construir um cenário
que forneça os dados necessários para a função do item b e depois exiba os resultados modificados por
ela.
Como a função b utiliza ponteiros para devolver os totais, a sua main será a responsável por criar
e "emprestar" os endereços dessas variáveis.
Aqui está o passo a passo de como estruturar a sua função
main:
1. Declaração de Variáveis
Dentro da main, você precisará criar:
	- Uma variável para a quantidade total de produtos que a loja comercializa (ex: int totalProdutos;).
	- Três variáveis inteiras separadas para armazenar as contagens de cada tipo (fruta,
	legume, verdura).
	- Importante: Inicialize essas três variáveis de contagem com zero, pois elas funcionarão
	como contadores.
2. Entrada de Dados Inicial
	- Use um scanf para perguntar ao usuário quantos produtos a loja comercializou.
	- Salve esse valor na variável de quantidade total.
3. A Chamada da Função Auxiliar (O ponto chave)
Quando você for chamar a função do item b, você deve passar os seguintes argumentos:
	1. O valor da quantidade total de produtos (passagem comum por valor).
	2. O endereço de memória da variável do tipo 1.
	3. O endereço de memória da variável do tipo 2.
	4. O endereço de memória da variável do tipo 3.
		*Dica: Lembre-se do operador que você acabou de aprender para extrair o endereço de
		 uma variável comum (&).
4. Exibição dos Resultados
Após a linha de chamada da função, as suas três variáveis de contagem (que começaram com zero)
terão sido modificadas diretamente na memória pela função auxiliar.
	- Use printf para exibir na tela o valor final de cada uma das três variáveis, mostrando
	quantos produtos de cada tipo foram contabilizados.
*/
