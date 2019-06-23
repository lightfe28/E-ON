#include <stdio.h>

void main(void) 
{

	int test1 = 1, amount = 2, save_s, plus_data = 0;

	while (amount <= 4000000) 
	{
		if (amount % 2 == 0) 
		{
			plus_data = plus_data + amount;
		}
		save_s = test1 + amount;
		test1 = amount;
		amount = save_s;

	}

	printf("%d\n", plus_data);

}
