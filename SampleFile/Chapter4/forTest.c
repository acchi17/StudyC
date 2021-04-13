#include <stdio.h>

int main(void)
{
   int base, exponent, result, i;

   printf("Input integral value >>");
   scanf("%d", &exponent);

   base = 2;
   //exponent = 50;
   result = 1;

   for(i=0; i<exponent; i++)
   {
       result = result * base;
   }

   printf("Result: %d", result);
   return 0;
}