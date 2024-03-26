#include <stdio.h>

int main()
{
  /* vending machine with 2d arrays*/
  int selected;

  char *items[3][4] = {
      {"1.milk", "2.coffee", "3.juice", "4.soda"},
      {"5.corn chip", "6. turtle chip", "7.potato chip", "8.sweet potato chip"},
      {"9.homerunball", "10.chocoMush", "11.shrimpKkang", "12.sereal"},
  };
  printf("Total Itmes\n==========================================================\n");

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      printf("%-15s ", items[i][j]);
    }
    printf("\n");
  }

  printf("==========================================================\nWhich item do you want to buy? (1-12 available)\n");
  scanf_s("%d", &selected);

  if (selected < 1 || selected > 12)
  {
    printf("!!!!!!!!!!!INCORRECT NUMBER. SYSTEM DOWN!!!!!!!");
    exit(0);
  }
  selected -= 1;
  int x = selected / 4;
  int y = selected % 4;

  printf("Selected items is %-15s\nTHANK YOU\n", items[x][y]);
  return 0;
}