#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int l,c,r1,r2;
	double dt,hq,hr1,hr2, x;
	
	while(scanf("%d%d%d%d",&l,&c,&r1,&r2),l){
		
		dt = (r1*2.0) + (r2*2.0);
		hq = sqrt(l*l*1.0 + c*c*1.0);
		hr1 = sqrt(r1*r1+r1*r1) - r1;
		hr2 = sqrt(r2*r2+r2*r2) - r2;
		x = hq - (hr1 + hr2);
		
		if(dt <= l && (r1*2) <= c && (r2*2) <= c){
			printf("S\n");
		}
		else{
			
			if(dt <= c && r1*2 <= l && r2*2 <= l){
				printf("S\n");
			}
			else{
				
				if(dt <= (x+x*0.03) && (r1*2) <= c && (r2*2) <= c && r1*2 <= l && r2*2 <= l)
					printf("S\n");
				else
					printf("N\n");
			}
		}
	}
}