#include <stdio.h>

int main(){

	float trabalhoLaboratorio;
	float avaliacaoSemestral;
	float exameFinal;
	float mediaPonderada;

	printf("Digite a Nota do Trabalho de Laboratorio: ");
	fflush(stdout);
	scanf("%f", &trabalhoLaboratorio);

	printf("Digite a Nota da Avaliacao Semestral: ");
	fflush(stdout);
	scanf("%f", &avaliacaoSemestral);

	printf("Digite a Nota do Exame Final: ");
	fflush(stdout);
	scanf("%f", &exameFinal);

	mediaPonderada = ((trabalhoLaboratorio * 2) + (avaliacaoSemestral * 3) + (exameFinal * 5)) / (2 + 3 + 5);

	if(mediaPonderada >= 0 && mediaPonderada <= 2.9){
		printf("\nAluno Reprovado!!!");
	}else if(mediaPonderada >= 3 && mediaPonderada <= 4.9){
		printf("\nAluno em Recuperacao!!!");
	}else if(mediaPonderada > 5){
		printf("\nAluno Aprovado!!!");
	}else{
		printf("\nNota Invalida!!!");
	}

	return 0;
}
