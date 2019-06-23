#include <stdio.h>

int main(void)
{
	int i = 0, isum = 0; //i, isum 선언
	for (i = 0; i < 1000; i++) {     //for문을 통해서 a의 초기값 설정하고 1000보다 작은 자연수를 설정
		if (((i % 3) == 0) || ((i % 5) == 0)) // a를 3또는 5로 나누었을 때 나머지가 0인 자연수를 조건으로 설정
			isum = isum + i; //조건문 만족할경우 더한다
	}
	printf("%d", isum); //더한 값 출력

	return 0;
}