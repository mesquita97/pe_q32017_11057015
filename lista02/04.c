#include <stdio.h>
#include <math.h>

  float soma(float b, float c)
  {
    float s1 = b+c;
    return s1;
  }
  
  float subtracao(float b, float c)
  {
    float s2 = b-c;
    return s2;
  }
  
  float multiplicacao(float b, float c)
  {
    float m = b*c;
    return m;
  }
  
  float divisao(float b, float c)
  {
    float d = b/c;
    return d;
  }
  
  float potenciacao(float b, float c)
  {
   float p = pow(b,c);
   return p;
  }
  
  float calcular(float o, float b, float c)
  {
    if (o==1)
    {
      return soma(b,c);
    }
    else if (o==2)
    {
      return subtracao(b,c);
    }
    else if (o==3)
    {
      return multiplicacao(b,c);
    }
    else if(o==4)
    {
      return divisao(b,c);
    }
    else if(o==5)
    {
      return potenciacao(b,c);
    }
    
  }

float main(){
      
      float o, b, c; 
      scanf("%f\n""%f\n""%f", &o, &b, &c);
      printf("%.2f\n", calcular(o,b,c));
      
}