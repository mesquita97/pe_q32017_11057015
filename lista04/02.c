#include <stdio.h>
#include <math.h>

typedef struct tempo  {
  
  int minutos, segundos, decimos;
  
} tempo;

void diferenca(tempo *t1,tempo *t2)  {
  if(t1->decimos<t2->decimos)	{
  		t1->segundos--;
  		t1->decimos += 100;
  }
  if(t1->segundos<t2->segundos) {
  		t1->minutos--;
  		t1->segundos += 60;
  }
  int m = (t1->minutos-t2->minutos);
  int s = (t1->segundos-t2->segundos);
  int d = (t1->decimos-t2->decimos);
  printf("%dm %ds %d\n", m, s, d);
  
  
}

int main() {
  tempo t1, t2;
  
  scanf("%dm %ds %d", &(t1.minutos), &(t1.segundos), &(t1.decimos));
  scanf("%dm %ds %d", &(t2.minutos), &(t2.segundos), &(t2.decimos));
  diferenca(&t1, &t2);

}