#include <bits/stdc++.h>

using namespace std;

int main(){
	
	double a,b,c;
	double p,rr,rg,areaV,areaR,areaG;
		
	while(scanf("%lf%lf%lf",&a,&b,&c) == 3){
		
		p=(a+b+c)/2.0;
		areaV=sqrt((p*(p-a)*(p-b)*(p-c)));
		rr=areaV/p;
		rg=(a*b*c)/(sqrt((a+b+c)*(b+c-a)*(c+a-b)*(a+b-c)));
		areaR=pow(rr,2)*3.1415926535897;
		areaG=pow(rg,2)*3.1415926535897;

		printf("%.4lf %.4lf %.4lf\n",areaG-areaV,areaV-areaR,areaR);
	}
	
	return 0;
}