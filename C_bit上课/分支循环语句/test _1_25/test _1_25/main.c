#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>


int main() {
	char input[20] = { 0 };
	system("shutdown -s -t 60");

	while (1) {
		printf("你的电脑将在60s内关机，输入 我是猪 即可解除!\n");
		scanf("%s", &input);
		if (strcmp(input, "我是猪") == 0)
		{
			system("shutdown -a");
			break;
		}
		else
			printf("输入错误，请重试!\n");
	}
	return 0;
}


////goto 语句
//int main() {
//again:
//	printf("haha\n");
//	goto again;
//
//	return 0;
//}




//int main() {
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++) {
//		printf("请输入密码->:\n");
//		scanf("%s", password);
//		if (strcmp(password, "abcdef") == 0)
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else
//			printf("密码错误\n");
//	}
//	if (3 == i)
//		printf("连续三次输入错误，登录锁定\n");
//	return 0;
//}






////渐变效果
//int main() {
//	char arr1[] = "###################";
//	char arr2[] = " hello world...... ";
//
//	int len = strlen(arr1);
//	int left = 0;
//	int right = len - 1;
//
//	while (left <= right) {
//		arr1[left] = arr2[left];
//		arr1[right] = arr2[right];
//		system("cls");
//		printf("%s", arr1);
//		Sleep(500);
//		left++;
//		right--;
//	}
//	return 0;
//}






////二分查找-有序数组
//int main() {
//	int arr[10] = { 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 };
//	int k = 0, mid = 0;//k为被查找的数字
//	scanf("%d", &k);
//	int left = 0;//左右边界 从下标 0 开始
//	int right = (sizeof(arr) / sizeof(arr[0])) - 1;
//	while (left <= right) 
//	{
//		mid = (left + right) / 2;
//		if (k < arr[mid])
//			right = mid - 1;
//		else if (k > arr[mid])
//			left = mid + 1;
//		else 
//			break;
//	}
//	if(right >= left)
//		printf("找到元素位置为：%d\n", mid);
//	else 
//		printf("找不到该数字\n");
//	return 0;
//}





//int main() {
//
//	int arr[10] = { 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10};
//	int k = 18;
//	int i = 0;
//	int num = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < num; i++)
//	{
//		if (k == arr[i]) {
//			printf("值为%d的下标为:%d\n",k,i);
//			break;
//		}
//	}
//	if (i >= num)
//		printf("没找到该元素\n");
//	return 0;
//}




//int func(int n) {
//	if (1 == n)
//		return 1;
//	else
//		return func(n - 1) * n;
//}
//
//int main(){
//	//计算 n 的阶乘 以及 n 个阶乘的和
//	int n = 0;
//	int sum1 = 1;
//	int number1 = 0, number2 = 0;
//	scanf("%d", &n);
//	for (int i = 1; i < n + 1; i++) {
//		sum1 = sum1 * i;
//		number1 = sum1 + number1;
//		number2 = number2 + func(i);
//	}
//	printf("%d的阶乘是：%d\n", n, sum1);
//	int sum2 = func(n);
//	printf("%d的阶乘是：%d\n", n, sum2);
//	printf("%d的阶乘和是：%d\n", n, number1);
//	printf("%d的阶乘和是：%d\n", n, number2);
//	return 0;
//}


//int main() {
//	int i = 1;
//	do {
//		if (5 == i)
//			continue;
//		printf("hahaha\n");
//		i++;
//	} while (i <= 10);
//	return 0;
//}

//int main() {
//	int i = 0;
//	int j = 0;
//	//不可在循环体内 改变循环变量 i ... ...
//	//也不要省略条件
//	for (; i < 10; i++)
//		for (; j < 10; j++)// 只 循环10次
//			printf("haha ");
//	return 0;
//}

//int main() {
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("请输入密码->:\n");
//	scanf("%s", password);//scanf只能读取到空格前列
//	//getchar() 不可取 形如 abcdef 12345\n
//
//	while ((ch = getchar() ) != '\n')
//	{
//		;//把缓冲区里面的内容全部拿走 免得影响后面的 确认 
//	}
//
//	printf("请确认密码-> Y/N:\n");
//	//注意输入缓冲区 所以需要清理 \n
//
//	ch = getchar();
//	if ('Y' == ch) {
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//	return 0;
//}



//int main() {
//	int ch = 0;
//	//注意 为什么用整数型
//	while ((ch = getchar()) != EOF) {//Ctrl + Z 结束
//		putchar(ch);
//	}
//	return 0;
//}

//int main() {
//	int i = 1;
//	while (i <= 10) {
//		if (5 == i)
//			continue;//continue break 区别 跳过本次循环代码 跳出循环
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//int main() {
//	int day;
//	scanf("%d", &day);
//	switch (day) {
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("周六\n");
//		break;
//	case 7:
//		printf("周末\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//}

//int main() {
//	//注意最好书写规范带上大括号
//	int a = 0;
//	int b = 2;
//	if (a == 1) {
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	}
//	return 0;
//}


//int main() {
//    int x, n, a[100];
//    int sum = 0;
//    scanf("%d", &n);//第一行 输入 n
//    for (int i = 0; i < n; i++) {
//        scanf("%d ", &a[i]);//第二行 输入 n 个数
//    }
//    scanf("%d", &x);//第三行 输入需要查看出现次数的数字
//    for (int i = 0; i < n; i++) {
//        if (x == a[i])
//            sum++;
//    }
//    printf("%d\n", sum);// x 出现的次数
//    return 0;
//}