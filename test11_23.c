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
