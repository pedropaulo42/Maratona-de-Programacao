#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n,a,b,ca=0,cb=0;
	
	scanf("%d",&n);
	
	while(n != 0){
		
		while(n--){
			
			scanf("%d%d",&a,&b);
			
			if(a > b)
				ca++;
			else{
				if(a < b)
					cb++;
			}
		}
		
		printf("%d %d\n",ca,cb);
		ca=cb=0;
		scanf("%d",&n);	
	}
	
	return 0;
}