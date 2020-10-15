#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n,s;
	
	scanf("%d",&n);
	
	while(n!=0){
		
		s=0;
		
		for(int i = 0 ; i < n ; i ++)
			s+=pow(n-i,2);
			
		printf("%d\n",s);
		
		scanf("%d",&n);
	}
	
	return 0;
}