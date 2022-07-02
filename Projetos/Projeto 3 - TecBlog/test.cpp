#include <iostream>
#include <cstring>
#include <locale.h>

using namespace std;

int main()
{
     int n, X=0;

   printf("Entre com um numero: ");

   scanf("%d",&n);

   for(int i=1 ; i<=n ; i++)

   {

     X = X + i;

   }

   printf("\n _______________ %d _______________________: %d \n", n, X);
}