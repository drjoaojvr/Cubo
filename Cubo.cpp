/*
Nome:Joao Rodrigues
Turma: 7
Implemente um sistema ultilizando funcao que
lei um valor e apresenta para o usuario o valor 
do CUBO do valor Digitado.
*/
#include <stdio.h>

// Metodo Funcao chamada soma - Entrada

void CUBO(float a){
	
	float CUBO; // Variavel
	CUBO = (a * a * a); // Processamento 
	
	printf("O valor %f e %%f e %f", a, CUBO); //Mostra na tela
}

// Metodo Funcao chamada soma - Saida

	int main()
	{
	float valor;
	
	printf("Digite o valor:\n"); // Mostra na tela
		scanf("%f",&valor); // Recebe o valor do Usoario
			CUBO(valor); // Chamada funcao
	
		return 0;
	}
