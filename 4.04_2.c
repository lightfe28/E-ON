#include<stdio.h>

struct stack 
{
	int y[10];
};

int push(void);

int main(void)
{
	int i, number, count = -1; 
	struct stack *numarray;
	struct stack a;
	numarray = &a;
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
			numarray->y[count] = push();
		}
		else if (number == 2)

		{
			numarray->y[count] = numarray->y[count + 1];
			count--;
		}
		else if (number == 3)
		{
			for (i = 0; i <= count; i++)
			{
				printf("%d\n", numarray->y[i]);
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