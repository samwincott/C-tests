#include <stdio.h>

int main(int argc, char *argv[])
{
	int c, i;
	printf("How many elements would you like?\n");
	scanf("%d", &c);
	
	for(i = 0; i <= c; i++)
		printf("%d ", i);
		
	printf("\n");
		
	return 0;
}		
	