#include <stdio.h>
#include <math.h>

int main(){

	float numero;

	printf("Digite um numero Real: ");
	fflush(stdout);
	scanf("%f", &numero);

	if(numero > 0){
		printf("A Raiz Quadrada e: %.2f", sqrt(numero));
	}else{
		printf("O Quadrado do Numero e: %.2f", (numero * numero));
	}

	return 0;
}
