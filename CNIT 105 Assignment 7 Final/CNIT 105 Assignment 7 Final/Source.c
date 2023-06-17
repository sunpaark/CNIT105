/*=======================================================
Programmer: Sun Hong Park
Email: park1432@purdue.edu
CNIT 105, Assignment 7
Program Description: The program allows the user to input a range (n1 to n2. The program will collect the range,
and will provide answers to following options:
1. All odd numbers from n1 to n2
2. Sum of inverse of n1 and n2 
3. N Factorial
4. The greatest common factor of n1 and n2.

Academic Honesty:
I attest that this is my original work.
I have not used unauthorized source code, either modified or unmodified.
I have not given other fellow student(s) access to my program.
==========================================================*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <math.h>

//Lines 24 - 31 is a function that displays the programmer's information.
void displayMyInfo()
{
	printf("************************\n" 
		"* Sun Hong Park        *\n" 
		"* park1432@purdue.edu  *\n" 
		"* CNIT105 Assignment07 *\n" 
		"************************");
}

int num, n1, n2, inverse, fact = 1, fact1, gcfnum, gcfactor;

void displayOddRange()
{
	printf("\nEnter two positive numbers where number 1 < number 2: ");
	scanf("%d %d", &n1, &n2);

	for (num = n1; num <= n2; num++)
	{
		// Since it is displaying odd numbers at a given range, the modulus of an odd number will give 1.
		if (num % 2 == 1)
		{
			//Therefore, if the number results in 1, the program will display the number.
			printf("\n%d", num);
		}
	}
}

float sumInverseRange() 
{
	// Since it is desired to display the numbers in decimals, the variables must be re-declared as float.
	float n1, n2, sum = 0;
	printf("\nEnter two positive numbers where number 1 < number 2: ");
	scanf("%f %f", &n1, &n2);

	// In the for loop, n1 is the starting value for variable inverse, and n2 is the end value of inverse.
	for (inverse = n1; inverse <= n2; inverse++)
	{
		// Since the numbers are displayed decimals, the numerator should also be written in decimals for an accurate result.
		sum = sum + ((1.00) / inverse);
	}

	printf("The sum of the inverse of %.f and %.f is %.2f", n1, n2, sum);
}

int factorial()
{
	printf("\nEnter a natural number for n: ");
	scanf("%d", &fact1);

	for (num = 1; num <= fact1; num++)
	{
		// Equation to find the factorial of number.
		fact = fact * num;
	}
	printf("%d! = %d", fact1, fact);
}

int gcf()
{
	printf("\nEnter two positive numbers where number 1 < numeber 2: ");
	scanf("%d %d", &n1, &n2);

	for (gcfactor = 1; gcfactor <= n1; gcfactor++)
	{
		// If the modulus of n1 and gcfactor and n2 and gcfactor is equal to 0, 
		//It will make gcfnum equal to gcfactor. Hence, print the line.
		if (n1 % gcfactor == 0 && n2 % gcfactor == 0)
		{
			gcfnum = gcfactor;
		}
	}
	printf("The greatest common factor of %d and %d is %d", n1, n2, gcfnum);
}

int main()
{
	displayMyInfo();
	int menu = 1;

	while (menu != 5)
	{
		printf("\n\n\nFunctions Assignment Menu" "\n=====================================");
		printf("\n1. Display all odd numbers from n1 to n2" 
			"\n2. Add the inverse of numbers from n1 to n2" 
			"\n3. Compute n Factorial" 
			"\n4. Determine the greatest common factor of n1 and n2" 
			"\n5. Exit");

		printf("\n\nEnter your choice: ");
		scanf("%d", &menu);

		//The following lines are the scenarios when the user selects a number from the menu.
		if ((menu == 1))
		{
			displayOddRange();
		}

		else if ((menu == 2))
		{
			sumInverseRange();
		}

		else if ((menu == 3))
		{
			factorial();
		}

		else if ((menu == 4))
		{
			gcf();
		}

		else if ((menu == 5))
		{
			printf("\nGoodbye!");
		}

		else
			printf("\nInvalid input! \nEnter a number between 1 and 5");
	}

	_getch();
	return 0;
}