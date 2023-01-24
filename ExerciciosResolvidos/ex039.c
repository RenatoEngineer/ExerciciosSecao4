#include <stdio.h>

int main(){

	float salarioAtual;
	float salarioReajuste;
	float anosEmpresa;

	printf(".:: REAJUSTE DE SALARIO ::.\n");

	printf("\nDigite o Salario Atual: R$ ");
	fflush(stdout);
	scanf("%f", &salarioAtual);

	printf("\nDigite o Tempo de Empresa em Anos: ");
	fflush(stdout);
	scanf("%f", &anosEmpresa);

	if(salarioAtual > 0 && salarioAtual <= 500 && anosEmpresa < 1){
		salarioReajuste = salarioAtual + (salarioAtual * 0.25);
	}else{
		if(salarioAtual > 500 && salarioAtual <= 1000 && anosEmpresa >= 1 && anosEmpresa <= 3){
				salarioReajuste = salarioAtual + (salarioAtual * 0.20) + 100;
		}else{
			if(salarioAtual > 500 && salarioAtual <= 1000){
				salarioReajuste = salarioAtual + (salarioAtual * 0.20);
		}else{
			if(salarioAtual > 1000 && salarioAtual <= 1500 && anosEmpresa >= 4 && anosEmpresa <= 6){
				salarioReajuste = salarioAtual + (salarioAtual * 0.15) + 200;
			}else{
				if(salarioAtual > 1000 && salarioAtual <= 1500){
					salarioReajuste = salarioAtual + (salarioAtual * 0.15);
				}else{
					if(salarioAtual > 1500 && salarioAtual <= 2000 && anosEmpresa >= 7 && anosEmpresa <= 10){
						salarioReajuste = salarioAtual + (salarioAtual * 0.10) + 300;
					}else{
						if(salarioAtual > 1500 && salarioAtual <= 2000){
							salarioReajuste = salarioAtual + (salarioAtual * 0.10);
						}else{
							if(salarioAtual > 2000 && anosEmpresa >= 10){
								salarioReajuste = salarioAtual + 500;
							}else{
								if(salarioAtual > 2000 && anosEmpresa < 10){
									salarioReajuste = salarioAtual;
								}else{
									printf("\nDados Invalidos!!!");
								}
							}
						}
					}
				}
			}
		}
	}
}

		if(salarioReajuste > 0){
			printf("\nO Salario com Reajuste e: R$ %.2f", salarioReajuste);
		}

	return 0;
}
