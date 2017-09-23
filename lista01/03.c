#include <stdio.h>

	int main() {
	int x, y, sub;

    /* lê e guarda as variáveis x e y digitadas */
    printf("Insira um numero: \n");
    scanf("%d", &x);
    printf("Insira outro numero: \n");
    scanf("%d", &y);
    
    sub =x-y;
    
    /* imprime a subtração das duas variáveis */
    printf("A subtracao dos numeros e %d\n", sub);

}