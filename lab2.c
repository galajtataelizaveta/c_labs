#include <stdio.h>
#include <math.h>

int main()
{
    double x;
    printf("Enter x { x >= 3.3 and x <= 4.6} -> ");
    scanf("%lf", &x);
    if (3.3  <= x && x <= 4.6)
    {
        double y = asin(4 - x) + log(log(x)) ;
        double z = acos((2*y)/(1 + y));
        printf("y(x) = %lf\nz(y) = %lf\n", y, z);
    }
    else
        printf("x value is incorrect!\n");
    return 0;
}
