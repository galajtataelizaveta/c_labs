#include <stdio.h>
#include <math.h>

int f_rec(int n);
int func(int n);

int main()
{
    int n = 0;
    
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Функция");
    
    if(func(n)==1)
    {
    printf("Yes,exact power of two");
    }
    if(func(n)==0)
    printf( "No");
    
    
    printf("Рекурсия");
    char *result;

    if (f_rec(n))
    result = "Yes,exact power of two";
    else
    result = "No";
    printf("%s\n", result);

    
}

int f_rec(int n)
{

    if (n < 1)
    {   
        return 0;
    }

    if (n == 1)
    {
        return 1;
    }

    if (n % 2 == 0)
    {
        return f_rec(n / 2);
    }

    return 0;
}

int func(int n)
{
    int result1 = 1;
    if(n == result1)
    
       return 1; 
    
    
        while (result1 < n)
        {
            result1 = 2 * result1;
            if (result1 == n)
            return 1;

            if (result1 > n)
            return 0;
        }
    return 0;
    
}
