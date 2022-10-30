#include<stdio.h>

int fac_bit_count(int n)
{
	long long sum = 1;
	for (int i = n; i > 1; i--)
		sum = sum * i;
	int count = 1;
	while (sum / 10 != 0)
	{
		sum = sum / 10;
		count++;
	}
	return count;
}
int main()
{
	int x;
	scanf("%d", &x);
	printf("%d", fac_bit_count(x));
	return 0;
}