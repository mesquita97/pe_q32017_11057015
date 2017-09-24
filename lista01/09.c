#include <stdio.h>

	int main(){

	double temperatura, temperaturac, temperaturaf;
	int opcao;

	/* Guarda os valores inseridos da temperatura e opção*/
	printf("Indique a temperatura :\n");
	scanf("%lf", &temperatura);
	printf("Indique a opção para conversão: \n");
	scanf("%d", &opcao);

	/* Indica qual conversão deve ser feita de acordo com a opção escolhida*/
	if(opcao == 1){
		temperaturaf = ((9*temperatura/5)+32);
		printf("a temperatura em Fahrenheit é %lf:\n", temperaturaf);
	} else if(opcao == 2){
		temperaturac = ((5*(temperatura - 32))/9);
		printf("A temperatura em Celsius é : %lf\n", temperaturac);
	} else {
		printf("Só existem as opções 1 e 2 ");
	}
}

