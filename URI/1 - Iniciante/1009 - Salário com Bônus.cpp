#include <bits/stdc++.h>
using namespace std;

int main(){
	
	char nome[1000];
	double salario, montante;
	
	scanf("%s%lf%lf",&nome,&salario,&montante);
	
	printf("TOTAL = R$ %.2lf\n", salario+montante*0.15);
	
	return 0;
}