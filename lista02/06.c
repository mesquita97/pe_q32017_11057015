#include <stdio.h>
#include <math.h>

double delta(double a, double b, double c)
{
    double d;
    d = pow(b,2);
    d -= 4*a*c;
    return d;
}

double raizes(double a,double b, double c){
     double d = delta(a,b,c);
     double r1, r2;

     if (d<0){
       r1 = -b/2*a;
       r1 -= (sqrt(d)/2);
       
       r2 = -b/2;
       r2 += (sqrt(d)/2)+i;
     }
     
    else
    {
      r1 = -b-sqrt(d);
      r1 /= 2*a;
      
      r2 = -b+sqrt(d);
      r2 /= 2*a;
    }
    printf("%.2lf %.2lf", r1, r2);
      
}

double main()
{
    double a,b,c;
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("%.2lf", raizes(a,b,c));
}