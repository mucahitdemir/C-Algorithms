/**
 * Modified 07/12/2017, Kyler Smith
 *
 */

#include <stdio.h>

int main()
{
	//defining variables seperated is more suitable in order not to face an unexpected error.
    int remainder;
	int number = 0; 
	int decimal_number = 0;
	int temp = 1;
	
    printf("\n Enter any binary number =  ");
	
    scanf("%d", &number);

    // Iterate over the number until the end.
    while (number > 0)
    {
        remainder = number % 10;
        number = number / 10;
        decimal_number += remainder * temp;
        temp = temp * 2;  // used as power of 2
    }

    printf("%d\n", decimal_number);
}
