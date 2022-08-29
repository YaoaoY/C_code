#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>

int main()
{
	char arr1[] = "################";
	char arr2[] = "Happy new year!!!";

	int left = 0;
	int right = strlen(arr1) - 1;
	
	while (left <= right)
	{

		arr1[left] = arr2[left];
		arr1[right] = arr2[right];
		left++;
		right--;
		
		printf("%s\n", arr1);
		Sleep(1000);
		system("cls");
	}
	return 0;
	
}
