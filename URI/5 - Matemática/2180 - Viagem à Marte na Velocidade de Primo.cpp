#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n,dv,ct=0,s=0,t;
	
	scanf("%d",&n);
	
	while(ct != 10){
		
		dv=1;
		for(int i = 1 ; i <= sqrt(n) ; i++){
			
			if(n % i == 0)
				dv++;
		}
		
		if(dv == 2){
			
			s+=n;
			ct++;
		}
			
		n=n+1;
	}
	
	t=(60000000000/s)/1000;
	printf("%d km/h\n",s);
	printf("%d h / %d d\n",t,t/24);
	
	return 0;
}