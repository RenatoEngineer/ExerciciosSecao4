#include <stdio.h>

int main(){

	float nota1;
	float nota2;
	float nota3;
	float mediaPonderada;

	printf("Digite a Primeira Nota: ");
	fflush(stdout);
	scanf("%f", &nota1);

	printf("Digite a Segunda Nota: ");
	fflush(stdout);
	scanf("%f", &nota2);

	printf("Digite a Terceira Nota: ");
	fflush(stdout);
	scanf("%f", &nota3);

	mediaPonderada = ((nota1 * 1) + (nota2 * 1) + (nota3 * 2)) / (1 + 1 + 2);

	if(mediaPonderada >= 60){
		printf("\nAprovado!!!");
	}else{
		printf("\nReprovado!!!");
	}

	return 0;
}
