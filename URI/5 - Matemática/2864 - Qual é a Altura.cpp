#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	double a,b,c,r;
	
	scanf("%d",&n);
	
	while(n--){
		
		scanf("%lf%lf%lf",&a,&b,&c);
		
		r = (b*b-4*a*c) / (4*a);
		
		if(r < 0)
			printf("%.2lf\n",r*-1);
		else
			printf("%.2lf\n",r);
	}
	
	return 0;
}