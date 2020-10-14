#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	
	scanf("%d",&n);
	
	while(n != 0){
	
		for(int i = 1 ; i < n ; i ++)
			printf("%d ",i);
			
		printf("%d\n",n);
		scanf("%d",&n);
	}
		
	return 0;
}