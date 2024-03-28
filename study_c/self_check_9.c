#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
  // read txt file and english voca quiz
  // strcmp();
  /*
  open : fopen();
  close : fclose();
  write the whole file : fputs();
  read the whole file : fgets();
  write assigning to vars : fprintf();
  read assigning to vars : fscanf();
  */

  char eng[256];
  char kor[256];
  char answer[256];
  int correct;

  FILE *textFile = fopen("C:\\Users\\donna\\Desktop\\word.txt", "rb");
  if (textFile == NULL)
  {
    printf("FAILED TO OPEN FILE\n");
    return 1;
  }

  for (int i = 0; i < 3; i++)
  {
    fscanf(textFile, "%s %s", eng, kor);
    printf("what is the meaning of '%s'\n", eng);
    scanf("%s", answer, sizeof(answer));
    correct = strcmp(kor, answer);
    printf("%s is %s answer!\n", answer, correct == 0 ? "correct" : "INCORRECT");
  }
  fclose(textFile);
  return 0;
}