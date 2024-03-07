#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int age = 15;
    if (age >= 20)
    {
        printf("You are an adult!\n");
    }
    else
    {
        printf("You are a student!\n");
    }

    int studentAge = 10;
    if (studentAge > 8 && studentAge < 14)
    {

        printf("You are a elementary school student!\n");
    }
    else if (studentAge > 13 && studentAge < 17)
    {
        printf("You are a middle school student!\n");
    }
    else if (studentAge > 16)
    {
        printf("You are a high school student!\n");
    }
    else
    {
        printf("You are too young or too old!\n");
    }

    for (int i = 0; i < 8; i++)
    {
        if (i == 2)
        {
            printf("No.%d is absent\n", i);
            continue;
        }
        if (i > 4)
        {

            printf("You can go home for the rest of others\n");
            break;
        }
        printf("Plz prepare presentation, No.%d\n", i);
    }

    // srand(time(NULL)); MUST RESET before use rand()
    // rand() % N;
    // rand() % 3; //0~2

    srand(time(NULL));
    int rsp = rand() % 3;
    switch (rsp)
    {
    case 0:
        printf("ROCK!!\n");
        break;
    case 1:
        printf("SCISSORS!!\n");
        break;
    case 2:
        printf("PAPER!!\n");
        break;

    default:
        printf("SOMETHING GOES WRONG!!\n");
        break;
    }
    return 0;
}