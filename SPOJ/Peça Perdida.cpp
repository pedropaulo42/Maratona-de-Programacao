#include <stdio.h>
 
using namespace std;
 
int main()
{
	int np, p, s = 0;
	
	scanf ("%d" , &np);		
	
	for (int i = 0; i < np - 1 ; i ++)
	{
		scanf ("%d" , &p);	
		
		s += p; 	
	}
	
	np = (((np - 1 + 1) * (np + 1)) / 2 ) - s;
	
	printf ("%d", np);
	
	return 0;
}