#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>


int main() {
	char input[20] = { 0 };
	system("shutdown -s -t 60");

	while (1) {
		printf("��ĵ��Խ���60s�ڹػ������� ������ ���ɽ��!\n");
		scanf("%s", &input);
		if (strcmp(input, "������") == 0)
		{
			system("shutdown -a");
			break;
		}
		else
			printf("�������������!\n");
	}
	return 0;
}


////goto ���
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
//		printf("����������->:\n");
//		scanf("%s", password);
//		if (strcmp(password, "abcdef") == 0)
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else
//			printf("�������\n");
//	}
//	if (3 == i)
//		printf("��������������󣬵�¼����\n");
//	return 0;
//}






////����Ч��
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






////���ֲ���-��������
//int main() {
//	int arr[10] = { 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 };
//	int k = 0, mid = 0;//kΪ�����ҵ�����
//	scanf("%d", &k);
//	int left = 0;//���ұ߽� ���±� 0 ��ʼ
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
//		printf("�ҵ�Ԫ��λ��Ϊ��%d\n", mid);
//	else 
//		printf("�Ҳ���������\n");
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
//			printf("ֵΪ%d���±�Ϊ:%d\n",k,i);
//			break;
//		}
//	}
//	if (i >= num)
//		printf("û�ҵ���Ԫ��\n");
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
//	//���� n �Ľ׳� �Լ� n ���׳˵ĺ�
//	int n = 0;
//	int sum1 = 1;
//	int number1 = 0, number2 = 0;
//	scanf("%d", &n);
//	for (int i = 1; i < n + 1; i++) {
//		sum1 = sum1 * i;
//		number1 = sum1 + number1;
//		number2 = number2 + func(i);
//	}
//	printf("%d�Ľ׳��ǣ�%d\n", n, sum1);
//	int sum2 = func(n);
//	printf("%d�Ľ׳��ǣ�%d\n", n, sum2);
//	printf("%d�Ľ׳˺��ǣ�%d\n", n, number1);
//	printf("%d�Ľ׳˺��ǣ�%d\n", n, number2);
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
//	//������ѭ������ �ı�ѭ������ i ... ...
//	//Ҳ��Ҫʡ������
//	for (; i < 10; i++)
//		for (; j < 10; j++)// ֻ ѭ��10��
//			printf("haha ");
//	return 0;
//}

//int main() {
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("����������->:\n");
//	scanf("%s", password);//scanfֻ�ܶ�ȡ���ո�ǰ��
//	//getchar() ����ȡ ���� abcdef 12345\n
//
//	while ((ch = getchar() ) != '\n')
//	{
//		;//�ѻ��������������ȫ������ ���Ӱ������ ȷ�� 
//	}
//
//	printf("��ȷ������-> Y/N:\n");
//	//ע�����뻺���� ������Ҫ���� \n
//
//	ch = getchar();
//	if ('Y' == ch) {
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
//	}
//	return 0;
//}



//int main() {
//	int ch = 0;
//	//ע�� Ϊʲô��������
//	while ((ch = getchar()) != EOF) {//Ctrl + Z ����
//		putchar(ch);
//	}
//	return 0;
//}

//int main() {
//	int i = 1;
//	while (i <= 10) {
//		if (5 == i)
//			continue;//continue break ���� ��������ѭ������ ����ѭ��
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
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("����\n");
//		break;
//	case 7:
//		printf("��ĩ\n");
//		break;
//	default:
//		printf("�������\n");
//		break;
//	}
//	return 0;
//}

//int main() {
//	//ע�������д�淶���ϴ�����
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
//    scanf("%d", &n);//��һ�� ���� n
//    for (int i = 0; i < n; i++) {
//        scanf("%d ", &a[i]);//�ڶ��� ���� n ����
//    }
//    scanf("%d", &x);//������ ������Ҫ�鿴���ִ���������
//    for (int i = 0; i < n; i++) {
//        if (x == a[i])
//            sum++;
//    }
//    printf("%d\n", sum);// x ���ֵĴ���
//    return 0;
//}