#include<bits/stdc++.h>
using namespace std;

int main(){
	
	float valor;
	int valor_int, moedas, cem, cinquenta, vinte, dez, cinco, dois, auxiliar, m50, m25, m10, m5,aux;
	
	scanf("%f",&valor);
	valor_int = valor;
	moedas = ((valor - valor_int)+0.001)*100;
	
	cem = valor_int/100;
	auxiliar = valor_int%100;
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
	
	m50 = moedas/50;
	aux = moedas%50;
	m25 = aux/25;
	aux = aux%25;
	m10 = aux/10;
	aux = aux%10;
	m5 = aux/5;
	aux = aux%5;
	
	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n",cem);
	printf("%d nota(s) de R$ 50.00\n",cinquenta);
	printf("%d nota(s) de R$ 20.00\n",vinte);
	printf("%d nota(s) de R$ 10.00\n",dez);
	printf("%d nota(s) de R$ 5.00\n",cinco);
	printf("%d nota(s) de R$ 2.00\n",dois);
	
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n",auxiliar);
	printf("%d moeda(s) de R$ 0.50\n",m50);
	printf("%d moeda(s) de R$ 0.25\n",m25);
	printf("%d moeda(s) de R$ 0.10\n",m10);
	printf("%d moeda(s) de R$ 0.05\n",m5);
	printf("%d moeda(s) de R$ 0.01\n",aux);
	
	return 0;
}