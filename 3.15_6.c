#include <stdio.h>
#include <stdlib.h>


void main(void) 
{

	int count_1, start_number, tmp[2], value1 = 0, test;
	int **data;

	printf("입력 \n");
	scanf("%d %d", &count_1, &start_number);

	data = (int**)malloc(sizeof(int*) * count_1);
	
	for (int c = 0; c < count_1; c++) 
	{
		data[c] = (int*)malloc(sizeof(int) * 2);
		
		scanf("%d", &data[c][0]);
		
		if (c == start_number) 
		{
			data[c][1] = 1;
		}
		else 
		{
			data[c][1] = 0;
		}
	}

	while (1) 
	{
		test = 0;
		for (int c = 1; c < count_1; c++) 
		{
			if (data[0][0] < data[c][0]) 
			{
				test = 1;
				break;
			}
		}
		if (test == 1) 
		{
			tmp[0] = data[0][0];					
			tmp[1] = data[0][1];
			for (int c = 0; c < count_1 - 1; c++) 
			{
				data[c][0] = data[c + 1][0];
				data[c][1] = data[c + 1][1];
			}
			data[count_1 - 1][0] = tmp[0];
			data[count_1 - 1][1] = tmp[1];
		}
		else 
		{
			value1++;							
			if (data[0][1] == 1)
			{
				break;
			}
			for (int c = 0; c < count_1 - 1; c++) 
			{
				data[c][0] = data[c + 1][0];
				data[c][1] = data[c + 1][1];
			}
			data[count_1 - 1][0] = 0;
			data[count_1 - 1][1] = 0;

		}

	}

	printf("\n출력 \n");
	printf("%d\n", value1);

}
