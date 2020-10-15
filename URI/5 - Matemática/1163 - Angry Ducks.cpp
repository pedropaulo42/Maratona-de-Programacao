#include <bits/stdc++.h>
using namespace std;

#define PI 3.14159
#define g 9.80665

int main(){
	
	int qt;
	double h,p1,p2,a,v,Vx,Vy,delv,t1,t2,r;
	
	while(scanf("%lf",&h) == 1){
		
		scanf("%lf%lf%d",&p1,&p2,&qt);
		
		for (int i = 0; i < qt; i++){
			
			scanf("%lf%lf",&a,&v);
			
			Vx=v*cos(a*PI/180.0);
			Vy=v*sin(a*PI/180.0);
			delv=sqrt(pow(Vy,2)-4*(-g/2)*(h));
			t1=(-Vy+delv)/(2*(-g/2));
			t2=(-Vy-delv)/(2*(-g/2));
			
			if(t1>=0)
				r=t1*Vx;
			else
				r=t2*Vx;
			
			if(r>=p1 && r<=p2)
				printf("%.5lf -> DUCK\n",r);
			else
				printf("%.5lf -> NUCK\n",r);
		}
	}
	
	return 0;
}