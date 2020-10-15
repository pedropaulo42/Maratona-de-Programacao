#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, h, c, l;
	
	while(scanf("%d",&n) != EOF){
		
		scanf("%d%d%d",&h,&c,&l);
		
		printf("%.4lf\n",(((sqrt(h*h + c*c))*n)*l)/10000);
	}
	
	return 0;
}