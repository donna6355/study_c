#include <stdio.h>

char *machine[3][3];
int select;
int getXPos(int num);
int getYPos(int num);
void printAllProducts(void);

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
  char *strArray[3]; // array of string
  strArray[0] = "Mirr";
  strArray[1] = "Isaac";
  strArray[2] = "Kim";
  for (int i = 0; i < 3; i++)
  {
    printf("value from strArray[%d] is %s\n", i, strArray[i]);
  }

  machine[0][0] = "milk";
  machine[0][1] = "coffee";
  machine[0][2] = "soda";
  machine[1][0] = "chocolate";
  machine[1][1] = "candy";
  machine[1][2] = "gum";
  machine[2][0] = "rock";
  machine[2][1] = "scissors";
  machine[2][2] = "paper";
  printAllProducts();
  scanf_s("%d", &select);
  if (select < 10)
  {
    printf("YOU HAVE SELECTED %d. %-12s\n", select, machine[getYPos(select)][getXPos(select)]);
  }
  else
  {
    printf("NOT ALLOWED NUMBER SYSTEM FAILED\n");
  }
  exit(0);

  return 0;
}
int getYPos(int num)
{
  printf("y value is %d\n", (num - 1) / 3);
  return (num - 1) / 3;
};
int getXPos(int num)
{
  int remaining = num % 3;
  int x;
  if (remaining == 0)
  {
    x = 2;
  }
  else
  {
    x = remaining - 1;
  }

  printf("x value is %d\n", x);
  return x;
};

void printAllProducts(void)
{
  printf("=============================================\n");
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("%d. %-12s", 3 * i + j + 1, machine[i][j]);
    }
    printf("\n");
  }

  printf("=============================================\n");
  printf("Please insert number\n");
}