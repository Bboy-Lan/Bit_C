#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//С��������ٷ��Ƴɼ������뽫�ɼ�ת���ɵȼ��ơ�ת������Ϊ��90-100Ϊ��A����80-89Ϊ��B����70-79Ϊ��C����60-69Ϊ��D����59����Ϊ��E�����������ĳɼ�����0-100֮�䣬�����F��

//��Щʱ�� ��ϲ�������⸴�ӻ���� ...����������ܼ�
void test(int input)
{
    if (0 <= input && input <= 5)//���滹�� ������0-100��û������ -1 ~ -10  101~109 զ���
    {
        printf("E");
    }
    else (6 <= input && input <= 10);// 60-100
    {
        if (input == 6)// 60-69
            printf("D");
        else if (input == 7)//70-79
            printf("C");
        else if (input == 8)//80-89
            printf("B");
        else if (input == 9 || input == 10)//90-100  100/10 =10  ���� �߼��� ||
            printf("A");
    }
}
int main()
{
    int input;
    scanf("%d", &input);
    if (input < 0)//һ��ʼ���ж����� �� �ǲ��� ���� 1-100֮����� ��Ȼ ȡģ�ķ����Ͳ���
        //���ٿ���  -1 ~ -10  101~109 �Ĳ��� 
    {
        printf("F");
        return 0;
    }
    else if (input > 100)
    {
        printf("F");
        return 0;
    }
    else
        input = input / 10;//����д�õ�����  78 / 10 =7
    test(input);
    return 0;
}