#include <stdio.h>

int main()
{
  // using array for scores of 5 exams, get total nd average score

  int scores[5];
  printf("please input score for lang\n");
  scanf_s("%d", &scores[0]);
  printf("please input score for Eng\n");
  scanf_s("%d", &scores[1]);
  printf("please input score for math\n");
  scanf_s("%d", &scores[2]);
  printf("please input score for science\n");
  scanf_s("%d", &scores[3]);
  printf("please input score for history\n");
  scanf_s("%d", &scores[4]);

  int total=0;
  for (int i = 0; i < 5; i++)
  {
    total +=
        scores[i];
  }

  printf("Total comes %d\n", total);
  printf("Ave. comes %.2f\n", total / 5.0);
  return 0;
}