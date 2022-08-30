#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int main()
{
	int i = 0;

	 char password[20] = {0};

	for (i = 1; i < 3; i++)
	{
		printf("请输入密码:>\n");
		scanf("%s",password);
		if (strcmp(password, "123456") == 0)
		{
			printf("密码正确，登陆成功\n");
			break;
		}
		else
		{
			printf("密码错误，请重新输入\n");
		}
	}
	if (i == 3)
	{
		printf("请输入密码\n", password);
		scanf("%s", password);
		
		if (strcmp(password, "123456") == 0)
		{
			

			printf("密码输入正确，登陆成功");
		}
		else
		{
			printf("密码错误，将自动退出程序\n");
		}
	}

		

	return 0;
}