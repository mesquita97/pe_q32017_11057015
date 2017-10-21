#include <stdio.h>

int par_impar(int numero)
{
	if(numero%2==0) return 0;
	else return 1;

}

int main(){
	int numero;
	scanf("%d", &numero);

	printf("%d\n", par_impar(numero));
}