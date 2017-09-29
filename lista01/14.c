#include <stdio.h>

	int main(){
		double numeros[10], soma, media;
		printf("Digite 10 números inteiros\n");
		soma = 0;

		for (int i = 0; i < 10 ; i++){
		scanf("%lf", &numeros[i]);
		soma = soma+numeros[i];
		media = soma/10;
		}

		printf("%lf\n", soma);
		printf("%lf\n", media);
	}