#include <stdio.h>

int main(){

	int idade;
	int tempoServico;

	printf(".:: APOSENTADORIA ::.\n\n");

	printf("Digite a Idade do Trabalhador: ");
	fflush(stdout);
	scanf("%d", &idade);

	printf("Digite o Tempo de Servico do Trabalhador: ");
	fflush(stdout);
	scanf("%d", &tempoServico);

	if(idade >= 65 || tempoServico >= 30 || (idade >= 60 && tempoServico >= 25)){
		printf("\nAposentadoria Liberada");
	}else{
		printf("\nAposentadoria Negada");
	}

	return 0;
}
