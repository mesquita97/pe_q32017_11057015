#include <stdio.h>

	int main() {
	int x, y, div;

    /* lê e guarda as variáveis x e y digitadas */
    printf("Insira um numero: \n");
    scanf("%d", &x);
    printf("Insira outro numero: \n");
    scanf("%d", &y);
    
    div =x/y;
    
    /* imprime o resultado da divisão das duas variáveis */
    printf("A divisão entre os números e %d\n", div);

}