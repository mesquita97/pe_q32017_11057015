#include <stdio.h>
#include <math.h>

typedef struct pontos  {
  
    float x, y, z;
  
} pontos;


float calcula_distancia(pontos *p1, pontos *p2)  {
    float d = sqrt(pow(p2->x-p1->x, 2) + pow(p2->y-p1->y, 2) + pow(p2->z-p1->z, 2));
    return d;
}


int main()  {
    pontos p1, p2;
  
    scanf("%f, %f, %f", &(p1.x), &(p1.y), &(p1.z)) ;
    scanf("%f, %f, %f", &(p2.x), &(p2.y), &(p2.z)) ;
  
  
    printf("%.2f\n", calcula_distancia(&p1,&p2));

}