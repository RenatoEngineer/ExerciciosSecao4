#include <stdio.h>
#include <math.h>

int main(){

	int x;
	int y;
	int z;
	float resultado;
	char medida;

	printf(".:: CALCULADORA DE MEDIDAS ::.\n\n");

	printf("Digite o Valor de X: ");
	fflush(stdout);
	scanf("%d", &x);

	printf("Digite o Valor de Y: ");
	fflush(stdout);
	scanf("%d", &y);

	printf("Digite o Valor de Z: ");
	fflush(stdout);
	scanf("%d", &z);

	printf("\n\nEscolha uma Das Seguintes Medidas:\n(a) Geometrica\n(b) Ponderada\n(c) Harmonica\n(d) Aritmetica\n\n");
	fflush(stdout);
	setbuf(stdin, NULL); //Limpa o Buffer do teclado.
	scanf("%c", &medida);

	switch(medida){

	case 'a':
		resultado = cbrt(x * y * z);
		printf("\nGeometrica: %.2f", resultado);
		break;

	case 'b':
		resultado = (x + 2 * y + 3 * z) / 6;
		printf("\nPonderada: %.2f", resultado);
		break;

	case 'c':
		resultado = 1 / ((1 / x) + (1 / y) + (1 / z));
		printf("\nHarmonica: %.2f", resultado);
		break;

	case 'd':
		resultado = (x + y + z) / 3;
		printf("\nAritmetica: %.2f", resultado);
		break;

	default:
		printf("\nOpcao Invalida!!!\nFavor escolha uma opcao entre: a - b - c - d");
	}

	return 0;
}
