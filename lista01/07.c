#include <stdio.h>

    int main() {
    int x, y, resultado;

    /* guarda o valor das variáveis x e y digitadas*/
    printf("Insira um numero: \n");
    scanf("%d", &x);
    printf("Insira outro número: \n");
    scanf("%d", &y);

    resultado =x;

    /* define o valor de  x elevado a y na variável z */
    for(int i = 1; i < y; i++){
        resultado = resultado*x;
    }

    /* imprime o exponencial */
        printf("x elevado a y é: %d\n", resultado);

}