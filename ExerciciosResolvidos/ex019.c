#include <stdio.h>

int main(){

	int numero;

	printf("Digite um Numero Inteiro: ");
	fflush(stdout);
	scanf("%d", &numero);

	if(numero % 3 == 0){
		printf("\nEste numero e divisivel por 3");
	}else if(numero % 5 == 0){
		printf("\nEste numero e divisivel por 5");
	}else{
		printf("\nEste numero nao e divisivel por 3 nem por 5");
	}

	return 0;
}
