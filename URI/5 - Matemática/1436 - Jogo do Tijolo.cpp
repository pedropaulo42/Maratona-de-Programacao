#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n,r,x,qt,ct=0;
	
	scanf("%d",&n);
	
	while(n--){
		
		ct++;
		scanf("%d",&qt);
		
		for (int i = 0 ; i < qt ; i ++){
			
			scanf("%d",&x);
			
			if(i==qt/2)
				r=x;
		} 
	
		printf("Case %d: %d\n",ct,r);
	}
	
	return 0;
}