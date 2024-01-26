# 上课代码

1.闰年计算方式：

```c
//打印1000年到2000年之间的闰年
//闰年的条件：如果N能够被4整除，并且不能被100整除，则是闰年
//或者：N能被400整除，也是闰年
//即：4年一润并且百年不润，每400年再润一次

int main() {
	int i = 0;
	for (i = 1000; i <= 2000; i++) {
		if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
			printf("%d ", i);
	}
	return 0;
}
```

2.最大公约数的求解方法：**辗转相除法**

```c
//给定两个数，求这两个数的最大公约数

int main() {
	int a, b, c;
	scanf("%d%d", &a, &b);
	while (a % b != 0)
	{
		c = a % b;
		a = b;
		b = c;
	}
	printf("%d\n", b);
	return 0;
}
```

```c
//求解最大公约数 暴力方法 一个一个试
int main() {
	int a = 0, b = 0;
	scanf("%d%d", &a, &b);
	int m = a < b ? a : b;
	while (1) {
		if (a % m == 0 && b % m == 0)
		{
			printf("最大公约数为：%d\n", m);
			break;
		}
		m--;
	}
	return 0;
}
```

3.打印素数 

```c
//写一个代码：打印100~200之间的素数
//素数：质数又称素数 一个大于1的自然数，除了1和它自身外，不能被其他自然数整除的数叫做质数
int main() {
	int i = 0,j = 0;
	for (i = 100; i <= 200; i++)
	{		
		for (j = 2; j < i; j++)// j 跟着 i 走  也可以 <=sqrt(i)
		{
			if (i % j == 0)
				break;
		}
		if(i == j)
			printf("%d ", i);
	}
	return 0;
}
```

4.打印数字9的个数

```c
//编写程序数一下 1到 100 的所有整数中出现多少个数字9

int main() {
	int i = 0;
	int num = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i > 0 && i < 90)
		{
			if (i % 10 == 9)
			{
				printf("%d ", i);
				num++;
			}
		}
		else
		{
			printf("%d ", i);
			num++;
		}
	}
	printf("9的出现次数为:%d\n", num);
	return 0;
}
```

5.计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果

```c
//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
int main() {
	float num = 0.0;
	int i = 0;
	for (i = 1; i <= 100; i++) 
	{
		if (i % 2 != 0)//奇数为正
			num = num + 1.0 / i;//还能设置flag为符号每次正负变换
		else//偶数为负
			num = num - 1.0 / i;
	}
	printf("%f\n", num);
	return 0;
}
```

6.三个数从小到大输出

```c
//写代码将三个整数按从大到小输出 
//无语了 这种代码居然想半天 反思反思！！！

int main() {
	int a, b, c;//将 a b c 定作最终方向
	int mid;
	scanf("%d%d%d", &a, &b, &c);
	if (a < b) {
		mid = a;
		a = b;
		b = mid;
	}
	if (a < c)
	{
		mid = a;
		a = c;
		c = mid;
	}
	if (b < c)
	{
		mid = b;
		b = c;
		c = mid;
	}

	printf("%d %d %d\n", a, b, c);
	return 0;
}
```

7.在屏幕上输出9*9乘法口诀表

```c
//在屏幕上输出9*9乘法口诀表
int main() {
	int i, j, k;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)// j 跟着 i走 一行一行的打印
		{
			printf("%d*%d=%.2d ",i,j,i*j);//此处 .2d 空位用0补充 和 2d 空位直接空格 的区别
		}
		printf("\n");
	}
	return 0;
}
```

8.猜数字游戏

```c
#include<time.h>//srand 设置随机数会用到
//猜数字游戏
void menu() {
	printf("##############\n");
	printf("### 1.PLAY ###\n");
	printf("### 0.EXIT ###\n");
	printf("##############\n");
}

void game() {
	int guess = 0;
	int ret = rand() % 100 + 1;//设置随机数 1-100 之间
	while (1) 
	{
		printf("请输入:> ");
		scanf("%d", &guess);
		if (guess > ret)
			printf("猜大了\n");
		else if (guess < ret)
			printf("猜小了\n");
		else
		{
			printf("恭喜你，猜对了！\n");
			break;
		}
	}
}

int main() {
	int input = 0;
	srand((unsigned int)time(NULL));
	do {
		menu();//打印菜单
		printf("请选择:> ");
		scanf("%d", &input);
		switch (input) {
		case 0:
		{
			printf("游戏结束!\n");
			break;
		}
		case 1:
		{
			game();//猜数字游戏主体函数
			break;
		}
		default:
		{
			printf("输入错误!\n");
			break;
		}
	}
	}while (input);
	return 0;
}
```







# 排序算法

## 1.冒泡排序

```c
//求10 个整数中最大值-冒泡排序
int BubbleSort(int arr[], int n) {
	int i = 0, j = 0;
	int flag = 0;//表示有没有发生交换

	for (i = 0; i < n-1; i++) {//循环执行 n-1 次
		for (j = n - 1; j > i; j--) {
			flag = 0;
			if (arr[j - 1] > arr[j])//判断是否逆序
			{
				int temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
				flag = 1;
			}
		}
	}
	if (flag == 0)
		return arr[n - 1];

}
int main() {
	int arr[] = { 1,5,88,6,9,8,7,5,4,8,9};
	int n = sizeof(arr) / sizeof(arr[0]);//求数组元素个数
	int max = 0;
	max = BubbleSort(arr, n);
	printf("%d\n", max);

	return 0;
}
```