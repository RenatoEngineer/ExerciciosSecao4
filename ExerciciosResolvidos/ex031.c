#include <stdio.h>

int main(){

	float altura;
	float peso;

	printf("Digite a altura da pessoa: ");
	fflush(stdout);
	scanf("%f", &altura);

	printf("\nDigite o peso da pessoa: ");
	fflush(stdout);
	scanf("%f", &peso);

	if(altura > 0 && altura < 1.20 && peso > 0 && peso < 60){
		printf("\nClassificacao A");
	}else if(altura > 0 && altura < 1.20 && peso >= 60 && peso <= 90){
		printf("\nClassificacao D");
	}else if(altura > 0 && altura < 1.20 && peso > 90){
		printf("\nClassificacao G");
	}else if(altura >= 1.20 && altura < 1.70 && peso > 0 && peso < 60){
		printf("\nClassificacao B");
	}else if(altura >= 1.20 && altura < 1.70 && peso >= 60 && peso <= 90){
		printf("\nClassificacao E");
	}else if(altura >= 1.20 && altura < 1.70 && peso > 90){
		printf("\nClassificacao H");
	}else if(altura > 1.70 && peso > 0 && peso < 60){
		printf("\nClassificacao C");
	}else if(altura > 1.70 && peso >= 60 && peso <= 90){
		printf("\nClassificacao F");
	}else if(altura > 1.70 && peso > 90){
		printf("\nClassificacao I");
	}else{
		printf("\nAltura ou Peso Invalidos!!!");
	}

	return 0;
}
