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
	printf("============메뉴============\n");
	printf("PUSH : 1\n");
	printf("POP : 2\n");
	printf("SHOW : 3\n");
	printf("(종료 하려면 1,2,3 이외의 수 입력하세요)\n\n");
	while (1)
	{
		printf("메뉴를 입력하세요");
		scanf("%d", &number);

		if (number == 1)
		{
			count++;
			if (count > 9)
			{
				printf("배열개수가 초과되었습니다.");
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
			printf("==========프로그램을 종료합니다==========.");
			break;
		}

	}


}
int push(void)
{
	int input;
	printf("수 입력:");
	scanf("%d", &input);
	return input;
}