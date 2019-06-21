#include<stdio.h>
#include<stdlib.h>

struct node
{
	int priority;
	int worknumber;
	struct node *next;
};

void moveback(struct node **start, struct node **end);
struct node *delete(struct node *start,int* count);
int comp(struct node *start, struct node *end);

int main(void)
{

	int count1, count2, ivalue, real_high;
	printf("작업의 수를 입력하세요:");
	scanf("%d", &count1);
	printf("\n");
	printf("구하려는 작업 번호를 입력하세요:");
	scanf("%d", &count2);
	printf("\n");

	struct node *start = malloc(sizeof(struct node) * 1); //시작지점
	struct node *end = start;		//끝지점
	for (int c = 0; c < count1; c++)
	{
		scanf("%d", &ivalue);
		end->priority = ivalue; // 우선순위
		end->worknumber = c;//작업번호 

		if (c != count1 - 1)
		{
			end->next = malloc(sizeof(struct node) * 1);
			end = end->next;
		}


	}
	end->next = NULL;

	struct node **new_start, **new_end;
	int test_number, time;
	time = 0;
	test_number = -1;
	new_start = &start;
	new_end = &end;
	while (test_number != count2)
	{

		if (start->next == NULL) {
			break;
		}
		for (int i = 0; i < count1; i++)
		{
			real_high = comp(start, end);
			moveback(new_start, new_end);
		}
		while (real_high != start->priority)
		{
			moveback(new_start, new_end);
		}
		test_number = start->worknumber;
		start=delete(start,&count1);
		time = time + 1;
	}
	printf("\n");
	printf("걸리는 시간은 %d 입니다.", time);
}


void moveback(struct node **start, struct node **end)
{
	(*(end))->next = *start;
	*start = (*(start))->next;
	*end = (*(end))->next;
	(*(end))->next = NULL;
}

struct node *delete(struct node *start,int *count)
{

	struct node *tmp;
	tmp = start;
	start = start->next;
	free(tmp);
	count--;
	return start;
}

int comp(struct node *start, struct node *end)
{

	int high;
	if ((start->priority) < start->next->priority)
	{
		high = start->next->priority;

	}
	else
	{
		high = start->priority;

	}
	return high;
}