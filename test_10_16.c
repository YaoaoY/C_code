#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
    int x, y, i, j, f = 0, sign = 0, count = 0;
    scanf("%d %d", &x, &y);

    for (i = x; i <= y; i++)//ע��x<y��ʱ�����x-yû����������������磺9-10��
    {
        sign = 0;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                sign = 1;//��Ǳ���
                break;
            }
        }
        if (sign == 0)//��ʱ����if�ľ�������
        {
            f = 1;
            printf("%d ", i);
            count++;

            if (count % 5 == 0)
            {
                printf("\n");
            }


            /*
            if (count % 5 != 0){
                printf("%d ",i);
            } else {
                printf("%d\n",i);
            }*/
        }
    }
    if (f == 0) printf("��");//˵��û�н���if������û������


    return(0);
}

