#include <stdio.h>

	int main(){		

		/* Guarda o valor do número inserido*/
		int n;
		printf("Digite um número n\n");
		scanf("%d", &n);

		/* Caso o número inserido seja menor que 100 */
		if(n < 100){
		for(int i = n; i <= 100; i++){
			if (i%2 == 0){
				printf("%d\n", i);
			}
		  }
		}

		/* Caso o número inserido seja maior que 100*/
		if(n > 100){
			for(int j = 100; j<=n; j++)
				if(j%2 == 0){
					printf("%d\n", j);
				}
		}

	}