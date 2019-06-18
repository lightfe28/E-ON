#include <stdio.h>
int inRect(int *x, int *y, int *tx1, int *ty1, int *tx2, int *ty2);


void main(void)
{
	int count, *result;
	printf("연산 횟수를 입력하세요 :");
	scanf("%d", &count);
	printf("\n");

	result = (int*)malloc(sizeof(int)*count);


	for (int i = 0; i < count; i++) {
		result[i] = testOverlap();
	}
	

	for (int i = 0; i < count; i++) 
	{
		printf("%d", result[i]);
	}
}



int testOverlap() {
	int box1[4][2], test, box2[4][2];

	printf("box1  x1 y1 x2 y2 순서대로 입력하세요 : ");
	scanf("%d %d %d %d", &box1[0][0], &box1[0][1], &box1[1][0], &box1[1][1]);//
	box1[2][0] = box1[0][0];
	box1[2][1] = box1[1][1];
	box1[3][0] = box1[1][0];
	box1[3][1] = box1[0][1];

	printf("box2  x1 y1 x2 y2 순서대로 입력하세요 : ");
	scanf("%d %d %d %d", &box2[0][0], &box2[0][1], &box2[1][0], &box2[1][1]);
	box2[2][0] = box2[0][0];
	box2[2][1] = box2[1][1];
	box2[3][0] = box2[1][0];
	box2[3][1] = box2[0][1];


	test = 0;
	for (int i = 0; i < 4; i++) {
		test = inRect(&box1[i][0], &box1[i][1], &box2[0][0], &box2[0][1], &box2[1][0], &box2[1][1]);
		if (test == 1) {
			return test;
		}
	}
	for (int i = 0; i < 4; i++) {
		test = inRect(&box2[i][0], &box2[i][1], &box1[0][0], &box1[0][1], &box1[1][0], &box1[1][1]);
		if (test == 1) {
			return test;
		}
	}
	return test;


int inRect(int *x, int *y, int *tx1, int *ty1, int *tx2, int *ty2)
{
	if ((*x >= *tx1 && *x <= *tx2) && (*y >= *ty1 && *y <= *ty2))  // tx1<=x <= tx2 , ty1<= y <= ty2
	{
		return 1;
	}
	else
	{
		return 0;
	}
}