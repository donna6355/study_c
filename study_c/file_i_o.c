#define _CRT_SECURE_NO_WARNINGS
#define MAX 10
#include <stdio.h>

int main()
{
  int count = 0;
  /*
  r : read only. the file must exist
  w : write only. if file doesn't exist, create new one, otherwise rewrite on the file
  a : append content. if file doesn't exist, create new one. otherwise write from the end of the existing file
  r+ : read and write. the file must exist, otherwise return null.
  w+ : read and write. if file doesn't exist, create new one, otherwise rewrite on the file
  a+ : append, read and write. if file doesn't exist, create new one. to write from the end of the existing file, to read only existing part is readable
  t: text mode
  b: binary mode
  */

  FILE *textFile = fopen("C:\\Users\\donna\\Desktop\\test.txt", "wb");
  if (textFile == NULL) // if failed to open file, it will be NULL
  {
    printf("FAILED TO OPEN WRITE FILE\n");
    return 1;
  }
  fputs("TGIF Isaac:)\n", textFile);
  fputs("Did you puke this morning? what happened?\n", textFile);
  fclose(textFile);

  textFile = fopen("C:\\Users\\donna\\Desktop\\test.txt", "rb");
  if (textFile == NULL)
  {
    printf("FAILED TO OPEN READ FILE\n");
    return 1;
  }

  char line[MAX];
  while (fgets(line, MAX, textFile) != NULL)
  {
    printf("%s", line);
    printf("\n *****read file %d times*****\n", count++);
  }
  fclose(textFile);

  textFile = fopen("C:\\Users\\donna\\Desktop\\testTwo.txt", "wb");
  if (textFile == NULL)
  {
    printf("FAILED TO OPEN WRITE FILE FOR FPRINTF\n");
    return 1;
  }
  fprintf(textFile, "%s %d %d %d %d %d\n", "RANDOMNUMBER:", 6, 3, 5, 5, 2);
  fprintf(textFile, "%s %d\n", "ISAAC NUMBER :", 1231);
  fclose(textFile);
  textFile = fopen("C:\\Users\\donna\\Desktop\\testTwo.txt", "rb");
  if (textFile == NULL)
  {
    printf("FAILED TO OPEN READ FILE FOR FSCANF\n");
    return 1;
  }
  int random[5];
  char str[1000];
  fscanf(textFile, "%s %d %d %d %d %d", str, &random[0], &random[1], &random[2], &random[3], &random[4]);
  printf("this is what you got : %s %d,%d,%d\n",str,random[0],random[1],random[4]);
  fclose(textFile);
  return 0;
}