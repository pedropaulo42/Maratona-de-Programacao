#include <bits/stdc++.h>

using namespace std;

int main(){
	
	double a,b,c,delta,r1,r2,sub;
	
	cin>>a>>b>>c;
	
	delta=(b*b)-4*a*c;
	
	sub=2*a;
	
	if(sub!=0 && delta>=0){
	
		r1=(-b+(sqrt(delta)))/(sub);
		r2=(-b-(sqrt(delta)))/(sub);
		
		printf("R1 = %.5lf\n",r1);
		printf("R2 = %.5lf\n",r2);
	}
	else{
		
		cout<<"Impossivel calcular"<<endl;
	}
	
	return 0;
}