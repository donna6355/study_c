#include <stdio.h>
void updatePw(int house, int *pointerAdd);
void updatePwAddr(int *house, int *pointerAdd);

int main()
{
  int david = 1;
  int simon = 2;
  int eva = 3;

  printf("david's pw is %d, and pointer is %p\n", david, &david); // & ampersand to indicate variable's pointer
  printf("simon's pw is %d, and pointer is %p\n", simon, &simon);
  printf("eva's pw is %d, and pointer is %p\n", eva, &eva);

  int *pointerAdd; // * asterisk between type and variable to assign pointer!
  pointerAdd = &david;
  printf("pointerAdd has %p, and its pw is %d\n", pointerAdd, *pointerAdd); // * asterisk to print pointer's value
  pointerAdd = &simon;
  printf("pointerAdd has %p, and its pw is %d\n", pointerAdd, *pointerAdd);
  pointerAdd = &eva;
  printf("pointerAdd has %p, and its pw is %d\n", pointerAdd, *pointerAdd);

  updatePw(david, pointerAdd);
  updatePw(simon, pointerAdd);
  updatePw(eva, pointerAdd);

  updatePwAddr(&david, pointerAdd);
  updatePwAddr(&simon, pointerAdd);
  updatePwAddr(&eva, pointerAdd);

  pointerAdd = &david;
  *pointerAdd = *pointerAdd * 3;
  printf("pointerAdd has %p, and its pw is %d\n", pointerAdd, *pointerAdd);

  printf("==========bug is coming============\n");
  int *bug = pointerAdd;
  *bug = *bug - 1;

  printf("bug occurs at %p, pw is now %d\n", bug, *bug);
  printf("david's pw is %d, and pointer is %p\n", david, &david);

  int arr[3] = {5, 10, 15};
  int *arrPointer = arr;
  for (int i = 0; i < 3; i++)
  {
    printf("number %d is in the arr[%d]\n", arr[i], i);
  }
  for (int i = 0; i < 3; i++)
  {
    printf("number %d is in the arrPointer[%d]\n", arrPointer[i], i);
  }
  printf("size of arr is %d\n ", sizeof(arr));
  /*
  arr == &arr[0]; // arr is technically pointer!
  *(arr+i) == arr[i];
  */

  return 0;
}

void updatePw(int house, int *pointerAdd)
{
  // call by value, fn only receives the value not address (pointer).
  // create new var and assign argument value only;
  /// therefore the original var never changes!!
  pointerAdd = &house;
  *pointerAdd = *pointerAdd * 2;
  printf("pointerAdd has %p, and its pw is %d\n", pointerAdd, *pointerAdd);
}
void updatePwAddr(int *house, int *pointerAdd) // call by reference, must call by pointer, then the original var changes
{
  pointerAdd = house;
  *pointerAdd = *pointerAdd * 2;
  printf("pointerAdd has %p, and its pw is %d\n", pointerAdd, *pointerAdd);
}