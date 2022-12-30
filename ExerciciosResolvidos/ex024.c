#include <stdio.h>

int main(){

	int destino;
	float produto;
	float imposto;

	printf(".:: CALCULADORA DE IMPOSTO ::.\n\n");

	printf("Digite o Valor do Produto: R$ ");
	fflush(stdout);
	scanf("%f", &produto);

	printf("\nDigite o Destino:\n1- MG\n2- SP\n3- RJ\n4- MS\n\n");
	fflush(stdout);
	scanf("%d", &destino);

	switch(destino){

	case 1:
		imposto = produto + (produto * 0.07);
		printf("\nO Produto com Imposto para MG e: R$ %.2f", imposto);
		break;

	case 2:
		imposto = produto + (produto * 0.12);
		printf("\nO Produto com Imposto para SP e: R$ %.2f", imposto);
		break;

	case 3:
		imposto = produto + (produto * 0.15);
		printf("\nO Produto com Imposto para RJ e: R$ %.2f", imposto);
		break;

	case 4:
		imposto = produto + (produto * 0.08);
		printf("\nO Produto com Imposto para MS e: R$ %.2f", imposto);
		break;

	default:
		printf("\nDestino Invalido!!!\nFavor digite um Destino entre 1 e 4");

	}

	return 0;
}
