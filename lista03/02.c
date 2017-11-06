#include <stdio.h>
#include <string.h>

int tamanho(char entrada[])
{
	int cont =0;
	while(entrada[cont] != '\0') cont++;
	return cont-1;
}

void inverter(char entrada [])
{	
	for(int i = tamanho(entrada); i >= 0; i--)
	{
	 	printf("%c", entrada[i]);	
	}
	printf("\n");
}
	


int main()
{
	char entrada[255]; 
	fgets(entrada, 255, stdin);
	inverter(entrada);
	return 0;
}
