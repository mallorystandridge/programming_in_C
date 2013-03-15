#include <stdio.h>

int main (void)
{
	int a = 100;
	int b = 2;
	int c = 25;
	int d = 4;
	int result;
	
	result = a - b;
	printf ("a - b = %i\n", result);
	
	result = b * c;
	printf ("b * c = %i\n", result);
	
	result = a / c;
	printf ("a / c = %i\n", result);
	
	result = a + b * c;
	printf ("a + b * c = %i\n", result);
	
	printf ("a * b + c* d = %i\n", a * b + c * d);
	
	return 0;
}


OUTPUT
a - b = 98
b * c = 50
a / c = 4
a + b * c = 150
a * b + c * d = 300