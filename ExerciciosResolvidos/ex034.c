#include <stdio.h>

int main(){

	float nota;
	int faltas;

	printf("Digite a nota do Aluno: ");
	fflush(stdout);
	scanf("%f", &nota);

	printf("\nDigite as Faltas do Aluno: ");
	fflush(stdout);
	scanf("%d", &faltas);

	if(nota >= 9 && nota <= 10 && faltas <= 20){
		printf("\nConceito A");
	}else if(nota >= 9 && nota <= 10 && faltas > 20){
		printf("\nConceito B");
	}else if(nota >= 7.5 && nota <= 8.9 && faltas <= 20){
		printf("\nConceito B");
	}else if(nota >= 7.5 && nota <= 8.9 && faltas > 20){
		printf("\nConceito C");
	}else if(nota >= 5 && nota <= 7.4 && faltas <= 20){
		printf("\nConceito C");
	}else if(nota >= 5 && nota <= 7.4 && faltas > 20){
		printf("\nConceito D");
	}else if(nota >= 4 && nota <= 4.9 && faltas <= 20){
		printf("\nConceito D");
	}else if(nota >= 4 && nota <= 4.9 && faltas > 20){
		printf("\nConceito E");
	}else if(nota >= 0 && nota <= 3.9 && faltas <= 20){
		printf("\nConceito E");
	}else if(nota >= 0 && nota <= 3.9 && faltas > 20){
		printf("\nConceito E");
	}else{
		printf("\nNota ou Faltas Invalidas!!!");
	}

	return 0;
}
