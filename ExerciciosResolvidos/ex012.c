#include <stdio.h>
#include <math.h>

int main(){

	int numero;
	int resultado;

	printf("Digite um número: ");
	fflush(stdout);
	scanf("%d", &numero);

	if(numero > 0){
		resultado = log(numero);
		printf("\nO Logaritmo do numero %d e: %d", numero, resultado);
	}else{
		printf("\nNumero Invalido");
	}

	return 0;
}
