#include <bits/stdc++.h>

using namespace std;

int main(){
	
	double c,ct,s;
	int n;
	
	scanf("%lf",&c);
	
	while(c--){
		
		scanf("%d",&n);
		int vet[n];
		ct=0;
		s=0;
		
		for (int i = 0; i < n; i++){
			
			scanf("%d",&vet[i]);
			s+=vet[i];
		}
		
		s=s/n;
		
		for (int i = 0; i < n; i++){
			
			if(vet[i]>s)
				ct++;
		}
		
		printf("%.3lf",(ct*100)/n);
		cout<<"%"<<endl;
	}
    
    return 0;
}