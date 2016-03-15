#include <stdio.h>

int checkprime(int num)
{
	long i, new1, q;
	
	
	
	for(i = 2; i < num - 1; i++)
	{
	
		new1 = num % i;
		if(new1 == 0 )
		{
			q = 0;
			break;
		}
		else
		{
			q = 1;
		}	
				

		
	}

	return q;
}			