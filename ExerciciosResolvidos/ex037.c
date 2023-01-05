#include <stdio.h>

int main(){

	int horaChegada;
	int minutoChegada;
	int horaSaida;
	int minutoSaida;
	int horaFinal;
	int minutoFinal;
	int totalMinutos;
	float preco;

	printf("Digite a Hora da Chegada: ");
	fflush(stdout);
	scanf("%d %d", &horaChegada, &minutoChegada);

	printf("Digite a Hora da Saida: ");
	fflush(stdout);
	scanf("%d %d", &horaSaida, &minutoSaida);

	//Calculo do Tempo de Permanência

	if(horaChegada > horaSaida){
		horaFinal = (horaSaida + 24) - horaChegada;
	}else{
		horaFinal = horaSaida - horaChegada;
	}

	if(minutoChegada > minutoSaida){
		minutoFinal = (minutoSaida + 60) - minutoChegada;
	}else{
		minutoFinal = minutoSaida - minutoChegada;
	}

	printf("\nO Tempo de Permanencia e de: %d:%d hs", horaFinal, minutoFinal);

	//Calculo do Valor a ser pago

	totalMinutos = (horaFinal * 60) + minutoFinal;

	if(totalMinutos > 1 && totalMinutos <= 60){
		preco = 1;
		printf("\nO Valor a ser pago e: R$ %.2f", preco);
	}else if(totalMinutos > 60 && totalMinutos <= 120){
		preco = 2;
		printf("\nO Valor a ser pago e: R$ %.2f", preco);
	}else if(totalMinutos > 120 && totalMinutos <= 180){
		preco = 4.2;
		printf("\nO Valor a ser pago e: R$ %.2f", preco);
	}else if(totalMinutos > 180 && totalMinutos <= 240){
		preco = 5.6;
		printf("\nO Valor a ser pago e: R$ %.2f", preco);
	}else if(totalMinutos > 240){
		preco = horaFinal * 2;
		printf("\nO Valor a ser pago e: R$ %.2f", preco);
	}else{
		printf("\n\nTempo de permanencia Minima!\nNao e Necessario Pagar!");
	}

	return 0;
}
