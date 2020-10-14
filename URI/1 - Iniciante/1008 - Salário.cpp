#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int numero_funcionario, horas_trabalhadas;
	float valor_hora;
	
	scanf("%d%d%f",&numero_funcionario,&horas_trabalhadas,&valor_hora);
	
	printf("NUMBER = %d\n",numero_funcionario);
	printf("SALARY = U$ %.2f\n",horas_trabalhadas*valor_hora);
	
	return 0;
}