#include <stdio.h>

	int main(){
		int numero, soma, i;
		/* Guarda o valor das variáveis*/
		printf("Digite o valor do número :\n");
		scanf("%d", &numero);
		soma = 0;

		/* Estabelece a soma de Gauss */
		for(i = 1; i<=numero; i++){
			soma = soma + i;

		}
		printf("%d\n", soma);

	}