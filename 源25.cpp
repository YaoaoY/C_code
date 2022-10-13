#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

int we_strlen(char* str)
{
	if (*str != '\0')
	{
		return 1 + we_strlen(str + 1);
	}
	else
	{
		return 0;
	}
	

}
int main()
{
	char arr[] = "bit";
	int len = we_strlen(arr);

	printf("%d\n", len);
	
	return 0;
}