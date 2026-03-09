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
	int arr[] = { 5, 2, 9, 1, 5, 6 };
	int i, j;
	ss(arr, 7);
	for (i = 0; i < sizeof(arr)/sizeof(int); i++)
		printf("%d ", arr[i]);
	printf("\n");
	return 0;
}