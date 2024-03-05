#include <stdio.h>
int main() {
	int age = 20;
	printf("%d\n", age);
	age = 21;
	printf("%d\n", age);

	float f = 4.5f;
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
	return 0;
}