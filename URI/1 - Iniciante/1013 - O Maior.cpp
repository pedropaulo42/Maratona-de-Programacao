#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int valor, maior = -100000;
	
	for(int i = 0 ; i < 3 ; i ++){
		
		scanf("%d",&valor);
		
		if(valor > maior)
			maior = valor;
	}
	
	printf("%d eh o maior\n",maior);
		
	return 0;
}