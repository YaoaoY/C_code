#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    double arr[5] = { 0 };//����һ�����飬������γɼ�
    int i, j = 0;
    double sum = 0;

    for (i = 1; i <= 5; i++)//һ��ѭ������������һ��ѧ��
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%lf", &arr[j]);
            sum += arr[j];//key�������볬����ʱ��˳��Ͱѳɼ��ۼ�����
        }
        for (j = 0; j < 5; j++)//������ѭ����ӡ���ɼ�
        {
            printf("%.1lf ", arr[j]);
        }
        printf("%.1lf", sum);

    }

    return 0;
}