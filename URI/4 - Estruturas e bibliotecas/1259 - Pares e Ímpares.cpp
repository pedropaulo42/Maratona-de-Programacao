#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t,n,cp=0,ci=0;
	
	scanf("%d",&t);
	
	int v[t];
	
	for (int i = 0; i < t; i++)
	{
		scanf("%d",&n);
		v[i]=n;
		
		if(n%2==0)
		{
			cp++;
		}
		else
		{
			ci++;
		}
	}
	
	int vp[cp];
	int vi[ci];
	
	int auxp=cp;
	int auxi=ci;
	
	cp=0;
	ci=0;
	
	for (int i = 0; i < t; i++)
	{
		if(v[i]%2==0)
		{
			vp[cp]=v[i];
			cp++;
		}
		else
		{
			vi[ci]=v[i];
			ci++;
		}
	}
	
	sort(vp,vp+auxp);
	sort(vi,vi+auxi);
	reverse(vi,vi+auxi);
	
	for (int i = 0; i < auxp; i++)
	{
		printf("%d",vp[i]);
		printf("\n");
	}
	
	for (int i = 0; i < auxi; i++)
	{
		printf("%d",vi[i]);
		printf("\n");	
	}
	
	return 0;
}