#include <stdio.h>

void ler_matriz(int mat[3][3])
{
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			scanf("%d", &mat[i][j]);
		}
	}
}

void imprimir_matriz(int mat[3][3])
{
	printf("\n");
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			printf("%d ", mat[j][i]);
		}
		printf("\n");
	}
}

int main()
{
	int mat[3][3];
	ler_matriz(mat);
	imprimir_matriz(mat);
}