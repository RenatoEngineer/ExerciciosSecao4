#include <stdio.h>

int main(){

	int valor;

	printf("Digite um Numero entre 1 e 7: ");
	fflush(stdout);
	scanf("%d", &valor);

	//Inicio switch case

	switch(valor){

	case 1:
		printf("\nHoje e Domingo!!!");
		break;

	case 2:
		printf("\nHoje e Segunda!!!");
		break;

	case 3:
		printf("\nHoje e Terca!!!");
		break;

	case 4:
		printf("\nHoje e Quarta!!!");
		break;

	case 5:
		printf("\nHoje e Quinta!!!");
		break;

	case 6:
		printf("\nHoje e Sexta!!!");
		break;

	case 7:
		printf("\nHoje e Sabado!!!");
		break;

	default :
		printf("\nNumero Invalido!!!\nFavor digitar um numero entre 1 e 7 !!!");
	}

	//Fim switch case

	return 0;
}
