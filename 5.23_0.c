#include<stdio.h>

void palindrome(char word[]) {
	int front,  test= 0;
	int length;

	length = strlen(word);  //���ڿ��� ���̸� ��Ÿ���� �Լ� strlen

	for (front = 0; front < length / 2; front++) {			//�պκ��̶� �޺κ��̶� ��
		if (word[front] != word[length - 1 - front]) {		
			test = 1;
		}
	}
	if (test == 0) {
		printf("ȸ���Դϴ�. \n\n");
	}
	else {
		printf("ȸ���� �ƴմϴ�. \n\n");
	}
}

int main() {
	char word[100]; //�迭�� ���, 100���� ������ ����

	printf("���ڿ��� �Է��ϼ��� :");
	gets(word); //gets�Լ��� �̿��� ���� �Է�

	palindrome(word); //�Լ� ȣ��
}
