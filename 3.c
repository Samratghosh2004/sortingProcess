#include<stdio.h>
int power(int base, int exponent)
{
    if (exponent == 0)
    {
        return 1;
    }
    else if (exponent > 0)
    {
        return (base * power(base, exponent - 1));
    }
    else
    {
        return (1 / power(base, -exponent));
    }
}


int main()
{
    int base, result;
    int exponent;

    printf("Enter the number of the base: ");
    scanf("%d", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    result = power(base, exponent);

    printf("%d", result);

    return 0;
}
