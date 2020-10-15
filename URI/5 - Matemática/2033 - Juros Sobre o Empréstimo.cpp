#include <bits/stdc++.h>

using namespace std;

int main(){
	
	double c, i, n, js, jc;
	
	while(scanf("%lf %lf %lf",&c,&i,&n) != EOF){	
		
		js = c * i * n;
		jc = (c*(pow((1+i),n))) - c;
		
		printf("DIFERENCA DE VALOR = %.2lf\n",jc - js);
		printf("JUROS SIMPLES = %.2lf\n",js);
		printf("JUROS COMPOSTO = %.2lf\n",jc);
	}
	
	return 0;
}