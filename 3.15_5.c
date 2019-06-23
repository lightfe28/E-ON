#include <stdio.h>

void main(void) {

	int increase_num = 1, repititive, test;

	while (1) {     //무한루프 
		test = 1;
		for (repititive = 1; repititive <= 20; repititive++) { // 1부터20까지 반복한다.
			if (increase_num % repititive != 0) {    //1~20까지 한개라도 나누어떨어지지 않으면
				test = 0;       //test에 0 넣고 반복종료
				break;
			}
		}
		if (test == 1) {  //모두 떨어지는 수가 생기면
			break; // break를 써서 탈출
		}
		increase_num++;
	}

	printf("%d\n", increase_num);
}
