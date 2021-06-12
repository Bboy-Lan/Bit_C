#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//小乐乐输入百分制成绩，他想将成绩转换成等级制。转换规则为：90-100为’A’，80-89为’B’，70-79为’C’，60-69为’D’，59以下为’E’。如果输入的成绩不在0-100之间，输出’F’

//有些时候 就喜欢把问题复杂化解决 ...这道题明明很简单
void test(int input)
{
    if (0 <= input && input <= 5)//后面还有 不属于0-100的没有讨论 -1 ~ -10  101~109 咋解决
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
        else if (input == 9 || input == 10)//90-100  100/10 =10  得用 逻辑或 ||
            printf("A");
    }
}
int main()
{
    int input;
    scanf("%d", &input);
    if (input < 0)//一开始就判断输入 的 是不是 不在 1-100之间的数 不然 取模的方法就不对
        //会少考虑  -1 ~ -10  101~109 的部分 
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
        input = input / 10;//这样写得到整数  78 / 10 =7
    test(input);
    return 0;
}