#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a[10];
	int i, j;
	int temp;
	////////��ܪ��
	printf("�п�J10�Ӿ��:");
	for (j = 0; j < 10; j++)
	{
		scanf_s("%d", &a[j]);
	}
	////////��ܹL�{
	for (i = 0; i < 9; i++)
	{
		printf("\n\n");
		for (j = 0; j < 9; j++)
		{
			if (a[j] > a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
		printf("(%d)",i+1);
		for (j = 0; j < 10; j++)
		{
			printf("%d ", a[j]);
		}
		if ((a[0]< a[1]) && (a[1]< a[2]) && (a[2]< a[3]) && (a[3]< a[4]) && (a[4]< a[5]) && (a[5]< a[6]) && (a[6]< a[7]) && (a[7]< a[8]))
			break;
	}
	////////��ܵ��G
	printf("\n\n���G�����Ǭ�:");
	for (j = 0; j < 10; j++)
	{
		printf("%d ", a[j]);
	}

	system("pause");
	return 0;
}