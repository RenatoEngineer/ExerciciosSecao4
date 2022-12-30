#include <stdio.h>

int main(){

	int a, b, c;

	printf(".:: Digite os tres lados do Triangulo ::.\n	    Lado A - B - C\n");

	printf("\nDigite o Lado A: ");
	fflush(stdout);
	scanf("%d", &a);

	printf("Digite o Lado B: ");
	fflush(stdout);
	scanf("%d", &b);

	printf("Digite o Lado C: ");
	fflush(stdout);
	scanf("%d", &c);

	if(a + b > c && a + c > b && b + c > a){
		printf("\nOs Tres Lados formam um Triangulo!!!");
		if(a == b && a == c)
			printf("\nTriangulo Equilatero");
		else if(a == b || a == c || b == c)
			printf("\nTriangulo Isosceles");
		else
			printf("\nTriangulo Escaleno");

	}else{
		printf("\nOs Tres Lados NAO formam um Triangulo");
	}

	return 0;
}
