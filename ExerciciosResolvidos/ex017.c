#include <stdio.h>

int main(){

	float area;
	float baseMaior;
	float baseMenor;
	float altura;

	printf(".:: Vamos Calcular a Area do Trapezio ::.\n");

	printf("\nDigite o Valor da Base Maior: ");
	fflush(stdout);
	scanf("%f", &baseMaior);

	printf("Digite o Valor da Base Menor: ");
	fflush(stdout);
	scanf("%f", &baseMenor);

	printf("Digite o Valor da Altura: ");
	fflush(stdout);
	scanf("%f", &altura);

	if(baseMaior < baseMenor && baseMaior > 0){
		printf("\nA Base Maior e Menor que a Base Menor!!!");
	}else if(baseMaior > 0 && baseMenor > 0){
		area = ((baseMaior + baseMenor) * altura) / 2;
		printf("\nA Area do Trapedio e: %.2f", area);
	}else{
		printf("\nO Numero digitado e Invalido!!!");
	}


	return 0;
}
