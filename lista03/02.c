#include  <stdio.h>
#include <string.h>

int conta_vogal(char entrada [])
{
	int cont = 0;
	for(int i=0; i<strlen(entrada); i++)
	{
		if ((entrada[i] == 'a')|| (entrada[i] == 'e')||(entrada[i] =='i')||(entrada[i] == 'o')||(entrada[i] == 'u')) cont++;
	}
	return cont;
}
	

int main()
{	
	int cont;
	char entrada[255]; 
	fgets(entrada, 255, stdin);

	printf("%d\n", conta_vogal(entrada));
	return 0;
}