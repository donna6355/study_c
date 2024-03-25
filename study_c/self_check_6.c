#include <stdio.h>

void square(int *val);
int main()
{
  /*
  declare the function of square that passes pointer address of integer and returns nothing
  if the integer is odd number, it returns as it is. otherwise, it returns square value.
  initially it has integer array from 1 to 10;
  loop the whole array through square function and print the final value or integer array
  */

  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  for (int i = 0; i < 10; i++)
  {
    printf("initial value of arr[%d]=%d\n", i, arr[i]);
    square(&arr[i]);
    printf("final value of arr[%d]=%d\n", i, arr[i]);
  }

  return 0;
}

void square(int *val)
{
  if (*val % 2 == 0)
  {
    *val = *val * *val;
  }
}