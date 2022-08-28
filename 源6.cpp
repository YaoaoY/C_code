#define _CRT_SECURE_NO_WARNINGS 1
# include<stdio.h>

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10};
	int x = 7;
	int num = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = num - 1;
	

	int mid = (left + right) / 2;

	while (left <= right)
	{
		mid = (left + right) / 2;

		if (x < arr[mid])
		{
			right = mid - 1;
		}
		else if (x > arr[mid])
		{
			left = mid + 1;
		}
		else
		{
			printf("找到了，角标为%d\n", mid);
			break;
		}
    }
	if(left > right)
	{
	printf("找不到\n");

	}
	return 0;
}