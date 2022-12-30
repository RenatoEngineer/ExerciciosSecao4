#include <stdio.h>
#include <math.h>

int main(){

	float delta;
	float a;
	float b;
	float c;
	float x1;
	float x2;

	printf(".:: CALCULO DE EQUACAO SEGUNDO GRAU ::.\n\n");

	printf("Digite o Valor de A: ");
	fflush(stdout);
	scanf("%f", &a);

	printf("Digite o Valor de B: ");
	fflush(stdout);
	scanf("%f", &b);

	printf("Digite o Valor de C: ");
	fflush(stdout);
	scanf("%f", &c);

	if(a == 0){
		printf("\nNao e uma equacao do Segundo Grau!!!");
		return 0;
	}

	delta = (b * b) - 4 * a * c;

	if(delta < 0){
		printf("\nNao Existe Raiz!");
		return 0;
	}

	if(delta == 0){
		x1 = - b / 2 * a;
		printf("\nRaiz Unica %.f", x1);
		return 0;
	}

	//Se nenhuma condição acima for verdadeira; executa os comandos abaixo:

	x1 = (- b + sqrt(delta)) / 2 * a;
	x2 = (- b - sqrt(delta)) / 2 * a;

		printf("\nX1 = %.f", x1);
		printf("\nX2 = %.f", x2);

	return 0;
}
