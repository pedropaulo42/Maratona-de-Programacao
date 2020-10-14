#include <bits/stdc++.h>
using namespace std;

int main(){

  int k;

  scanf("%d", &k);

  if(k == 2)
    printf("Top 3\n");
  else if(k == 4)
    printf("Top 5\n");
  else if(k > 5 && k <= 10)
    printf("Top 10\n");
  else if(k > 10 && k <= 25)
    printf("Top 25\n");
  else if(k > 25 && k <= 50)
    printf("Top 50\n");
  else if(k > 50)
    printf("Top 100\n");
  else 
    printf("Top %d\n", k); 
	
	return 0;
}