#include<stdio.h>
void print_hex(int x)
{
	int count = 0;
	int arr[10];
	int i = 0;
	while (x != 0) {
		arr[i] = x % 16;
		x = x / 16;
		i++;
	}
	for (int j = i - 1; j >= 0; j--) 
	{
		if (j < 10)
			printf("%d", arr[j]);
		else 
		{
			switch (arr[j])
			{
				case 10: {
					printf("A");
					break;
				}
				case 11: {
					printf("B");
					break;
				}
				case 12: {
					printf("C");
					break;
				}
				case 13: {
					printf("D");
					break;
				}
				case 14: {
					printf("E");
					break;
				}
				case 15: {
					printf("F");
					break;
				}
			}
		}
	}
}
int main()
{
	int x;
	scanf("%d", &x);
	print_hex(x);
	return 0;
}