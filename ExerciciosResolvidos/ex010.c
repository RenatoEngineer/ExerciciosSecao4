#include <stdio.h>

int main(){

	float altura;
	float resultado;
	char sexo;

	printf("Digite o seu Sexo [F] ou [M]: ");
	fflush(stdout);
	scanf("%c", &sexo);

	printf("Digite sua Altura: ");
	fflush(stdout);
	scanf("%f", &altura);

	if(sexo == 'F'){
		resultado = (62.1 * altura) - 44.7;
		printf("\nSeu Peso ideal deve ser: %.2f", resultado);
	}else if(sexo == 'M'){
		resultado = (72.7 * altura) - 58;
		printf("\nSeu Peso ideal deve ser: %.2f", resultado);
	}else{
		printf("\nSexo Invalido!!!");
	}

	return 0;
}
