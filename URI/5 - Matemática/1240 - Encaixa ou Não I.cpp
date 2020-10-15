#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n,ct;
	string n1,n2;
	
	scanf("%d",&n);
	
	while(n--){
		
		cin>>n1>>n2;
		ct=0;
		
		reverse(n1.begin(),n1.end());
		reverse(n2.begin(),n2.end());
		
		if((int)n1.size()<(int)n2.size())
			printf("nao encaixa\n");
		else{
			
			for (int i = 0; i <(int)n2.size(); i++){
				
				if(n1[i]==n2[i])
					ct++;
			}
			
			if(ct==(int)n2.size())
				printf("encaixa\n");
			else
				printf("nao encaixa\n");
		}
	}
    
    return 0;
}