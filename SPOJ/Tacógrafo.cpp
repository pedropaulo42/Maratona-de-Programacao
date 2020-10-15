#include <iostream>
 
using namespace std;
 
int main ()
{
	int N, T, V, dt = 0;
	
	cin >> N;
	
	for (int i = 0; i < N; i++)
	{
		cin >> T >> V;
		
		dt += T*V;
	}
	
	cout << dt << endl;
	
	return 0;
}