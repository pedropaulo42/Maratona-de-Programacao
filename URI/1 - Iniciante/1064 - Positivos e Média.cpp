#include <bits/stdc++.h>

using namespace std;

int main(){
	
	double n,s=0,ct=0;
	
	for (int i = 0; i < 6; i++){
		
		scanf("%lf",&n);
		
		if(n>0){
			ct++;
			s+=n;
		}
	}
	
	printf("%.0lf valores positivos\n",ct);
	printf("%.1lf\n",s/ct);
	
	return 0;
}