#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int ct=0;
    double x,y,aux;
    
    while(scanf("%lf %lf",&x,&y)!=EOF){
    	
    	ct++;
    	
    	aux=(((y/x))-1)*100;
    	
    	printf("Projeto %d:\n",ct);
		printf("Percentual dos juros da aplicacao: %.2lf %%\n",aux);
		puts("");
	}    
    
    return 0;
}