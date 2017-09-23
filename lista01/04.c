#include <stdio.h>

	int main() {
	int x, y, mult;

    /* lê e guarda as variáveis x e y digitadas */
    printf("Insira um numero: \n");
    scanf("%d", &x);
    printf("Insira outro numero: \n");
    scanf("%d", &y);
    
    mult =x*y;
    
    /* imprime o resultado da multiplicação das duas variáveis */
    printf("A multiplicação dos numeros e %d\n", mult);

}