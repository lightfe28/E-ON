#include<stdio.h>

void palindrome(char word[]) {
	int front,  test= 0;
	int length;

	length = strlen(word);  //문자열의 길이를 나타내는 함수 strlen

	for (front = 0; front < length / 2; front++) {			//앞부분이랑 뒷부분이랑 비교
		if (word[front] != word[length - 1 - front]) {		
			test = 1;
		}
	}
	if (test == 0) {
		printf("회문입니다. \n\n");
	}
	else {
		printf("회문이 아닙니다. \n\n");
	}
}

int main() {
	char word[100]; //배열을 사용, 100개의 공간을 생성

	printf("문자열을 입력하세요 :");
	gets(word); //gets함수를 이용한 문자 입력

	palindrome(word); //함수 호출
}
