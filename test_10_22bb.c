#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
int main()
{

    double data1 = 0;
    double data2 = 0;
    char op;
    double r = 0;
    scanf("%lf%c%lf", &data1, &op, &data2);
    switch (op)//key���֧������switch-caseѭ�����
    {
    case'+':
        r = data1 + data2;
        break;
    case'-':
        r = data1 - data2;
        break;
    case'*':
        r = data1 * data2;
        break;
    case'/':
        r = data1 / data2;
        break;
    }
    if ((fabs(r - (int)r)) > 0)//���þ���ֵ���������ж�����Ľ���Ƿ�ΪС��
    {
        printf("%.2lf\n", r);//�����С������ô�Ͱ��ձ�����λС������ʽ���Ը�������ʽ���
    }
    else
    {
        printf("%d\n", (int)r);//����С�����������������ע�⣺ǿ������ת����������
    }

    return(0);
}