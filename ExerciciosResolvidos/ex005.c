#include <stdio.h>

int main(){

	int numero;

	printf("Digite um Numero: ");
	fflush(stdout);
	scanf("%d", &numero);

	if(numero % 2 == 0){
		printf("O numero digitado e Par");
	}else{
		printf("O numero digitado e Impar");
	}

	return 0;
}
