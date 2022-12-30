#include <stdio.h>

int main(){

	int mes;

	printf("Digite um Numero para saber o Mes: ");
	fflush(stdout);
	scanf("%d", &mes);

	//Inicio switch case

	switch(mes){

	case 1:
		printf("\nO Mes e Janeiro!");
		break;

	case 2:
		printf("\nO Mes e Fevereiro!");
		break;

	case 3:
		printf("\nO Mes e Marco!");
		break;

	case 4:
		printf("\nO Mes e Abril!");
		break;

	case 5:
		printf("\nO Mes e Maio!");
		break;

	case 6:
		printf("\nO Mes e Junho!");
		break;

	case 7:
		printf("\nO Mes e Julho!");
		break;

	case 8:
		printf("\nO Mes e Agosto!");
		break;

	case 9:
		printf("\nO Mes e Setembro!");
		break;

	case 10:
		printf("\nO Mes e Outubro!");
		break;

	case 11:
		printf("\nO Mes e Novembro!");
		break;

	case 12:
		printf("\nO Mes e Dezembro!");
		break;

	default :
		printf("\nO Numero digitado e Invalido!\nFavor digitar um Numero entre 1 e 12");
	}

	return 0;
}
