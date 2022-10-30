#include<stdio.h>

int is_pow2(int n)
{
	int a;
	while (n>0)
	{
		int a = n % 2;
		if (a == 1) {
			break;
		}
		n = n / 2;
	}
	if (n == 1)
		return 0;
	else
		return -1;
}
int main()
{
	for (int i=1; i < 1000; i++) {
		printf("%d:%d\n", i, is_pow2(i));
	}
	return 0;
}