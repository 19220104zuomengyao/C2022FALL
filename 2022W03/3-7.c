#include<stdio.h>

int GCD_recursive(int m, int n)
{
	int temp;
	if (m > n)
	{
		temp = n;
		n = m;
		m = temp;
	}
	while(n!=0)
	{
		m = m % n;
		temp = n;
		n = m;
		m = temp;
	}
	return m;
}
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	printf("%d", GCD_recursive(a % b, b));
	return 0;
}