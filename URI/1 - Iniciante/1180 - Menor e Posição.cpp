#include <bits/stdc++.h>

using namespace std;

int main ()
{
	int t,n,menor=100000,p;
	
	scanf("%d",&t);
	
	for (int i = 0; i < t; i++)
	{
		scanf("%d",&n);
		
		if(n<menor)
		{
			menor=n;
			p=i;
		}
	}
	
	printf("Menor valor: %d\n",menor);
	printf("Posicao: %d\n",p);
	
	return 0;
}