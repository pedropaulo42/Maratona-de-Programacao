#include <bits/stdc++.h>

using namespace std;

int main (){
	
	int t, k, aux, j,n;
	string i;
	unsigned long long int fat, result;
	
	scanf("%d",&t);
	
	while(t--){
		
		cin>>n>>i;
		k = (int)i.size();
		
		if(k == 1){
			
			fat = 1;
			for (int i = 2; i <= n; i++)
				fat*=i;
				
			cout<<fat<<endl;
		}
		else{
			
			aux = n - k;
			result = n;
			j = 1;
			
			while(aux >= 1){
				
				result*= aux;
				j++;
				aux = n - (k*j);
			}
			
			cout<<result<<endl;
		}
	}

  return 0;
}