#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void main()
{ 

	printf("***************************\n");
	printf("*Bem-vindo ao nosso jogo!!*\n");
	printf("***************************\n");

	int dificuldade;
	int tentativas = 0;
	printf("(1) Facil \n(2) Medio\n(3) Dificil\n");
	scanf("%d", &dificuldade);

	if(dificuldade ==1){
		tentativas = 12;
	}
	else if(dificuldade ==2){
		tentativas = 8;
	}
	else if(dificuldade ==3){
		tentativas = 5;
	}else if (tentativas == 0){
		printf("*ESCOLHA UMA DIFICULDADE VALIDA >.<*\n");
	}

	srand(time(NULL));
	int numeroSecreto = rand() % 100;
	int chute;
	
	//printf("%d\n", chute);
	while(numeroSecreto != chute && tentativas != 0 ){
		printf("*ADIVINHE O NUMERO DE 1 A 100*\n");
		printf("Voce tem %d tentativas!\n", tentativas);
		printf("Qual o seu chute? \n");
		scanf("%d", &chute);

		if(chute < numeroSecreto){
			printf("\n** Um pouco MAIOR :o **\n\n");

		}
		else if (chute > numeroSecreto)
		{
			printf("\n** Um pouco MENOR :o **\n\n");
		}

		tentativas --;

	}

	if (chute == numeroSecreto)
	{
		printf("Parabens, voce ganhou!\n");
		printf("       ___________      \n");
		printf("      '._==_==_=_.'     \n");
		printf("      .-:      /-.    \n");
		printf("     | (|:.     |) |    \n");
		printf("      '-|:.     |-'     \n");
		printf("        ::.    /      \n");
		printf("         '::. .'        \n");
		printf("           ) (          \n");
		printf("         _.' '._        \n");
		printf("        '-------'       \n");
	}else if(tentativas == 0){
		printf("VOCE PERDEU!! >.<\n");
		printf("O NUMERO ERA: %d \n", numeroSecreto);
	}

	printf("Aperte alguma tecla para finalizar!\n");
	getch();

}