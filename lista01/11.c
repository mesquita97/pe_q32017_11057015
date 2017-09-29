#include <stdio.h>

	int main(){

		int numero, opcao;
		int dec = 0;
		int bin = 0;
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
			bin = bin+numero%2*pot;
			numero = numero/2;
			pot = pot*10; 
			}
		    printf("%d\n", bin);
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