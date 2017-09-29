#include <stdio.h>

	int main(){
		int id, faltas, hextra;
		scanf("%d %d %d", &id, &faltas, &hextra);

		/* define os salarios bases de acordo com o cargo*/
		double salario, descontos, acrescimos;
		switch (id){
			case 1:
			printf("Cargo \t Diretor\n");
			salario = 10000;
			break;

			case 2:
			printf("Cargo \t Gerente\n");
			salario = 8000;
			break;

			case 3:
			printf("Cargo \t Engenheiro\n");
			salario = 5000;

			case 4:
			printf("Cargo \t Técnico\n");
			salario = 3000;

			case 5:
			printf("Cargo \t Operador\n");
			salario = 2000;
		}

		/* insere o valor de desconto e acréscimo de acordo com as faltas e horas extras, calcula o salário final*/
		descontos = (salario/20)*faltas;
		if(hextra>40){
		acrescimos =((salario/160)+40)*40;
		}	else {
		acrescimos = ((salario/160)+40)*hextra; //160 = numero de horas de trabalho por mês
		}
		salario = salario - descontos + acrescimos;
		printf("# de faltas : %d\t\n", faltas);
		printf("# horas-extra : %d\t\n", hextra);
		printf("Descontos : %lf\t\n", descontos);
		printf("Acréscimos : %lf\t\n", acrescimos);
		printf("salario : %lf\t\n", salario);
	}