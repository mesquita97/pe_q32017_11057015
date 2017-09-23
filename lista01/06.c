#include <stdio.h>

	int main() {
	int x, y, fat;

    /* guarda a variável x digitada*/
    printf("Insira um numero: \n");
    scanf("%d", &x);
    fat = x;

    /* define o fatorial da variavel x na variável fat*/
    for(int i= x-1; i >= 1; i--){
        fat = fat*i;

    }

    /* imprime o fatorial de x */
        printf("o fatorial de %d é %d\n", x, fat);

}