/*문제 1. 다이아몬드
중간 부분의 *의 개수(홀수)를 입력받고
다이아몬드가 출력되는 프로그램을 구성하시오.
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