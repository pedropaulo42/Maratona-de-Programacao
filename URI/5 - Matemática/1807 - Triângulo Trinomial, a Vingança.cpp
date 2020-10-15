#include <bits/stdc++.h>
using namespace std;

#define MOD 2147483647

int main(){
	
	int n;
	long long int pt,r;
	
	scanf("%d",&n);
	
	pt = 3 % MOD;
	r = 1;
	
	for( ; n > 0 ; n /= 2){
		
		if(n % 2 == 1)
			r = (r * pt) % MOD;
			
		pt = (pt * pt) % MOD;
	}
	
	printf("%lld\n",r);
	
	return 0;
}