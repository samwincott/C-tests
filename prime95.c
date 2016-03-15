#include <stdio.h>
#include "checkprime.h"

int main(int argc, char *argv[])
{
	unsigned long long numbertocheck, numberofprimes;
	numberofprimes = 2;
	
	for(numbertocheck = 1; numberofprimes < 10000000000000000; numbertocheck++)
	{
		int bool;
		
		bool = checkprime(numbertocheck);
		
		if(bool == 1)
		{
			printf("%llu\n", numbertocheck);
			numberofprimes = numberofprimes + 1;
		}	
	}
	printf("%llu\n", numberofprimes);
	return 0;
}	