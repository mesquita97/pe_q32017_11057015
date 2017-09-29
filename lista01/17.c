#include <stdio.h>

	int main(){
		int x, y, quadrado;
		printf("Determine o intervalo :\n");
		scanf("%d", &x);
		scanf("%d", &y);

		int soma = 0;
		int soma_quadrados =0;
		int quadrados_soma = 0;

		while(x<=y){
			quadrado = x*x;
			soma_quadrados = soma_quadrados + quadrado;
			soma = soma + x;
			x++;
		}
		
		quadrados_soma = soma*soma; 

		printf("%d \t %d\n", soma_quadrados, quadrados_soma);

	}