#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  // 이중 반복문을 이용하여 별표를 역 피라미드 모양으로 찍기

  for (int i = 5; i > 0; i--)
  {
    for (int k = i; k > 0; k--)
    {
      printf("*");
    }
    printf("\n");
  }

  // math.h functions
  printf("square root of 4 is %.2lf\n", sqrt(4));
  printf("ceil of 4.42 is %.2lf\n", ceil(4.42));
  printf("floor of 4.42 is %.2lf\n", floor(4.42));
  printf("absolute value of -4.42 is %.2lf\n", fabs(-4.42));

  // string.h functions
  char str[50];
  char greet[100] = "WELCOME ";
  int len;

  strcpy(str, "Good morning Isaac:)"); // copy string into var
  strcat(greet, str);                  // append string to first arg
  printf("this is what after strcat : %s\n", greet);

  len = strlen(str);
  printf("Length of |%s| is |%d|\n", str, len);

  // stdlib.h functions
  char *sample;

  /* Initial memory allocation */
  sample = (char *)malloc(17);
  strcpy(sample, "Gorgeous Isaac");
  printf("String = %s,  Address = %p\n", sample, sample);

  /* Reallocating memory */
  sample = (char *)realloc(sample, 27);
  strcat(sample, " :) XD :0 :D");
  printf("String = %s,  Address = %p\n", sample, sample);

  free(sample);
  printf("after free memory String = %s,  Address = %p\n", sample, sample);
  // after free memory, address remains but no string value

  // time. functinos
  time_t curtime;

  time(&curtime);

  printf("Current time = %s", ctime(&curtime));

  return 0;
}