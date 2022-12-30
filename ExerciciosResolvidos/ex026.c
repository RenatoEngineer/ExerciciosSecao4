#include <stdio.h>

int main(){

	float distancia;
	float litros;
	float consumo;

	printf(".:: CALCULADORA CONSUMO  DE COMBUSTIVEL ::.\n\n");

	printf("Digite a Distancia em km: ");
	fflush(stdout);
	scanf("%f", &distancia);

	printf("Digite a quantidade de Litros Consumida: ");
	fflush(stdout);
	scanf("%f", &litros);

	consumo = distancia / litros;

	if(consumo < 8){
		printf("\nVenda o Carro!!!\nMedia de %.f Km/l", consumo);
	}else if(consumo >= 8 && consumo < 14){
		printf("\nCarro Economico!!!\nMedia de %.f Km/l", consumo);
	}else{
		printf("\nCarro Muito Economico!!!\nMedia de %.f Km/l", consumo);
	}

	return 0;
}
