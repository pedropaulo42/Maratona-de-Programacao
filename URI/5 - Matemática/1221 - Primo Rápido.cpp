#include <iostream>
#include <math.h>

using namespace std;

int main ()
{
	int n, x,r;
	
	cin >> n;
	
	for (int i = 0 ; i < n ; i ++)
	{
		int dv = 1;
		
		cin >> x;
		
		if (x != 1)
		{
		
			r = sqrt (x);
		
			for (int j = 1 ; j <= r ; j ++)
			{
				if (x % j == 0)
				{
					dv ++;
				}
			}
		
			if (dv == 2)
			{
				cout << "Prime" << endl;
			}
			else
			{
				cout << "Not Prime" << endl;
			}
		}
		else
		{
			cout << "Not Prime" << endl;
		}
		
	}
	
	return 0;
}