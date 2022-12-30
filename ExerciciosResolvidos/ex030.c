#include <stdio.h>

int main(){

	int numero1;
	int numero2;
	int numero3;

	printf("Digite Tres Numeros:\n");
	fflush(stdout);
	scanf("%d %d %d", &numero1, &numero2, &numero3);

	/* Existem 6 Possíveis Ordens que são: */

	if(numero1 <= numero2 && numero2 <= numero3){
		printf("A ordem Crescente e: %d %d %d", numero1, numero2, numero3);
	}else if(numero1 <= numero3 && numero3 <= numero2){
		printf("A ordem Crescente e: %d %d %d", numero1, numero3, numero2);
	}else if(numero2 <= numero1 && numero1 <= numero3){
		printf("A ordem Crescente e: %d %d %d", numero2, numero1, numero3);
	}else if(numero2 <= numero3 && numero3 <= numero1){
		printf("A ordem Crescente e: %d %d %d", numero2, numero3, numero1);
	}else if(numero3 <= numero1 && numero1 <= numero2){
		printf("A ordem Crescente e: %d %d %d", numero3, numero1, numero2);
	}else{ //numero3 <= numero2 && numero2 <= numero1
		printf("A ordem Crescente e: %d %d %d", numero3, numero2, numero1);
	}

	return 0;
}
