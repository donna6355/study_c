#include <stdio.h>

int main()
{
  int subway_array[3]; // the size of array must be constant value;
  subway_array[0] = 15;
  subway_array[1] = 18;
  subway_array[2] = 32;

  for (int i = 0; i < 3; i++)
  {
    printf("there are %d people on the Train #%d\n", subway_array[i], i + 1);
  }

  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int dummy_arr[10];
  int half_arr[10] = {1, 2, 3};

  for (int i = 0; i < 10; i++)
  {
    printf("!ASSINGED ARR! there are %d on the idx%d\n", arr[i], i + 1);
  }
  for (int i = 0; i < 10; i++)
  {
    printf("!ANASSINGED ARR! there are %d on the idx%d\n", dummy_arr[i], i + 1);
  }
  for (int i = 0; i < 10; i++)
  {
    printf("!HALF_ASSINGED ARR! there are %d on the idx%d\n", half_arr[i], i + 1);
  }

  char c = 'A'; // charater with single quote
  printf("character is %c\n", c);

  char str[6] = "isaac"; // string with double quote
  printf("string is %s\n", str);
  printf("string size is %d\n", sizeof(str));
  // size of string has to be +1 for the null(\0) endian
  char kor[] = "김미르"; // you can skip size of string array and it will be automatically assigned
  printf("Kor string is %s\n", kor);
  printf("Kor string size is %d\n", sizeof(kor));

  char c_array[] = {'i', 's', 'a', 'a', 'c', '\0'};
  printf("%s\n", c_array);
  printf("ASCII code : %d\n", c_array[0]);

  return 0;
}