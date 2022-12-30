#include <stdio.h>

int main(){

	int produto;
	int quantidade;
	float preco;

	printf("Digite o Codigo do Produto: ");
	fflush(stdout);
	scanf("%d", &produto);

	printf("\nDigite a quantidade do Produto: ");
	fflush(stdout);
	scanf("%d", &quantidade);

	switch(produto){

	case 100:
		preco = quantidade * 1.20;
		printf("\nValor a ser pago: R$ %.2f", preco);
		break;

	case 101:
		preco = quantidade * 1.30;
		printf("\nValor a ser pago: R$ %.2f", preco);
		break;

	case 102:
		preco = quantidade * 1.50;
		printf("\nValor a ser pago: R$ %.2f", preco);
		break;

	case 103:
		preco = quantidade * 1.20;
		printf("\nValor a ser pago: R$ %.2f", preco);
		break;

	case 104:
		preco = quantidade * 1.70;
		printf("\nValor a ser pago: R$ %.2f", preco);
		break;

	case 105:
		preco = quantidade * 2.20;
		printf("\nValor a ser pago: R$ %.2f", preco);
		break;

	case 106:
		preco = quantidade * 1;
		printf("\nValor a ser pago: R$ %.2f", preco);
		break;

	default:
		printf("\nCodigo Invalido!!!");

	}

	return 0;
}
