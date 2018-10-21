#include <stdio.h>
#include "arithmetic.h"

int main (int argc, char **argv) {
	int x = 540;
	int y = 15;

	printf("%d + %d = %d\n", x, y, add(x,y));
	printf("%d - %d = %d\n", x, y, subtract(x,y));
	printf("%d * %d = %d\n", x, y, multiply(x,y));
	printf("%d / %d = %d\n", x, y, divide(x,y));
}
