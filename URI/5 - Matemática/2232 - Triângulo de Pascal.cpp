#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int t, n, s;
	
	scanf("%d",&t);
	
	while(t--){
		
		s=0;
		
		scanf("%d",&n);
		
		for(int i = 0 ; i < n ; i++)
			s+=pow(2,i);
		
		printf("%d\n",s);
	}
	
	return 0;
}