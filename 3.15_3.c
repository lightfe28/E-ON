#include <stdio.h>

void main(void) 
{

	long long comp_number = 600851475143, start_value = 2;

	while (start_value < comp_number) 
	{
		while (comp_number % start_value == 0) 
		{
			comp_number = comp_number / start_value;
		}
		start_value++;
	}

	printf("%u\n", comp_number);

}
