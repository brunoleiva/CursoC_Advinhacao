#include <stdio.h>

void main()
{ 

	printf("***************************\n");
	printf("*Bem-vindo ao nosso jogo!!*\n");
	printf("***************************\n");

	int numeroSecreto = 46;
	int chute;

	printf("Qual o seu chute? ");
	scanf("%d", &chute);

	//printf("%d\n", chute);
	while(numeroSecreto != chute){
		if(chute < numeroSecreto){
			printf("Um pouco MAIOR :c\n\n");

		}
		else if (chute > numeroSecreto)
		{
			printf("Um pouco MENOS :c\n\n");
		}

		printf("Qual o seu chute? ");
		scanf("%d", &chute);
	}

	if (chute == numeroSecreto)
	{
		printf("PARABENS!! VOCE ACERTOU :D\n");
	}

}