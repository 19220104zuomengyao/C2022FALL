#include<stdio.h>
int main()
{
	int n, i;
	printf("n(n>3)");
	scanf("%d", &n);
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
			printf("%d bushisushu\n", n);
		else if (i == n)
			printf("%d shisushu\n",n);
	}
	return 0;
}
