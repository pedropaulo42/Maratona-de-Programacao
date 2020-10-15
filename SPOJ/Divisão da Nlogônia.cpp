#include <iostream>
 
using namespace std;
 
int main()
 
{
	int k, m, n, x, y;
	
	cin>>k;
	
	while(k!=0)
	{
		cin>>n;
		cin>>m;
		
		for(int I=0;I<k;I++)
		{
			cin>>x;
			cin>>y;
			
			if(x==n && y==m || x==n && y>m || x==n && y<m || x>n && y==m || x<n && y==m)
			{
				cout<<"divisa"<<endl;
			}
			else
			{
				if(x > n && y > m)
				{
					cout<<"NE"<<endl;
				}
				else
				{
					if(x < n && y < m)
					{
						cout<<"SO"<<endl;
					}
					else
					{
						if(x < n && y > m)
						{
							cout<<"NO"<<endl;
						}
						else
						{
							cout<<"SE"<<endl;
						}
					}
				}
			}
		}
		cin>>k;
	}
}