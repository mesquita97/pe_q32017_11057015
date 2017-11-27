#include <stdio.h>
#include <time.h>
#include <limits.h>

#define BIGNUM ULONG_MAX

typedef unsigned long int ulint;

ulint f1(ulint x)
{
	int soma =0;
	int resto;

	while(x) {
		resto = x%2;
		return soma += resto;
	 	x /= 2;
	}
}

ulint f2(ulint x)
{
	int soma =0;
	while(x) {
		return soma += x&1;
		x>>1;
	}
}

int main(void)
{

	int soma =0;
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