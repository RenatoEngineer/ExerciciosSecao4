#include <stdio.h>
#include <math.h>

int main(){

	float numero;

	printf("Digite um Numero: ");
	fflush(stdout);
	scanf("%f", &numero);

	if(numero >= 0){
		printf("\nO Quadrado do Numero e: %.f", (numero * numero));
		printf("\nA Raiz Quadrada e: %.2f", sqrt(numero));
	}else{
		printf("\nNumero Invalido");
	}

	return 0;
}
