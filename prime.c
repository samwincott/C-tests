#include <stdio.h>
#include <math.h>
#include <time.h>

int main(int argc, char *argv[])
{
	unsigned long long check, i, new, q;
	
	printf("Enter a number to check if prime\n");
	scanf("%llu", &check);

	clock_t begin = clock();
	
	for(i = 2; i < check / 2; i++)
	{
		new = (check % i);
		if(new == 0 )
		{
			q = 1;
			printf("%llu / %llu? Yep\n", check, i);
			break;
		}
		else
		{
			printf("%llu / %llu? No\n", check, i);
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

	clock_t end = clock();
	double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

	printf("Done in %f\n", time_spent);

	return 0;
}