#include <bits/stdc++.h>

using namespace std;

int main(){
	
	double salario;
	int pert;
	
	scanf("%lf",&salario);
	
	if(salario>=0 and salario<=400.00)
		pert=15;
	if(salario>=400.01 and salario<=800.00)
		pert=12;
	if(salario>=800.01 and salario<=1200.00)
		pert=10;
	if(salario>=1200.01 and salario<=2000.000)
		pert=7;
	if(salario>2000.00)
		pert=4;
		
	printf("Novo salario: %.2lf\n",((salario*pert)/100)+salario);
	printf("Reajuste ganho: %.2lf\n",(salario*pert)/100);
	printf("Em percentual: %d %\n",pert);
	
	return 0;
}