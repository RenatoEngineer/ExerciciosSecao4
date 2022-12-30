#include <stdio.h>

int main(){

	int ano;

	printf("Digite o Ano de Nascimento: ");
	fflush(stdout);
	scanf("%d", &ano);

	if((ano % 4) == 0 && (ano % 100) != 0){
		printf("\nVoce Nasceu em um Ano Bissexto!!!");
	}else{
		printf("\nVoce nao Nasceu em um Ano Bissexto!!!");
	}

	return 0;
}
