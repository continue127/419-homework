#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void ss(int data[], int n)
{
	int i, j, idx;
	for (i = 0; i < n - 1; i++)
	{
		idx = i;
		for (j = i ; j < n; j++)
		{
			if (data[j] > data[idx])
				idx = j;
		}
		if (idx != i)
		{
			int temp = data[i];
			data[i] = data[idx];
			data[idx] = temp;
		}
	}
}
int main()
{
	int arr[100001] = { 0 };
	int i, n,w;
	scanf("%d%d", &n, &w);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		ss(arr,i+1);
		int cnt = (i + 1) * w / 100;
		cnt = cnt>=1 ? cnt:1 ;
		int line = arr[cnt - 1];
		printf("%d", &arr[i]);
	}
	printf("\n");
	return 0;
}
