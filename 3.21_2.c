#include<stdio.h>
int main(void)
{
	int i, number, count=-1, numarry[10];

	printf("============�޴�============\n");
	printf("PUSH : 1\n");
	printf("POP : 2\n");
	printf("SHOW : 3\n");
	printf("(���� �Ϸ��� 1,2,3 �̿��� �� �Է��ϼ���)\n\n");
	while (1)
	{
		printf("�޴��� �Է��ϼ���");
		scanf("%d", &number);

		if (number == 1)
		{
			count++;
			if (count > 9)
			{
				printf("�迭������ �ʰ��Ǿ����ϴ�.");
				printf("%d\n", count);
			}
			numarry[count] = push();
		}
		else if (number == 2)

		{
			numarry[count] = numarry[count + 1];
			count--;
		}
		else if (number == 3)
		{
			for (i = 0; i <= count; i++)
			{
				printf("%d\n", numarry[i]);
			}

		}
		else
		{
			printf("==========���α׷��� �����մϴ�==========.");
			break;
		}

	}


}
int push(void)
{
	int input;
	printf("�� �Է�:");
	scanf("%d", &input);
	return input;
}