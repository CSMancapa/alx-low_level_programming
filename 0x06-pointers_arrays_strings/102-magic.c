#include <stdio.h>

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	/*
	 * write your line of code here...
	 * Remember:
	 * - not allowed to use a
	 * - not allowed to modify the variable p
	 * - can only write one statement
	 * - not allowed to use ,
	 * - not allowed to code anything else than the line of expected line of code
	 */
		*(p + 5) = 98;
	/* ...so that this prints 98\n */
	sprintf("a[2] = %d\n", a[2]);
	return (0);
}
