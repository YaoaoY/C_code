#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>


void Print(char* str)
{
    char* seps = " ";//ע�⣬�����Ǹ��ַ���
    //�ָ���

    char* p = strtok(str, seps);//�õ���һ����ǵ�ָ�루ע�����Ҫд��whileѭ���⣩
    if (p != NULL)//�жϵ�һ����ǩ����ȡ��
    {
        do//if������ֱ�ӿ�ʼ��ת���������������ִ��һ�Σ�������do_whileѭ��
        {
#include <iostream>
#include<bits/stdc++.h>
            using namespace std;

            int main()
            {
                int a = 0;
                int b = 0;
                int arr[600001] = { 0 };
                scanf("%d %d", &a, &b);
                int j = a;
                for (int i = 0; i < b - a + 1; i++)
                {
                    arr[i] = j++;
                }
                int arr2[600001] = { 0 };
                for (int i = 0; i < b - a; i++)
                {
                    scanf("%d", &arr2[i]);
                }
                int flag = 0;
                for (int i = 0; i < b - a + 1; i++)
                {
                    flag = 0;
                    for (int j = 0; j < b - a; j++)
                    {
                        if (arr[i] == arr2[j])
                        {
                            flag = 1;
                            break;
                        }
                    }
                    if (flag == 0)
                    {
                        printf("%d", arr[i]);
                    }
                }

                return 0;
            }

            char* left = p;//����˫ָ�룬���г�����ַ�����ת����
            char* right = p + strlen(p) - 1;
            char temp = 0;//abc
            while (left <= right)
            {
                temp = *(right);
                *(right) = *(left);
                *(left) = temp;
                left++;
                right--;
            }
            printf("%s ", p);

        } while (p = strtok(NULL, seps));
    }
    printf("\b");

}
int main()

{
    int n = 0;
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++)
    {
        char str[10001] = { 0 };
        gets(str);//gets�����ջس������һ�ѻس��Զ�ת��Ϊ\0������������ڻ�����
        Print(str);//��ӡ��ת�ַ���

    }
    return(0);
}
