#include <bits/stdc++.h>

using namespace std;

int main(){
	
	double a,b,c;
	
	scanf("%lf%lf%lf",&a,&b,&c);
	
	if((b-c<a && a<b+c) && (a-c<b && b<a+c) && (a-b<c && c<a+b))
		printf("Perimetro = %.1lf\n",a+b+c);
	else
		printf("Area = %.1lf\n",((a+b)*c)/2);
	
	return 0;
}