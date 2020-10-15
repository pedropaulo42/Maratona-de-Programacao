#include <iostream>
#include <cstring>
 
using namespace std;
 
int main()
 
{
	char mc[1001];
	
	cin.getline(mc,1001);
	
	for(int I=0;I<strlen(mc);I++)
	{
		if(mc[I]!='p')
		{
			cout<<mc[I];
		}
		else
		{
			if(mc[I]=='p' && mc[I-1]=='p')
			{
				cout<<mc[I+1];
				I++;
			}
			else
			{
				cout<<mc[I+1];
				I++;
			}
		}
		
	}
}