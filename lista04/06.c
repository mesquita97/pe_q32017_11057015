#include <stdio.h>
#include <time.h>
#include <limits.h>

#define BIGNUM ULONG_MAX

typedef unsigned long int ulint;

ulint f1(ulint x)
{
	srand(time(NULL));
	int a = rand() % 1000000;
	int b = rand() % 1000000;

	if(a > b) {
		return 1;
	}
}

ulint f2(ulint x)
{
	srand(time(NULL));
	int a = rand() % 1000000;
	int b = rand() % 1000000;

	if()
}

int main(void)
{
	clock_t tempo_init, tempo_fim;
	double tempo_gasto;
	int soma = 0;

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