#include <stdio.h>

int main(){

	int dia;
	int mes;
	int ano;

	printf("Digite o dia: ");
	fflush(stdout);
	scanf("%d", &dia);

	printf("Digite o mes: ");
	fflush(stdout);
	scanf("%d", &mes);

	printf("Digite o ano: ");
	fflush(stdout);
	scanf("%d", &ano);

	if((ano % 4) == 0 && (ano % 100) != 0){
		if(dia > 31 || mes > 12){
			printf("\nData Invalida");
		}else{
			if((mes == 4 || mes == 6 || mes == 9 || mes == 11) && (dia < 0 || dia > 30)){
				printf("\nData Invalida");
			}else{
				if(mes == 2 && dia > 29){
					printf("\nData Invalida");
				}else{
					printf("\nData Valida");
				}
			}
		}
	}else{
		if(dia > 31 || mes > 12){
			printf("\nData Invalida");
		}else{
			if((mes == 4 || mes == 6 || mes == 9 || mes == 11) && (dia < 0 || dia > 30)){
				printf("\nData Invalida");
			}else{
				if(mes == 2 && dia > 28){
					printf("\nData Invalida");
				}else{
					printf("\nData Valida");
				}
			}
		}
	}

	return 0;
}
