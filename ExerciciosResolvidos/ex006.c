#include <stdio.h>

int main(){

	int numero1;
	int numero2;

	printf("Digite o Primeiro Numero: ");
	fflush(stdout);
	scanf("%d", &numero1);

	printf("Digite o Segundo Numero: ");
	fflush(stdout);
	scanf("%d", &numero2);

	if(numero1 == numero2){
		printf("\nOs Numeros Digitados São Iguais");
		printf("\nA Diferenca entre eles e: %d", numero1 - numero2);
	}else if(numero1 > numero2){
		printf("\nO Numero %d e Maior que %d", numero1, numero2);
		printf("\nA Diferenca entre eles e: %d", numero1 - numero2);
	}else{
		printf("\nO Numero %d e Maior que %d", numero2, numero1);
		printf("\nA Diferenca entre eles e: %d", numero2 - numero1);
	}

	return 0;
}
