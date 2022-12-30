#include <stdio.h>

int main(){

	float precoAntigo;
	float precoNovo;

	printf("Digite o Preco Antigo: ");
	fflush(stdout);
	scanf("%f", &precoAntigo);

	if(precoAntigo > 0 && precoAntigo < 50){
		precoNovo = precoAntigo + (precoAntigo * 0.05);

	}else if(precoAntigo >= 50 && precoAntigo < 100){
		precoNovo = precoAntigo + (precoAntigo * 0.10);

	}else if(precoAntigo >= 100){
		precoNovo = precoAntigo + (precoAntigo * 0.15);
	}else{
		printf("\nPreco Invalido!!!\nFavor Digite um preco acima de Zero!!!");
	}

	printf("\nPreco Novo e: R$ %.2f\n", precoNovo);

	if(precoNovo < 80){
		printf("\nProduto Barato!!!");
	}else if(precoNovo >= 80 && precoNovo <= 120){
		printf("\nProduto Normal!!!");
	}else if(precoNovo > 120 && precoNovo <= 200){
		printf("\nProduto Caro!!!");
	}else{
		printf("\nProduto Muito Caro!!!");
	}

	return 0;
}
