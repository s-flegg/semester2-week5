/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name: Samuel Flegg
 * ID: 202018944
 */

#include <stdio.h>
#include <string.h>

#include <math.h>

int main(void){
	long decimal=0;
	char hex[9];
	
	printf("Enter a hexadecimal:");
	scanf("%s", &*hex);

	int len = strlen(hex);
	int power = len - 1; // for char positional power, 16^power, should always end as 0

	for (int i=0; i<len; i++, power--) { 
		switch (hex[i]) {
			case 'F': case 'f':
				decimal += 15 * pow(16, power);
				break;
			case 'E': case 'e':
				decimal += 14 * pow(16, power);
				break;
			case 'D': case'd':
				decimal += 13 * pow(16, power);
				break;
			case 'C': case 'c':
				decimal += 12 * pow(16, power);
				break;
			case 'B': case 'b':
				decimal += 11 * pow(16, power);
				break;
			case 'A': case 'a':
				decimal += 10 * pow(16, power);
				break;
			case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9':
				decimal += (hex[i] - '0') * pow(16, power); // convert char to int then multiply 
				break;
			default:
				// if input contains invalid hex digit
				printf("Error: Invalid Hexadecimal\n");
				return 1;
		}
	}


	
	// print the decimal result
	printf("decimal:%ld\n", decimal);
	
	return 0;
}