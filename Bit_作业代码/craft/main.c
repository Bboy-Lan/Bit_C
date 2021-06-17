#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    float a[5];//组数最多5个数。
    int t, i;
    printf("请输入需要计算土壤污染指数的组数\n");
    
    while (scanf("%d", &t) != EOF)//对组数进行循环，输入几个数将会循环出现土壤污染指数几个等级。   
    {
        printf("请输入土壤污染指数标准值\n");//输入P指数
       
        for (i = 1; i <= t; i++)
        {
            scanf("%f", &a[i]);
        }
       
        for (i = 1; i <= t; i++)
        {
            if (0 <= a[i] && a[i] <= 1)//逻辑与  两个条件同时满足 成立
                printf("土壤质量等级为优\n");
            else 
                printf("土壤质量等级为污染\n");
        }
    }
    return 0;
}







	
////写代码将三个整数数按从大到小输出。例如：	输入：2 3 1		输出：3 2 1
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

	