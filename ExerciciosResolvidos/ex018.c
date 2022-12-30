#include <stdio.h>

int main(){

	char operacao;
	float numero1;
	float numero2;
	float soma;

	printf("Escolha uma das operacoes abaixo: \nAdicao (+)\nSubtracao(-)\nMultiplicacao(*)\nDivisao(/)\n");
	fflush(stdout);
	scanf("%c", &operacao);

	//Inicio switch case

	switch(operacao){

	case '+':
		printf("\nDigite o Primeiro Numero: ");
		fflush(stdout);
		scanf("%f", &numero1);

		printf("Digite o Segundo Numero: ");
		fflush(stdout);
		scanf("%f", &numero2);

		soma = numero1 + numero2;

		printf("\nA Soma e %.2f", soma);

		break;

	case '-':
		printf("\nDigite o Primeiro Numero: ");
		fflush(stdout);
		scanf("%f", &numero1);

		printf("Digite o Segundo Numero: ");
		fflush(stdout);
		scanf("%f", &numero2);

		soma = numero1 - numero2;

		printf("\nA Subtracao e %.2f", soma);

		break;

	case '*':
		printf("\nDigite o Primeiro Numero: ");
		fflush(stdout);
		scanf("%f", &numero1);

		printf("Digite o Segundo Numero: ");
		fflush(stdout);
		scanf("%f", &numero2);

		soma = numero1 * numero2;

		printf("\nA Multiplicacao e %.2f", soma);

		break;

	case '/':
		printf("\nDigite o Primeiro Numero: ");
		fflush(stdout);
		scanf("%f", &numero1);

		printf("Digite o Segundo Numero: ");
		fflush(stdout);
		scanf("%f", &numero2);

		soma = numero1 / numero2;

		printf("\nA Divisao e %.2f", soma);

		break;

	default :
		printf("\nA Operacao Digitada e Invalida!!!");

	}

	//Fim switch Case

	return 0;
}
