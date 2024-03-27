#include <stdio.h>

typedef struct
{
  int id;
  char *title;
  int available;
} BOOK;

void printBookInfo(BOOK book);
int main()
{
  int selected = 0;
  BOOK book[4] = {
      {1, "Beginner C", 1},
      {2, "Python 101", 1},
      {3, "Java basic", 1},
      {4, "Python intermediate", 1},
  };

  printf("====================================\n");
  for (int i = 0; i < 4; i++)
  {
    printBookInfo(book[i]);
  }
  printf("====================================\n");

  while (selected != -1)
  {
    printf("Would you like to borrow some book? (type 1-5, exit -1)\n");
    scanf_s("%d", &selected);
    if (selected > 4 || selected == 0)
    {
      printf("INCORRECT NUMBER TRY AGAIN\n");
    }
    else if (selected > 0)
    {
      if (book[selected].available == 0)
      {
        printf("return completed\n");
        book[selected].available = 1;
      }
      else
      {
        printf("borrow completed\n");
        book[selected].available = 0;
      }
      printBookInfo(book[selected]);
    }
  }

  printf("SYSTEM TERMINATED \n");
  exit(0);

  return 0;
}

void printBookInfo(BOOK book)
{
  printf("%-30s", book.title);
  if (book.available == 1)
  {
    printf("[available]\n");
  }
  else
  {
    printf("[occupied]\n");
  }
}