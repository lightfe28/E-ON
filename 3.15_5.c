#include <stdio.h>

void main(void) {

	int increase_num = 1, repititive, test;

	while (1) {     //���ѷ��� 
		test = 1;
		for (repititive = 1; repititive <= 20; repititive++) { // 1����20���� �ݺ��Ѵ�.
			if (increase_num % repititive != 0) {    //1~20���� �Ѱ��� ����������� ������
				test = 0;       //test�� 0 �ְ� �ݺ�����
				break;
			}
		}
		if (test == 1) {  //��� �������� ���� �����
			break; // break�� �Ἥ Ż��
		}
		increase_num++;
	}

	printf("%d\n", increase_num);
}
