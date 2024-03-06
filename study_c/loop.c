#include <stdio.h>
int main()
{
  int a = 10;
  printf("a is %d\n", a);
  printf("after a++, a is %d\n", a++);
  printf("a is %d\n", a);
  printf("after ++a, a is %d\n", ++a);
  printf("a is %d\n", a);

  for (int i = 0; i < 10; i++)
  {
    printf("for loop from %d\n", i + 1);
  }

  int i = 0;
  while (i < 10)
  {
    printf("while loop from %d\n", i + 1);
    i++;
  }

  do
  {
    printf("do while loop from %d\n", i + 1);
    i++;
  } while (i < 10);

  for (int i = 2; i <= 5; i++)
  {
    printf("Multiple chart for %d\n", i);
    for (int k = 1; k <= 9; k++)
    {

      printf("%d x %d = %d\n", i, k, i * k);
    }
  }

  return 0;
}