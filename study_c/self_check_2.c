#include <stdio.h>

int main()
{
  // 이중 반복문을 이용하여 별표를 역 피라미드 모양으로 찍기

  for (int i = 5; i > 0; i--)
  {
    for (int k = i; k > 0; k--)
    {
      printf("*");
    }
    printf("\n");
  }

  return 0;
}