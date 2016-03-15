#include <stdio.h>

int main()
{
	unsigned long long int  num1, num2, q, i;
	num1 = 1;
	num2 = 1;
	
	printf("1\n");


	for(i = 0; i < 50; i++)
	{
		printf("%llu\n", num2);
		q = num2;
		num2 = num1 + num2;
		num1 = q;
	}
	return 0;
}		
