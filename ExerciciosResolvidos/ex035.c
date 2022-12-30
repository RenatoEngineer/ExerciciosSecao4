#include <stdio.h>

int main(){

	int dia;
	int mes;
	int ano;

	printf("Entre com uma data dd/mm/aaaa: ");
	fflush(stdout);
	scanf("%d/%d/%d", &dia, &mes, &ano);

	if(ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)){
		if(dia > 31 && mes > 12)
			printf("Data Invalida\n");
		else if((mes == 4 || mes == 6 || mes == 9 || mes == 11) && (dia < 0 || dia > 30))
			printf("Data Invalida\n");
		else if(mes == 2 && dia > 29)
				printf("Data Invalida\n");
		else
			printf("Data Valida\n");
	}else{
		if(dia > 31 && mes > 12)
			printf("Data Invalida\n");
		else if((mes == 4 || mes == 6 || mes == 9 || mes == 11) && (dia < 0 || dia > 30))
			printf("Data Invalida\n");
		else if(mes == 2 && dia > 28)
				printf("Data Invalida\n");
		else
			printf("Data Valida\n");
	}


	return 0;
}
