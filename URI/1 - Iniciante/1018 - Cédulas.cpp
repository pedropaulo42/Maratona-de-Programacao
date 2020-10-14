#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int N, cem, cinquenta, vinte, dez, cinco, dois, auxiliar;
	
	scanf("%d",&N);
	
	cem = N/100;
	auxiliar = N%100;
	cinquenta = auxiliar/50;
	auxiliar = auxiliar%50;
	vinte = auxiliar/20;
	auxiliar = auxiliar%20;
	dez = auxiliar/10;
	auxiliar = auxiliar%10;
	cinco = auxiliar/5;
	auxiliar = auxiliar%5;
	dois = auxiliar/2;
	auxiliar = auxiliar%2;
	
	printf("%d\n",N);
	printf("%d nota(s) de R$ 100,00\n",cem);
	printf("%d nota(s) de R$ 50,00\n",cinquenta);
	printf("%d nota(s) de R$ 20,00\n",vinte);
	printf("%d nota(s) de R$ 10,00\n",dez);
	printf("%d nota(s) de R$ 5,00\n",cinco);
	printf("%d nota(s) de R$ 2,00\n",dois);
	printf("%d nota(s) de R$ 1,00\n",auxiliar);
		
	return 0;
}