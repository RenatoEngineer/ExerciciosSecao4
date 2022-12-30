#include <stdio.h>

int main(){

	int numero;
	int soma;

	printf("Digite um numero maior que 0 (zero): ");
	fflush(stdout);
	scanf("%d", &numero);

	if(numero > 0){
		while(numero > 0){
			soma = soma + numero % 10;
			numero = numero / 10;
		}
		printf("\nA soma de seus algarismos e: %d", soma);
	}else{
		printf("\nNumero Invalido!!!");
	}

	return 0;
}
