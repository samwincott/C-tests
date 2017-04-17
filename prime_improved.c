#include <stdio.h>
#include <math.h>
#include <time.h>

int main(int argc, char *argv[])
{
	unsigned long long num, i;

	printf("Enter a number to check if prime\n");
	scanf("%llu", &num);

	clock_t begin = clock();

	for(i=2; i < num / 2; i++)
	{
		if (num % i == 0)
		{
			printf("%llu is not prime, it is divisible by %llu\n", num, i);
			return 0;
		}
	}
	printf("%llu is a prime number\n", num);

	clock_t end = clock();
	double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

	printf("Done in %f\n", time_spent);
	return 0;
}