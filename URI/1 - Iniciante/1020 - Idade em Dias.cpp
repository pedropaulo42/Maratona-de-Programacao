#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int N, anos, meses, auxiliar;
	
	scanf("%d",&N);
	
	anos = N/365;
	auxiliar = N%365;
	meses = auxiliar/30;
	auxiliar = auxiliar%30;
	
	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",anos,meses,auxiliar);
		
	return 0;
}