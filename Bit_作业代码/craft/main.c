#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    float a[5];//�������5������
    int t, i;
    printf("��������Ҫ����������Ⱦָ��������\n");
    
    while (scanf("%d", &t) != EOF)//����������ѭ�������뼸��������ѭ������������Ⱦָ�������ȼ���   
    {
        printf("������������Ⱦָ����׼ֵ\n");//����Pָ��
       
        for (i = 1; i <= t; i++)
        {
            scanf("%f", &a[i]);
        }
       
        for (i = 1; i <= t; i++)
        {
            if (0 <= a[i] && a[i] <= 1)//�߼���  ��������ͬʱ���� ����
                printf("���������ȼ�Ϊ��\n");
            else 
                printf("���������ȼ�Ϊ��Ⱦ\n");
        }
    }
    return 0;
}







	
////д���뽫�������������Ӵ�С��������磺	���룺2 3 1		�����3 2 1
//
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int mid = b;
//		a = mid;
//
//
//	}
//
//	
//	printf("%d %d %d", a, b, c);

	