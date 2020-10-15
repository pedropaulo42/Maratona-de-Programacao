#include <bits/stdc++.h>

using namespace std;

int main(){
	
	double a,b,c,resul;
	
	while(cin>>a>>b>>c){
	
		resul=((tan(a*3.141592654/180)*b)+c)*5;
	
		printf("%.2lf\n",resul);
	}

	return 0;
}