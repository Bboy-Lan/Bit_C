#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



int f(int x)
{
	if (x > 0)
		return -1;

	else if (x = 0)
		return 0;

	else
		return 1;
}

int sum(int a)// static ��Ӧ��֪ʶ
{
	int c = 0;
	static int b = 3;
	c += 1;
	b += 2;
	return (a + b + c);
}

int main()
{
	
	//����
	//	�Ӽ�������5���˵���ߣ��ף��������ǵ�ƽ����ߣ��ף���

	//	����������
	//	һ�У���������5����ߣ���Χ0.00~2.00�����ÿո�ָ���
	//	���������
	//	һ�У����ƽ����ߣ�������λС����
	
	//	ʾ��1
	//	���룺
	//	1.68 1.75 1.82 1.60 1.92
	
	//	�����
	//	1.75


	//����һ  Ӳ��
	float a, b, c, d, e;
	scanf("%f%f%f%f%f%f", &a, &b, &c, &d, &e);
	printf("%.2f\n", (a + b + c + d + e) / 5.0);



	// ������  ���ǽ϶� ��Щ�±�


	float arr[5], sum = 0.0, ave = 0.0;
	int i;
	for (i = 0; i < 5; i++)
	{
		scanf("%f", &arr[i]);
		sum = sum + arr[i];
	}
	ave = sum / i;
	printf("%.2f", ave);







	//����
		// = f(x)����x < 0ʱ��y = 1����x = 0ʱ��y = 0����x > 0ʱ��y = -1��

		//����������
		//һ�У�����һ������x���� - 10000 < x < 10000��
		//���������
		//һ�У����y��ֵ��
	int x;
	scanf("%d", &x);
	peirnf("%d\n", f(x));





	int i;
	int a = 2;
	for (i = 0; i < 5; i++)
	{
		printf("%d,", sum(a));//�������н���Ƕ���
	}



	return 0;

}