#include <stdio.h>
#include <math.h>

int main()
{
   double x = 0;
   double h = 0;
   double f = 0;
   printf("Enter h -> ");
   scanf("%lf", &h);

   int z = 0;
   int r = (2 / h) / 2;

/* 
   if(h > 0 && h <= 2)
   {
      while (z < (2 / h))
      {
         z += 1;
         x += h;
         printf("x = %lf \n", x);

         if (z <= r)
            f = pow(x, 2) * atan(x);
         else if (z > r)
            f = sin(1/(pow(x, 2)));
         printf("f(x) = %lf\n", f);
         printf(" \n");
      }; 
   }  
*/

   if(h > 0 && h <= 2)   
   {
  
      for (int z = 0; z < (2 / h); z++)
      {
         x += h;
         printf("x = %lf \n", x);

         if (z < r)
         f = pow(x, 2) * atan(x);
         else
            f = sin(1/(pow(x, 2)));
         printf("f(x) = %lf\n", f);
         printf(" \n");
      }
   }

   return 0;
}
