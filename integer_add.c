#include <stdio.h>

int integer_add(int x, int y)
{
		int result;
		result = x + y;
		return result;
}


int main()
{
	int q;
	
	q = integer_add(5, 5);
	
	printf("%d\n", q);
	
	return 0;
}	