#include <stdio.h>

int main(){

	int num1;
	int num2;

	printf("Digite o Primeiro Numero: ");
	fflush(stdout);
	scanf("%d", &num1);

	printf("Digite o Segundo Numero: ");
	fflush(stdout);
	scanf("%d", &num2);

	if(num1 > num2){
		printf("\nPrimeiro Numero e maior");
		}else if(num1 == num2){
			printf("\nNumeros Iguais");
		}else{
			printf("\nSegundo Numero e maior");
	}

	return 0;
}
