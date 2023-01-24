#include <stdio.h>

int main(){

	float custoFabrica;
	float custoConsumidor;

	printf("Digite o Custo de Fabrica do Veiculo: R$ ");
	fflush(stdout);
	scanf("%f", &custoFabrica);

	if(custoFabrica > 0 && custoFabrica <= 12000){
		custoConsumidor = custoFabrica + (custoFabrica * 0.05);
	}else{
		if(custoFabrica > 12000 && custoFabrica <= 25000){
			custoConsumidor = custoFabrica + (custoFabrica * 0.10) + (custoFabrica * 0.15);
		}else{
			if(custoFabrica > 25000){
				custoConsumidor = custoFabrica + (custoFabrica * 0.15) + (custoFabrica * 0.20);
			}else{
				printf("\nDados Invalidos!!!");
			}
		}
	}

	if(custoConsumidor > 0){
		printf("\nO Custo para o Consumidor e: R$ %.2f", custoConsumidor);
	}

	return 0;
}
