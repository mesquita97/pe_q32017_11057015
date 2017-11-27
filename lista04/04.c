#include <stdio.h>
#include <time.h>
#include <limits.h>

#define BIGNUM ULONG_MAX

typedef unsigned long int ulint;

ulint f1(ulint x)
{
	ulint ultimo = 1;
	int mult =2;
	if(x == ultimo) {
		return 1;
		ultimo *= mult;
	}
}

ulint f2(ulint x)
{
	ulint ultimo = 1;
	if(x == ultimo) {
		return 1;
		ultimo<<1;	
	}
}

int main(void)
{
	int soma = 0;
	clock_t tempo_init, tempo_fim;
	double tempo_gasto;

	tempo_init=clock();
	for(int i=0;i<BIGNUM;i++)
	{
		soma += f1(i);
		
	}
	tempo_fim=clock();
	tempo_gasto=(double)(tempo_fim - tempo_init)/CLOCKS_PER_SEC;
	printf("Tempo gasto na versão normal: %lf\n", tempo_gasto);

	tempo_init=clock();
	for(int i=0;i<BIGNUM;i++)
	{
		soma += f2(i);
		
	}
	tempo_fim=clock();
	tempo_gasto = (double)(tempo_fim - tempo_init)/CLOCKS_PER_SEC;
	printf("Tempo gasto versao bitwise: %lf\n", tempo_gasto);

	return 0;
}