//https://www.acwing.com/problem/content/674/
#include<stdio.h>
int main()
{
    float a, b;
    scanf("%f", &a);
    if (a <= 2000.00)
    {
        printf("Isento");
    }
    else if (a <= 3000.00)
    {
        b = (a - 2000.00) * 0.08;
        printf("R$ %.2f", b);
    }
    else if (a <= 4500.00)
    {
        b = (a - 3000.00) * 0.18 + 80.00;
        printf("R$ %.2f", b);
    }
    else
    {
        b = (a - 4500.00) * 0.28 + 350.00;
        printf("R$ %.2f", b);
    }
    return 0;
}