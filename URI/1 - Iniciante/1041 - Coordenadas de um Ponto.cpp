#include <bits/stdc++.h>

using namespace std;

int main(){
	
	float x,y;
	
	scanf("%f%f",&x,&y);
	
	if(x==0 and y==0)
		printf("Origem\n");
	if(x==0 and (y>0 or y<0))
		printf("Eixo Y\n");
	if((x>0 or x<0) and y==0)
		printf("Eixo X\n");
	if(x>0 and y>0)
		printf("Q1\n");
	if(x<0 and y>0)
		printf("Q2\n");
	if(x<0 and y<0)
		printf("Q3\n");
	if(x>0 and y<0)
		printf("Q4\n");
		
	return 0;
}