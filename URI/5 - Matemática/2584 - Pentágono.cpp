#include <bits/stdc++.h>
using namespace std;

int main(){
	
	double n, tn, l, ap, a;
	
	scanf("%lf",&n);
	tn = tan ( 36.0 * M_PI / 180.0 );
	
	while(n--){
		
		scanf("%lf",&l);
		
		ap = (l/2.0) / tn;
		a = (ap * (l*5)) / 2.0;
		
		printf("%.3lf\n",a);
	}
	
	return 0;
}