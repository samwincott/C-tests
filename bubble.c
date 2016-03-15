#include <stdio.h>

int main(int argc, char *argv[])
{
	int array[100], n, c, i, d, swap;
	
	
	
	printf("Enter number of elements\n");
	scanf("%d", &n);
	
	printf("Enter %d integers\n", n);
	
	for (c = 0; c < n; c++)
		scanf("%d", &array[c]);
		

	
	
		
	int temp;
	
	temp = array[0];
	
	for (c = 0; c < n; c++)
	{	
		for(i = 0; i < n; i++)
		{
			if (array[c] > array[i])
			{
				temp = array[c];
				array[c] = array[i];
				array[i] = temp;
			}
		}
	}
	
	
	printf("In order:\n");
	
	
	
	for (c = 0; c < n; c++)
		printf("%d\n", array[c]);
	
	return 0;
}						