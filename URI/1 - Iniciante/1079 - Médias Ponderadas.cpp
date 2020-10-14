#include <bits/stdc++.h>
using namespace std;

int main(){

  int n;
  float p1, p2, p3;

  scanf("%d", &n);

  for(int i = 0; i < n; i++) {
    scanf("%f%f%f", &p1, &p2, &p3);
    printf("%.1lf\n", ((p1 * 2) + (p2 * 3) + (p3 * 5)) / 10);
  }
	
	return 0;
}