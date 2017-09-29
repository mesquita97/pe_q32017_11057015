#include <stdio.h>

	int main(){

		int numero, opcao;
		int dec = 0;
		int pot = 1;

		/* Guarda os valores do número e a opção que devem ser transformados */
		printf("Digite o número \n");
		scanf("%d", &numero);
		printf("Digite a opção: \n");
		scanf("%d", &opcao);

	
		/* Realiza a transformação de decimal para binário */
		if(opcao==1){
			printf("O número binário é \n");
			while(numero > 0){
			numero = numero/2;
			if(numero%2 == 0){
				printf("%d", 0);
			} else if(numero%2 == 1 ){
				printf("%d", 1);
			}
			}
			printf("\n");
		}

		/* Realiza a transformação de binário para decimal*/
		if(opcao==2){
			while( numero > 0){
				dec = dec + numero%10*pot;
				numero = numero/10;
				pot = pot*2;
			}
			printf("O número decimal é %d\n", dec);			
		}
	}