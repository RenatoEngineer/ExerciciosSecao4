#include <stdio.h>
#include <math.h>

int main(){

	float numero;

	printf("Digite um numero: ");
	fflush(stdout);
	scanf("%f", &numero);

	if(numero > 0){
		printf("A Raiz Quadrada e %.2f", sqrt (numero));
	}else{
		printf("Numero Invalido");
	}

	return 0;
}
