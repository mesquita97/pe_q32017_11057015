#include <stdio.h>
#include <time.h>
#include <limits.h>
#include <stdlib.h>

#define BIGNUM 100

typedef unsigned long int ulint;

ulint f1(ulint x)
{
	srand(time(NULL));
	ulint a = rand() % 100;
	ulint b = rand() % 100;

	if(a > b) {
		return 1;
	}
}

ulint f2(ulint x)
{
	srand(time(NULL));
	ulint a = rand() % 100;
	ulint b = rand() % 100;
	ulint somaA = 0;
	ulint somaB = 0;

	while(a!=0) {
	 	somaA+= a&1;
		a>>1;
	}

	while(b!=0)  {
		somaB += b&1;
		b>>1;
	}
	if(somaA>somaB){
		return 1;
	}
}

int main(void)
{
	clock_t tempo_init, tempo_fim;
	double tempo_gasto;
	int soma = 0;

	tempo_init=clock();
	for(int i=0;i<BIGNUM;i++)
	{
		f1(i);
		
	}
	tempo_fim=clock();
	tempo_gasto=(double)(tempo_fim - tempo_init)/CLOCKS_PER_SEC;
	printf("Tempo gasto na versão normal: %lf\n", tempo_gasto);

	tempo_init=clock();
	for(int i=0;i<BIGNUM;i++)
	{
		f2(i);
			
	}
	tempo_fim=clock();
	tempo_gasto = (double)(tempo_fim - tempo_init)/CLOCKS_PER_SEC;
	printf("Tempo gasto versao bitwise: %lf\n", tempo_gasto);

	return 0;
}