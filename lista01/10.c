#include <stdio.h>

	int main(){

	double temperatura, temperaturac, temperaturak;
	int opcao;

	/* Guarda os valores inseridos da temperatura e opção*/
	printf("Indique a temperatura :\n");
	scanf("%lf", &temperatura);
	printf("Indique a opção para conversão: \n");
	scanf("%d", &opcao);

	/* Indica qual conversão deve ser feita de acordo com a opção escolhida*/
	if(opcao == 1){
		temperaturak = temperatura + 273.15;
		printf("a temperatura em Kelvin é %lf:\n", temperaturak);
	} else if(opcao == 2){
		temperaturac = temperatura - 273.15;
		printf("A temperatura em Celsius é : %lf\n", temperaturac);
	} else {
		printf("Só existem as opções 1 e 2 ");
	}
}
