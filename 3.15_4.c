
#include <stdio.h>

#include <string.h>

void main(void) {

	int number_1, number_2, test, palindrome = 0, length, test, c;
	char cValue[10];

	for (number_1 = 1; number_1 < 1000; number_1++) {
		for (number_2 = 1; number_2 < 1000; number_2++) {
			test = number_1 * number_2;    
			sprintf(cValue, "%d", test);    
			length = strlength(cValue);     
			test = 1;
			for (c = 0; c < (length / 2); c++) {  
				if (cValue[c] != cValue[length - (c + 1)]) { 
					test = 0;
				}
			}
			if (test == 1) {        
				if (test > palindrome) { 
					palindrome = test;  
				}
			}
		}
	}

	printf("%d\n", palindrome);
}
