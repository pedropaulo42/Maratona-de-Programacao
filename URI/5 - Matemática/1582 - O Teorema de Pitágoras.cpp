#include <bits/stdc++.h>

using namespace std;

int mdc(int a, int b){
	
	if(a%b==0)
		return b;
	else{
		
		return mdc(b,(a%b));
	}
}

int main(){
	
	int x,y,z;
	ofstream aq("tetx.txt");	
	
	while(scanf("%d%d%d",&x,&y,&z) == 3){
		
		if((x*x==y*y+z*z) || (y*y==x*x+z*z) || (z*z==x*x+y*y)){
			
			if(mdc(mdc(x,y),z)==1)
				printf("tripla pitagorica primitiva\n");
			else	
				printf("tripla pitagorica\n");
		}
		else
			printf("tripla\n");
	}
	
	return 0;
}