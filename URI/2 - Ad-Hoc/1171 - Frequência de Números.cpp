#include <bits/stdc++.h>

using namespace std;

int main(){

	int n,x,vet[2001]={0};
	
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		
		scanf("%d",&x);
		vet[x]=vet[x]+1;
	}
	
	for(int i=0;i<=2000;i++){
		
		if(vet[i] != 0)
			cout<<i<<" aparece "<<vet[i]<<" vez(es)"<<endl;
	}
	
	return 0;
}