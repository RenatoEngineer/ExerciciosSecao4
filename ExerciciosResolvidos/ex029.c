#include <stdio.h>
#include <stdlib.h>

int main(){

	int i;
	int acertos = 0;
	int a;
	int b;
	int soma;
	int resposta;

	 printf(".:: VAMOS BRINCAR DE SOMAR ::.\n\n");

	for(i=0; i<5; i++){
	 a = (rand() % 100) + 1;
	 b = (rand() % 100) + 1;
	 soma = a + b;
	 resposta = soma;

	 printf("\nQual e a Soma de %d + %d?\n\n", a, b);
	 fflush(stdout);
	 scanf("%d",&resposta);

	 if (resposta != soma)
	  printf("Resposta Errada!!! A Resposta Certa e: %d\n", soma);
	 else
	 acertos ++;

	}
	printf("Voce Acertou em: %d\n", acertos);

	return 0;
}
