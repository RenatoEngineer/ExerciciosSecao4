#include <stdio.h>

int main(){

	float peso;
	float altura;
	float imc;

	printf(".:: INDICE DE MASSA CORPORAL - IMC ::.\n\n");

	printf("Digite seu peso (em Kg): ");
	fflush(stdout);
	scanf("%f", &peso);

	printf("Digite sua altura (em m): ");
	fflush(stdout);
	scanf("%f", &altura);

	imc = peso / (altura * altura);

	if(peso > 0 && altura > 0){
		if(imc <= 18.5){
				printf("\nVoce esta abaixo do Peso!!!");
			}else{
				if(imc >= 18.6 && imc <= 24.9){
					printf("\nVoce esta Saudavel!!!");
				}else{
					if(imc >= 25 && imc <= 29.9){
						printf("\nVoce esta com Peso em Excesso!!!");
					}else{
						if(imc >= 30 && imc <= 34.9){
							printf("\nVoce esta com Obesidade Grau I !!!");
						}else{
							if(imc >= 35 && imc <= 39.9){
								printf("\nVoce esta com Obesidade Grau II (Severa) !!!");
							}else{
								printf("\nVoce esta com Obesidade Grau III (Morbida) !!!");

							}
						}
					}
				}
			}
	}else{
		printf("\nDados Incorretos!!!");
	}



	return 0;
}
