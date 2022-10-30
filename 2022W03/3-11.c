//https://www.acwing.com/problem/content/727/
#include <stdio.h>
#include <math.h>
void Perfect(int n)
{
    if (n == 1)
    {
        printf("1 is not perfect\n");
        return;
    }
    long long sum = 1;
    for (int i = 2; i < n / i; i++)
    {
        if (n % i == 0)
        {
            sum += i;
            sum += n / i;
        }
    }
    if (sum == n)
        printf("%d is perfect\n", n);
    else
        printf("%d is not perfect\n", n);
}
int main()
{
    int N;
    long long a[103];
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < N; i++)
    {
        Perfect(a[i]);
    }
    return 0;
}