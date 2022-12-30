#include <stdio.h>

int main(){

	float salario;
	float prestacao;
	float percentual;

	printf("Digite o Salario: R$ ");
	fflush(stdout);
	scanf("%f", &salario);

	printf("Digite o Valor da Prestacao: R$ ");
	fflush(stdout);
	scanf("%f", &prestacao);

	percentual = salario * 0.2;

	if(prestacao <= percentual){
		printf("\nEmprestimo Concedido!!!");
	}else{
		printf("\nEmprestimo Negado!!!");
	}

	return 0;
}
