#include <stdio.h>
int main()
{
	int age = 20;
	printf("%d\n", age);
	age = 21;
	printf("%d\n", age);

	float f = 4.5f;
	// f라고 명시해 주지 않으면 자동으로 4바이트만 할당하고 double 8바이트를 할당하기엔 바이트가 부족하다고 에러
	printf("%f\n", f);
	printf("%.2f\n", f);

	double d = 4.428;
	printf("%.2lf\n", d);

	const int YEAR = 1972;
	printf("C has been published in %d\n", YEAR);

	printf("%d + %d = %d\n", 3, 7, 3 + 7);

	int num;
	printf("Please input integer\n");
	scanf_s("%d", &num);
	printf("%d is what you typed\n", num);

	int one, two, three;
	printf("please input 3 integer: ");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("first int : %d\n", one);
	printf("second int : %d\n", two);
	printf("third int : %d\n", three);

	char c = 'A';
	printf("%c\n", c);

	char str[256];
	printf("please input text: ");
	scanf_s("%s", str, sizeof(str));
	printf("%s\n",str);
	return 0;

	/*
	int %d
	float %.nf
	double %.nlf
	char %c for single character
		 %s for string
	*/
}