#include <stdio.h>

int main()
{
	printf("***************************************\n");
	printf("*Bem vindo ao nosso jogo de advinhacao*\n");
	printf("***************************************\n");

	int	numero = 42;	
	//printf("O numero secreto: %d", numero);

	int chute;
	printf("Qual o seu chute? ");
	scanf("%d", &chute);
	printf("Seu chute foi %d", chute);

}
