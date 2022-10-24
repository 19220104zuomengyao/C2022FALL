#include <stdio.h>

int main()
{
	int a , b , c , y;
	scanf("%d%d%d", &a, &b, &c);
	y = a ^ b % c;
	printf("%d", y);
	return 0;
}