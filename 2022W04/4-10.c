//https://www.acwing.com/problem/content/816/
#include<stdio.h>
void copy(int a[], int b[], int size)
{
	for (int i = 0; i < size; i++)
		b[i] = a[i];
}
int main()
{
	int n, m, size;
	int a[100];
	int b[100];
	scanf("%d%d%d", &n, &m, &size);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for (int j = 0; j < m; j++)
		scanf("%d", &b[j]);
	copy(a, b, size);
	for (int i = 0; i < m; i++)
		printf("%d ", b[i]);
	return 0;
}