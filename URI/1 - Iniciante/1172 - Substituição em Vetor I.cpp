#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n,vet[10];
	
	for (int i = 0; i < 10; i++){
		
		scanf("%d",&n);
		
		if(n<=0)
			vet[i]=1;
		else
			vet[i]=n;
	}
	
	for (int i = 0; i < 10; i++)
		cout<<"X["<<i<<"] = "<<vet[i]<<endl;
	
	return 0;
}