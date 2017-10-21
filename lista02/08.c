#include <stdio.h>

  double salario_inicial(int cargo) // salarios base
  {
     double salario;
      if (cargo==1){
        salario = 10000;
      }
      if (cargo==2)
      {
        salario = 8000;
      }
      if (cargo==3)
      {
        salario = 5000;
      }
      if (cargo==4)
      {
        salario = 3000;
      }
      if (cargo==5)
      {
        salario = 2000;
      }
      return salario;
  }
  
  double acrescimos(int cargo, int h_extra)
  {
        double a;
        if(h_extra>40)
        {
      		a = (salario_inicial(cargo)/160);
      		a += 40;
      		a *= 40;
        } 
        else {
        a = (salario_inicial(cargo)/160);
        a += 40;
        a *= h_extra; // quanto vale a hora
        }
        return a;
    }
    
    double descontos(int cargo, int faltas)
    {
        double d = (salario_inicial(cargo)/20)*faltas;
        return d;
  }
  
  double salario_final(int cargo, int faltas, int h_extra)
  {
       double sfinal = salario_inicial(cargo)+acrescimos(cargo,h_extra)-descontos(cargo, faltas);
       return sfinal;
  }
  
  
    int main()
  {
      int cargo, faltas, h_extra;
      scanf("%d %d %d", &cargo, &faltas, &h_extra);
      printf("%.2lf", salario_final(cargo,faltas,h_extra));
  }
  
  