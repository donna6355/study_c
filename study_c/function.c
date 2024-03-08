#include <stdio.h>

// declare function
void p(int num);
int add(int numOne, int numTwo);
void testF(void);

int main()
{

  int test = 3;
  p(test); // call function here
  test += 3;
  p(test);
  test *= 2;
  p(test);
  add(3, 5);
  testF();
  return 0;
}

// elaborate function body
void p(int num)
{
  printf("THIS IS PRING FUNCTION : num is %d\n", num);
}

int add(int numOne, int numTwo)
{
  int res = numOne + numTwo;
  printf("%d + %d = %d\n", numOne, numTwo, res);
  return res;
}

void testF(void)
{
  printf("NO PARAMETER NO RETURN FUNCTION\n");
}