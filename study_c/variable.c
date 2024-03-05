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
	return 0;
}