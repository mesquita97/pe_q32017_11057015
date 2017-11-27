#include <stdio.h>
#include <stdlib.h>

typedef struct ficha {

	char nome[100];
	int ra;
	float p1, p2, p3, media ;

} ficha;


int main()  {
	FILE* fp;
	fp = fopen("lista_alunos.txt", "r");
	ficha* alunos;

	
	alunos = malloc(sizeof(ficha)*50);

	for(int i=0; i<50; i++)	{
		fscanf (fp,"%s %d %f %f %f", alunos[i].nome, &alunos[i].ra, &alunos[i].p1, &alunos[i].p2, &alunos[i].p3);
	}

	fclose(fp);

	fp = fopen("media_alunos.txt", "w");


	for(int i=0; i<50; i++)	{
		alunos[i].media = (alunos[i].p1 + alunos[i].p2 + alunos[i].p3)/3;
		fprintf(fp,"%s %d %.1f %.1f %.1f %.2f\n", alunos[i].nome, alunos[i].ra, alunos[i].p1, alunos[i].p2, alunos[i].p3, alunos[i].media);
	}

	free(alunos);
	fclose(fp);

}
