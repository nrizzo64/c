#include <stdio.h>
/* This includes the modification in specified in Project 3 */
#define PI 3.14159265358979323846
int main(void) {
	float radius;
	scanf("%f", &radius);
	printf("%.2f\n", (4.0f / 3.0f) * PI * radius * radius * radius);
	return 0;
}
