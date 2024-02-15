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

//如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。
int main() {
	int i = 0, j = 0;//表示行数 列数
	int n = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%.2d  ", i, j, i * j);
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



# 递归

1. 递归-接受一个整型数值，按顺序打印它的每一位

```c
void print(int num)
{
	//结束条件  并且是按顺序打印
	if (num > 9)
	{
		print(num / 10);
	}
	printf("%d ", num % 10);
}

//递归-接受一个整型数值，按顺序打印它的每一位
int main()
{
	unsigned int num;
	scanf("%d", &num);
	print(num);
	//1234  1234 % 10 = 4  1234 / 10 = 123 
	return 0;
}
```

2. 编写一个函数 不允许创建临时变量 求字符串的长度

```c
//解法一： 普通求解
int my_strlen1(char* s)
{
	int num = 0;
	while (*s != '\0')
	{
		num++;
		s++;//指针自加也相当于地址自加
	}
	return num;
}

//解法二： 递归求解 - 不建议在递归中写 s++ ++s 易错
int my_strlen2(char * s)
{
	//判断是否是 \0  比如 abc  1 + my_strlen2（bc）... ...
	if (*s != '\0')
	{
		return 1 + my_strlen2(s + 1);
	}
    else
		return 0;
}

//编写一个函数 不允许创建临时变量 求字符串的长度
int main()
{
	char arr[] = "abcdef";//长度为 6
	int len1 = 0,len2 = 0;

	len1 = my_strlen1(arr);
	printf("%d\n", len1);

	len2 = my_strlen2(arr);
	printf("%d\n", len2);
	return 0;
}
```

3. 递归求n的阶乘

```c
//递归实现 n的阶乘
int main()
{
	int num = 1, i = 0;
	int n = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		num = num * i;
	}
	printf("%d\n", num);
	return 0;
}

int fac(int n)//求某个数的阶乘
{
	int num = 1, i = 0;
	for (i = 1; i <= n; i++)
	{
		num = num * i;
	}
	return num;
}
int fac1(int n)
{
	if (n <= 1)
		return 1;
	else
		return n * fac1(n - 1);
}

// n 个阶乘的和 1! + 2! + 3! + ...
int main()
{
	int sum = 0, i = 0;
	int n = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		sum = sum + fac(i);
	}
	printf("%d\n", sum);
	printf("%d\n", fac1(n));

	return 0;
}
```

4. 求斐波拉契数列

   ```c
   int count = 0;
   int Fib1(int num)
   {
   	if (num == 3)//查看某一步的重复计算次数
   	{
   		count++;
   	}
   	if (num <= 2)
   		return 1;
   	else
   		return Fib1(num - 1) + Fib1(num - 2);
   }
   
   int Fib2(int num)//非递归求法  可以将它记住 
   {
   	int a = 1;
   	int b = 1;
   	int c = 1;
   	while (num > 2)//清楚如何推断的
   	{
   		c = a + b;  // 第 n 个数赋值 n-2次  第3个数赋值1次 ... ... 
   		a = b;
   		b = c;
   		num--;
   	}
   	return c;
   }
   //斐波拉契函数 1 1 2 3 5
   int main()
   {
   	int ret1 = Fib1(40);
   	int ret2 = Fib2(40);
   	printf("%d\n", ret1);
   	printf("%d\n", ret2);
   	printf("其中3的重复计算次数为：%d\n", count);
   	return 0;
   }
   ```

   5. 求字符串长度
   
   ```c
   //自定义 求字符串长度函数
   int my_strlen(char* arr)
   {
   	if (*arr != '\0')
   		return 1 + my_strlen(arr + 1);
   	else
   		return 0;
   }
   //递归实现 - 有些难理解
   void reverse_string1(char* arr)
   {
   	int len = my_strlen(arr);
   	char temp = arr[0];
   	// 先处理交换 再调用交换
   	arr[0] = arr[len - 1];
   	arr[len - 1] = '\0';//为啥放 \0 因为放了之后直接就能 从 \0 开始 截取一段字符串 f bcde\0 \0
   
   	if (my_strlen(arr + 1) >= 2)//不能直接用len 来判断 因为每一次长度都在发生改变  要要注意这个递归的结束条件
   		reverse_string1(arr + 1);//不是 减 1
   	arr[len - 1] = temp;
   
   }
   //非递归实现
   void reverse_string2(char* arr)
   {
   	int len = my_strlen(arr);
   	int left = 0;
   	int right = len - 1;
   	while (left < right)
   	{
   		int temp = arr[left];
   		arr[left] = arr[right];
   		arr[right] = temp;
   		left++;
   		right--;
   	}
   }
   //反转字符串
   int main()
   {
   	char arr[] = "abcdef";
   	//int len = sizeof(arr) / sizeof(arr[0]);
   	reverse_string1(arr);
   	//for (int i = 0; i < len; i++)
   	//{
   	//	printf("%c", arr[i]);
   	//}
   	printf("%s", arr);//不需要循环 直接打印即可
   	return 0;
   }
   ```
   
   6. 写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
   
   ```c
   //写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
   int DigitSum(int n)
   {
   	if (n > 9)
   		return n % 10 + DigitSum(n / 10);
   	else
   		return n;
   }
   int main() 
   {
   	int n = 0;
   	scanf("%d", &n);//1234--10
   	printf("%d\n", DigitSum(n));
   	return 0;
   }
   ```
   
   7. 编写一个函数实现n的k次方，使用递归实
   
   ```c
   //k 值需要讨论  > 0   < 0  = 0
   int fac(int n, int k)
   {
   	if (k > 0)
   		return n * fac(n, k - 1);
   	else if (k < 0)
   		return 1.0 / n * fac(n, k - 1);
   	else// 等于0
   		return 1;
   }
   //编写一个函数实现n的k次方，使用递归实现 
   int main()
   {
   	int n = 0, k = 0;
   	scanf("%d%d", &n, &k);
   	printf("%d的%d次方结果为:：%d\n", n, k, fac(n, k));
   	return 0;
   }
   ```
   







# 项目

## 三子棋



# 易错知识汇总

1. 字符串中的 \0 虽然算个数时不占位置 但是放数组里面需要占一个位置

1. 如何函数封装成 **.lib** （静态库）文件格式  （位置别放错）

1. srand 函数如何生成随机数

1. **栈区**：局部变量 形式参数  **堆区**：动态内存分配 malloc calloc realloc free  **静态区**：全局变量 静态变量

1. 数组名是否是首元素地址，两个例外：

   1. sizeof（数组名）此处表示的是整个数组 

   2. &数组名 也表示整个数组，指整个数组的地址

```c
//数组名是否是首元素地址
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//意义不同 虽然都是  012FF744
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);//这两个都表示首元素地址

	printf("%p\n", &arr);//表示数组地址

	printf("--------------------\n");
	printf("%p\n", arr + 1);
	printf("%p\n", &arr[0] + 1);// 012FF748  起始地址 + 4

	printf("%p\n", &arr + 1);//012FF76C 指向数组的指针 直接跳过整个数组 因此相差 40 

	return 0;
}
```

```c
//输出 40 10  4 4
void test1(int arr[]) // int * arr
{
	printf("%d\n", sizeof(arr));//(2)
}
void test2(char ch[]) // char * ch
{
	printf("%d\n", sizeof(ch));//(4)  指针变量的大小为 4/8
}
int main()
{
	int arr[10] = { 0 };
	char ch[10] = { 0 };
	printf("%d\n", sizeof(arr));//(1)
	printf("%d\n", sizeof(ch));//(3)

	test1(arr);//降级为首元素地址
	test2(ch);
	return 0;
}
```



6.  **按位 |   &   ^**

   按位与 |：只有两个数的二进制同时为1，结果才为1，否则为0。（负数按补码形式参加按位与运算）

   按位或 &：参加运算的两个数只要两个数中的一个为1，结果就为1。

   按位异或 ^：参加运算的两个数，如果两个相应位为“异”（值不同），则该位结果为1，否则为0。

```c
int main()
{
	int a = 13;
	a |= (1 << 1);
	printf("%d\n", a);//15

	a &= ~(1 << 1);
	printf("%d\n", a);//13
	//将 13 变成 15  
	//00000000 00000000 00000000 00001101
	//00000000 00000000 00000000 00000010   按位或 |  有 1 为 1
	//00000000 00000000 00000000 00001111

	//将15变成13
	//00000000 00000000 00000000 00001111
	//11111111 11111111 11111111 11111101   按位与 &  同 1 为 1
	//00000000 00000000 00000000 00001101
	return 0;
}
```

7. 注意 在编程的过程中== 和=不小心写错，导致的错误  

   
