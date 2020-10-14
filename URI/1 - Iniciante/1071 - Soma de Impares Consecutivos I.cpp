#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int x,y,s=0,aux;
	
	scanf("%d%d",&x,&y);
	
	if(x<y){
		
		aux=x;
		x=y;
		y=aux;
	}
	
	for(int i=y+1 ; i<x ; i++){
		
		if(i%2!=0)
			s+=i;
	}
	
	printf("%d\n",s);
	
	return 0;
}