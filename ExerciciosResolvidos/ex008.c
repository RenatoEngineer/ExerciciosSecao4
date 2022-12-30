#include <stdio.h>

int main(){

	float nota1;
	float nota2;
	float media;

	printf("Digite a primeira Nota: ");
	fflush(stdout);
	scanf("%f", &nota1);

	printf("Digite a segunda Nota: ");
	fflush(stdout);
	scanf("%f", &nota2);

	if((nota1 >= 0 && nota1 <= 10) && (nota2 >= 0 && nota2 <= 10)){
		media = (nota1 + nota2) / 2;
		printf("\nA media das Notas e: %.2f", media);
	}else{
		printf("\nNota Invalida!!!");
	}

	return 0;
}
