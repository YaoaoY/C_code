#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
int main()
{
    char arr[81] = { 0 };//ע�⣺��81������80����Ҫ����\0������
    int i = 0;
    int count = 0;
    int word = 0;

    //scanf("%s", arr);
    fgets(arr,81, stdin);
    arr[strlen(arr) - 1] = '\0';//�����˷ѿռ�
    for (i = 0; arr[i] != '\0';i++)
    {
        if (arr[i] == ' ' || arr[i] == ',' || arr[i] == '.')//�������word�����if������õ�ʮ������γɵ�һ�ֽ���ǣ�����ǿո��word����ֵΪ0�������л�����뵽��һ��ѡ�񣬵������ֿո�ȣ�word����ֵΪ1�������һ������ĸ���������Ǽ�������ĸ����Ϊһ�����ʣ���ʱword����1���ٽ���ѭ����������滹����ĸ1,2������ȥ��ֱ�����ֿո�ȣ�Ȼ���ظ�����˼·
        {
            word = 0;
        }
        else if (word == 0)
        {
            word = 1;
            count++;
        }
    }
    printf("%d", count);
    return(0);
}

