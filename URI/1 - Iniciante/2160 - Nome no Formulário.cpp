#include <bits/stdc++.h>

using namespace std;

int main(){
	
	string l;
	
	cin.ignore();
	getline(cin,l);
	
	if((int)l.size()<80)
		printf("YES\n");
	else
		printf("NO\n");
	
	return 0;
}