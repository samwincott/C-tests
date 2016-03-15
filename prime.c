#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
	unsigned long long check, i, new, q;
	
	
	printf("Enter a number to check if prime\n");
	scanf("%llu", &check);
	
	for(i = 2; i < check - 1; i++)
	{
	
		new = fmod(check, i);
		if(new == 0 )
		{
			q = 1;
			break;
		}
				

		
	}
	
	
	
	
	
	if(q == 1)
		{	
			printf("It's not prime\n");
		}	
		else
		{	
			printf("It's prime\n");
		}
	
	return 0;
}			