/*���� 1. ���̾Ƹ��
�߰� �κ��� *�� ����(Ȧ��)�� �Է¹ް�
���̾Ƹ�尡 ��µǴ� ���α׷��� �����Ͻÿ�.
*/
#include <stdio.h>
int main(void)
{
       int number;
       scanf("%d", &number);
       for_sentence(number);
       
}
int for_sentence(number)
{
       int i, j, count;
       for (i = 1; i <= number; i = i + 2) {
              count = number - (number - i);
              for (j = 1; j <= (number - count) / 2; j++)
              {
                      printf(" ");
              }
              for (j = 1; j <= count; j++) {
                      printf("*");
              }
              printf("\n");
       }
       for (i = (number - 2); i >= 1; i = i - 2)
       {
              for (j = 1; j <= (number - i) / 2; j++)
              {
                      printf(" ");
              }
              for (j = 1; j <= i; j++)
              {
                      printf("*");
              }
              printf("\n");
       }
       return 0;
}