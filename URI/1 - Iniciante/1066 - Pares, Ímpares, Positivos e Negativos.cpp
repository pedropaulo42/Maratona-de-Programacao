#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int vet[5];
	int par=0,impar=0,pos=0,neg=0;
	
	scanf("%d%d%d%d%d",&vet[0],&vet[1],&vet[2],&vet[3],&vet[4]);
	
	for (int i = 0; i < 5; i++){
		
		if(vet[i]%2==0)
			par++;
		if(vet[i]%2!=0)
			impar++;
		if(vet[i]>0 && vet[i]!=0)
			pos++;
		if(vet[i]<0 && vet[i]!=0)
			neg++;
	}
	
	printf("%d valor(es) par(es)\n",par);
	printf("%d valor(es) impar(es)\n",impar);
	printf("%d valor(es) positivo(s)\n",pos);
	printf("%d valor(es) negativo(s)\n",neg);
	
	return 0;
}