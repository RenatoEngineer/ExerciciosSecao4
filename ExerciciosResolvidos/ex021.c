#include <stdio.h>

int main(){

	int valor;
	float num1;
	float num2;
	float resultado;

	printf("Escolha uma opcao:\n");

	printf("\n1- Soma de 2 numeros.");
	printf("\n2- Diferenca entre 2 numeros (maior pelo menor).");
	printf("\n3- Produto entre 2 numeros.");
	printf("\n4- Divisao entre 2 numeros (o denominador nao pode ser zero).\n\n");
	fflush(stdout);
	scanf("%d", &valor);

	switch(valor){

	case 1:
		printf("\nDigite o Primeiro Numero: ");
		fflush(stdout);
		scanf("%f", &num1);

		printf("Digite o Segundo Numero: ");
		fflush(stdout);
		scanf("%f", &num2);

		resultado = num1 + num2;

		printf("\nA Soma e: %.2f", resultado);

		break;

	case 2:
		printf("\nDigite o Primeiro Numero: ");
		fflush(stdout);
		scanf("%f", &num1);

		printf("Digite o Segundo Numero: ");
		fflush(stdout);
		scanf("%f", &num2);

		resultado = num1 - num2;

		printf("\nA Diferenca e: %.2f", resultado);

		break;

	case 3:
		printf("\nDigite o Primeiro Numero: ");
		fflush(stdout);
		scanf("%f", &num1);

		printf("Digite o Segundo Numero: ");
		fflush(stdout);
		scanf("%f", &num2);

		resultado = num1 * num2;

		printf("\nO Produto e: %.2f", resultado);

		break;

	case 4:
		printf("\nDigite o Primeiro Numero: ");
		fflush(stdout);
		scanf("%f", &num1);

		printf("Digite o Segundo Numero: ");
		fflush(stdout);
		scanf("%f", &num2);

		resultado = num1 / num2;

		printf("\nA Divisao e: %.2f", resultado);

		break;

	default:
		printf("\nOpcao Invalida!!!");
	}

	return 0;
}
