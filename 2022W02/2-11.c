//https://www.acwing.com/problem/content/656/
#include<stdio.h>

int main()
{
    int N, a, b, c;
    scanf("%d", &N);
    a = N % 60;
    b = (N / 60) % 60;
    c = N / 3600;
    printf("%d:%d:%d", c, b, a);
    return 0;
}