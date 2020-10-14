#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int vt[3];
	int vb[3];
	
	scanf("%d%d%d",&vt[0],&vt[1],&vt[2]);
	vb[0]=vt[0];
	vb[1]=vt[1];
	vb[2]=vt[2];
	
	sort(vt,vt+3);
	
	cout<<vt[0]<<"\n"<<vt[1]<<"\n"<<vt[2]<<"\n\n";
	cout<<vb[0]<<"\n"<<vb[1]<<"\n"<<vb[2]<<endl;
	
	return 0;
}