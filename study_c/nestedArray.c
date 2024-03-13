#include <stdio.h>

int main()
{
  int nested[2][5] = {
      {1, 2, 3, 4, 5},
      {6, 7, 8, 9, 10},
  };
  printf("nested[0][3] = %d\n", nested[0][3]); // 4
  printf("nested[1][4] = %d\n", nested[1][4]); // 10

  int possible[][2] = {1, 2, 3, 4};
  // same as {{1,2},{3,4}} automatically assign the size of first empty array

  char str[20] = "sample";
  char *strArray[3];
  strArray[0] = "Mirr";
  strArray[1] = "Isaac";
  strArray[2] = "Kim";
  for (int i = 0; i < 3; i++)
  {
    printf("value from strArray[%d] is %s\n", i, strArray[i]);
  }

  return 0;
}