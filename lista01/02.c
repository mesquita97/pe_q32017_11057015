#include <stdio.h>

	int main() {
	int x, y, soma;

    /* lê e guarda as variáveis x e y digitadas */
    printf("Insira um numero: \n");
    scanf("%d", &x);
    printf("Insira outro numero: \n");
    scanf("%d", &y);

    soma=x+y;
    
    /* imprime a soma das duas variáveis */
    printf("A soma dos numeros e %d\n", soma);

}
