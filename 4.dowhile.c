/*
 * ��˾��XXXX
 * ���ߣ�Rston
 * ��Ŀ������ṹ��do while 
 */
#include <stdio.h>

int main(int argc, char **argv)
{
	int i = 1, sum = 0;
	
	do 
	{
		printf("i = %d.\n", i);
		sum += i;
		i += 2;
	}while (i < 100); // �ر�ע��������Ҫ���Ϸֺ�
	printf("sum = %d.\n", sum);
	
	return 0;
}