#include <bits/stdc++.h>
using namespace std;

int main() {

  int alcohol = 0, gasoline = 0, diesel = 0, end;

  while(scanf("%d", &end) && end != 4) {
    if(end == 1)
      alcohol ++;
    if(end == 2)
      gasoline ++;
    if(end == 3)
      diesel ++;
  }

  printf("MUITO OBRIGADO\n");
  printf("Alcool: %d\nGasolina: %d\nDiesel: %d\n", alcohol, gasoline, diesel);

  return 0;
}