#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int N, horas, minutos, auxiliar;
	
	scanf("%d",&N);
	
	horas = N/3600;
	auxiliar = N%3600;
	minutos = auxiliar/60;
	auxiliar = auxiliar%60;
	
	printf("%d:%d:%d\n",horas,minutos,auxiliar);
		
	return 0;
}