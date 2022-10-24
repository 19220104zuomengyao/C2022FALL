//https://www.acwing.com/problem/content/667/
#include<stdio.h>

int main()
{
    int a, b, max, min;
    scanf("%d%d", &a, &b);
    if (a > b)
    {
        max = a;
        min = b;
    }
    else
    {
        max = b;
        min = a;
    }
    if (max % min == 0)
    {
        printf("Sao Multiplos");
    }
    else
    {
        printf("Nao sao Multiplos");
    }
    return 0;
}