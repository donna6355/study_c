#define _CRT_SECURE_NO_WARNINGS
#define MAX 10000
#include <stdio.h>

int main()
{
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
  fputs("Is everything okay with you?\n", textFile);
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
  }
  fclose(textFile);
  return 0;
}