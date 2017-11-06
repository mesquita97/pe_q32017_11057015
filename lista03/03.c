#include <stdio.h>

void ler_vetores(int v1[], int v2[])
{	
	for (int i=0;i<5;i++) scanf("%d", &v1[i]);
	
	for(int j=0; j<5;j++) scanf("%d", &v2[j]);
}

void soma_vetores(int v1[], int v2[])
{		
	for (int i=0; i<5; i++)
	{
		int soma = 0;
		soma += v1[i] + v2[i];
		printf("%d ", soma);
	}
}

int main()
{
	int v1 [5], v2[5];
	ler_vetores(v1, v2);
	soma_vetores(v1, v2);
	return 0;
}