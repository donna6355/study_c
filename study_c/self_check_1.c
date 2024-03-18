#include <stdio.h>

int main()
{
  // 쇼핑몰 회운 가입 프로그램 이름, 아이디, 나이, 생일, 신발크기 입력받기
  // for SCAN, you need to psss pointer as argument to save scan value!!

  char userName[20];
  char userId[15];
  int userAge;
  char userDob[10];
  int shoeSize;

  printf("**Please Input Your Name\n");
  scanf_s("%s", userName, sizeof(userName));
  printf("**Please Input Your ID\n");
  scanf_s("%s", userId, sizeof(userId));
  printf("**Please Input Your Age\n");
  scanf_s("%d", &userAge);
  printf("**Please Input Your Date of Birth (YYYYMMDD)\n");
  scanf_s("%s", userDob, sizeof(userDob));
  printf("**Please Input Your shoes' size\n");
  scanf_s("%d", &shoeSize);
  printf("=======USER INFO======\n");
  printf("NAME : %s\n", userName);
  printf("ID : %s\n", userId);
  printf("AGE : %d\n", userAge);
  printf("DOB : %s\n", userDob);
  printf("SHOESIZE : %d\n", shoeSize);

  return 0;
}
