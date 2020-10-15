#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int t, n, bg, gg, rg;
	char j1,j2;
	
	scanf("%d",&t);
	
	while(t--){
		
		bg = gg = rg = 0;
		scanf("%d",&n);
		
		while(n--){
			
			cin>>j1>>j2;	
			
			if(j1 == 'B'){		
				
				if(j2 == 'G')	
					bg++;
				if(j2 == 'R')	
					bg+=2;
			}
			if(j1 == 'G'){		
				
				if(j2 == 'R')	
					gg++;
				if(j2 == 'B')	
					gg+=2;
			}
			if(j1 == 'R'){		
				
				if(j2 == 'B')
					rg++;
				if(j2 == 'G')	
					rg+=2;
			}
		}
		
		if(bg == gg && gg == rg)
			printf("trempate\n");
		else{
			
			if((bg == gg && gg != rg && rg < bg && rg < gg) || (bg == rg && rg != gg && gg < bg && gg < rg) || (gg == bg && bg != rg && rg < gg && rg < bg) || (gg == rg && rg != bg && bg < gg && bg < rg) || (rg == bg && bg != gg && gg < rg && gg < bg)  || (rg == gg && gg != bg && bg < rg && bg < gg))
				printf("empate\n");
			else{
				
				if(bg > gg && bg > rg)
					printf("blue\n");
				else{
					
					if(gg > bg && gg > rg)
						printf("green\n");
					else
						printf("red\n");
				}
			}
		}
	}
	
	return 0;
}