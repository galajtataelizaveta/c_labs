#include <stdio.h>
#include <math.h>

float func(double a, double b, double f, double n, double h);

int main()
{

    double a = 0;
    double b = 2;
    double f = 0;

    int n = 1;

    double integral_1 = 0;
    double integral_2 = 0;

    double h = 0;

    double accuracy = 0;
    printf("Enter accuracy: ");
    scanf("%lf", &accuracy);
    double delta_integral = 0;
    do
    {
        h = (b - a) / n;
       
        integral_2 = integral_1;
        integral_1 = func(a, b, f, n, h);
        delta_integral = (integral_2 - integral_1) / 3;
        n = n * 2;

    } while (fabs( delta_integral )>= accuracy);
    printf("delta_integral = %lf\n", delta_integral);
    printf("integral_1 = %lf\n", integral_1);
    printf("integral_2 = %lf\n", integral_2);

    return 0;
    }

    float func(double a, double b, double f, double n, double h)
    {

        double I = 0;

        double x = 0;

        for (int k = 0; k <= n; k++)
        {
            x += h;

            if (x > a && x <= (b / 2))
            f = pow(x, 2) * atan(x);
            else if (x > (b / 2) && x <= b)
            f = sin(1/(pow(x, 2)));
            I = I + f * h;
        }

    return I;
}
