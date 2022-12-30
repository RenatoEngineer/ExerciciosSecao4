#include <stdio.h>

int main(){

	int idade;

	printf("Digite a Idade do Nadador: ");
	fflush(stdout);
	scanf("%d", &idade);

	if(idade >= 5 && idade <= 7){
		printf("\nNadador Categoria Infantil A");
	}else if(idade >= 8 && idade <= 10){
		printf("\nNadador Categoria Infantil B");
	}else if(idade >= 11 && idade <= 13){
		printf("\nNadador Categoria Juvenil A");
	}else if(idade >= 14 && idade <= 17){
		printf("\nNadador Categoria Juvenil B");
	}else if(idade >= 18){
		printf("\nNadador Senior");
	}else{
		printf("\nIdade Invalida!!!");
	}


	return 0;
}
