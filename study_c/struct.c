#include <stdio.h>

// UDT user defined data type
struct Sample // declare struct in global and pascal case is recommended
{
  char *name;
  int year;
  int price;
  char *company;
  struct Sample *friend;
};

struct Train
{
  int no;
  struct Train *next; // self reference has to be pointer!! otherwise it will go infinite recursive....
  //   Recursive structures
  // (aka self-referential structures)
};

int main()
{
  struct Sample one;
  struct Sample two = {"Kkomi", 2021, 100000, "SJ", &one};
  /*
  this is not allowed!!
  struct Sample two;
  two = {"Kkomi", 2021, 100000, "SJ", &one};
  */
  one.name = "Isaac";
  one.year = 2021;
  one.price = 360000;
  one.company = "Mirr";
  one.friend = &two;

  printf("== information from struct ONE==\n");
  printf("name : %s\n", one.name);
  printf("year : %d\n", one.year);
  printf("price : %d\n", one.price);
  printf("company : %s\n", one.company);

  printf("== information from struct TWO ==\n");
  printf("name : %s\n", two.name);
  printf("year : %d\n", two.year);
  printf("price : %d\n", two.price);
  printf("company : %s\n", two.company);

  // array with struct
  struct Sample meows[2] = {one, two};
  printf("first element's name : %s\n", meows[0].name);
  printf("second element's company : %s\n", meows[1].company); // NOT WORKING : meows[1]["company"], meows[1][1]

  struct Sample *onePointer = &one;
  printf("== information from struct POINTER ONE ==\n");
  printf("name : %s\n", (*onePointer).name);
  printf("year : %d\n", onePointer->year); // indirect access to struct with -> operator
  printf("price : %d\n", (*onePointer).price);
  printf("company : %s\n", (*onePointer).company);

  printf("== FRIEND information from struct ONE ==\n");
  printf("name : %s\n", one.friend->name);
  printf("year : %d\n", one.friend->year);
  printf("price : %d\n", one.friend->price);
  printf("company : %s\n", one.friend->company);

  struct Train tOne = {1};
  struct Train tTwo = {2};
  struct Train tThree = {3};
  tOne.next = &tTwo;
  tTwo.next = &tThree;
  struct Train *currentTrain = &tOne;
  printf("current train no is %d\n", currentTrain->next->next->no);

  return 0;
}