#include <stdio.h>

   float celsius_fahrenheit(float d)
   {
     float b,c;
    {
      d = (d*1.8) + 32;
      return d;
   }
   }
   
   float fahrenheit_celsius(float d)
   {
     float b,c;
      { 
      d = (d-32)/1.8;
      return d;
   }
   }
   float celsius_kelvin(float d)
   {
     float b,c;
    {
       d = d+273;
       return d;
   }
   }
   float kelvin_celsius(float d)
   {
     float b,c;
     {
     d = d-273;
     return d;
   }
   }
   int binario(int d){
      int pot = 1;
      int bin = 0;
			while(d > 0)
			{
			bin = bin+d%2*pot;
			d = d/2;
			pot = pot*10; 
		}
      return bin;
   }
   
   float conversao_temperatura(float a, float b, float c, float d)
   {
       if(b==1) // celsius
       {
          if(c==2)
         {
          return celsius_fahrenheit(d); 
         }
          if(c==3)
         {
           return celsius_kelvin(d);
         }
     }
      else if(b==2) // fahrenheit 
      {
          if(c==1) 
         {
          return fahrenheit_celsius(d);
         }
          if(c==3)
         {
           fahrenheit_celsius(d);
           return celsius_kelvin(d);
         }
      }
      else if (b==3) // kelvin
      {
          if(c==1)
          {
            return kelvin_celsius(d);
          }
          if(c==2)
          {
            kelvin_celsius(d);
            return celsius_fahrenheit(d);
          }
       }
   }
   
   int conversao_base(float a,float b,float c,float d)
   {
       return binario(d);
   }
   
int main()
{
    float a,b,c,d;
    scanf("%f %f %f %f", &a, &b, &c, &d);
    if(a==1)
    {
    printf("%.2f", conversao_temperatura(a,b,c,d));
    } else if(a==2)
    {
      printf("%d", conversao_base(a,b,c,d));
    }
}