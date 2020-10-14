#include <iostream>
#include <ctype.h>

using namespace std;

int main ()
{
	int n, d1 , d2 , r = 0;
	char c;
	
	cin >> n;
	
	for (int i = 0 ; i < n ; i ++)
	{
		cin >> d1 >> c >> d2;
		
		if (d1 == d2)
		{
			r = d1 * d2;
			cout << r << endl;
		}
		else
		{
			if (islower (c))
			{
				r = d1 + d2;
				cout << r << endl;
			}
			else
			{
				r = d2 - d1;
				cout << r << endl;
			}
		}
		
		r = 0;
		
	}
	
	return 0;
}