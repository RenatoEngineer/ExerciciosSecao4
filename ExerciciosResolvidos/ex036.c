#include <stdio.h>

int main(){

	float valorVenda;
	float comissao;

	printf("Digite o Valor da Venda: R$ ");
	fflush(stdout);
	scanf("%f", &valorVenda);

	if(valorVenda >= 0 && valorVenda < 20000){
		comissao = 400 + (valorVenda * 0.14);
	}else if(valorVenda >= 20000 && valorVenda < 40000){
		comissao = 500 + (valorVenda * 0.14);
	}else if(valorVenda >= 40000 && valorVenda < 60000){
		comissao = 550 + (valorVenda * 0.14);
	}else if(valorVenda >= 60000 && valorVenda < 80000){
		comissao = 600 + (valorVenda * 0.14);
	}else if(valorVenda >= 80000 && valorVenda < 100000){
		comissao = 650 + (valorVenda * 0.14);
	}else if(valorVenda >= 100000){
		comissao = 700 + (valorVenda * 0.16);
	}else{
		printf("\nValor da Venda Invalida!!!\nFavor digite um valor acima de Zero!!!");
	}

	if(comissao > 0){
		printf("\nA Comissao e de: R$ %.2f", comissao);
	}

	return 0;
}
