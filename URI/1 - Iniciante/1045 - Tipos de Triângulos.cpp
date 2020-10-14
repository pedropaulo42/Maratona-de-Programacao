#include <bits/stdc++.h>
using namespace std;

int main() {

   float lados[3];

   cin >> lados[0] >> lados[1] >> lados[2];
   sort(lados, lados + 3);

   float a, b, c;

   a = lados[2];
   b = lados[1];
   c = lados[0];

   if(a >= b + c)
      printf("NAO FORMA TRIANGULO\n");
   else {
      if(a * a == b * b + c * c)
         printf("TRIANGULO RETANGULO\n");
      if(a * a > b * b + c * c)
         printf("TRIANGULO OBTUSANGULO\n");
      if(a * a < b * b + c * c)
         printf("TRIANGULO ACUTANGULO\n");
      if(a == b && b == c)
         printf("TRIANGULO EQUILATERO\n");
      if((a == b && b != c) || (a == c && c != b) || (b == a && a != c) || (b == c && c != a) || (c == a && a != b) || (c == b && b != a))  
         printf("TRIANGULO ISOSCELES\n");
   }

   return 0;
}