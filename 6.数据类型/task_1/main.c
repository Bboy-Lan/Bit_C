
//0.  0. ���⣺�� 1^2 + 2^3 + 3^4 + 4^5 + 5^6 ��ֵ����1^2 ��ʾ 1 �� 2 �η���


#include <stdio.h>
#include <math.h>

int main()
{
        int result1,result2,result3,result4,result5;
		int addition;
		
        result1 = pow(1, 2);
		result2 = pow(2, 3);
		result3 = pow(3, 4);
		result4 = pow(4, 5);
		result5 = pow(5, 6);
	
		addition = (result1+result2+result3+result4+result5);
        printf("result = %d\n", addition);
		system("pause");
        return 0;
}


//�Ա��� ���δ���  ����֪��  ˼������׳̶�
#include <stdio.h>
#include <math.h>

int main()
{
        int result;
        result = pow(1, 2) + pow(2, 3) + pow(3, 4) + pow(4, 5) + pow(5, 6);

        printf("����ǣ�%d\n", result);
		system("pause");
        return 0;
}