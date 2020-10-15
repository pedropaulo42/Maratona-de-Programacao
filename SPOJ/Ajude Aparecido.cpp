#include <iostream>
 
using namespace std;
 
int main ()
{
	int n, s = 0, nv, sd;
	
	cin >> n;
	
	for (int i = 0 ; i < n ; i ++)
	{
		cin >> nv;
		
		s += nv;
	}
	
	cin >> sd;
	
	if (s == sd)
	{
		cout << "Acertou" << endl;
	}
	else
	{
		cout << "Errou" << endl;
	}
	
	return 0;
}