#include <stdio.h>

void convertMin(int duration);

int main()
{
  // function convert minute to hour + minute format
  int dur;
  printf("Please input the duration\n");
  scanf_s("%d",&dur);
  convertMin(dur);
  return 0;
}

void convertMin(int duration)
{
  int hour;
  int minute;
  hour = duration / 60;
  minute = duration % 60;

  printf("%d is converted to %d hour %d minutes:)\n", duration, hour, minute);
}