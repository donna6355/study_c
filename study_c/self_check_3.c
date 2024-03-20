#include <stdio.h>

int main()
{
  /*
  카페 메뉴 가격 계산 프로그램
  커피 4500 샌드위치 6000, 샌드위치 구매시 커피 할인 3500 (수량 제한 없음)
  */

  const int coffee = 4500;
  const int sandwich = 6000;
  const int discount = 1000;

  int coffeeQty;
  int sandwichQty;
  int total;
  printf("Would you like to drink coffee? please type how many cups you want...\n");
  scanf_s("%d", &coffeeQty);
  printf("Would you like to order some sandwich? please type how many sandwich you want...\n");
  scanf_s("%d", &sandwichQty);

  if (sandwichQty > 0)
  {
    total = ((coffee - discount) * coffeeQty) + (sandwich * sandwichQty);
  }
  else
  {
    total = (coffee * coffeeQty) + (sandwich * sandwichQty);
  }

  printf("==============RECEIPT===============\n");
  printf("%d * coffee\n", coffeeQty);
  printf("%d * sandwich\n", sandwichQty);
  printf("total comes %d\n", total);

  return 0;
}