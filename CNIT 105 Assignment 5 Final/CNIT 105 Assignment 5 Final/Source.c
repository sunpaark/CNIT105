/*=======================================================
Your Name: Sun Hong Park
Your Purdue Email: park1432@purdue.edu
Lab Section: Fri. 1:30
Lab Number: Lab05
Program Description: The While Loops Assignment program allows you to find the following answers:
1. Sum of odd natural numbers from 1 to N
2. Sum of cubes of even natural numbers from 1 to N
3. Factorial of N
4. Multiplication table of N
Since it is using while loop, it allows you to find multiple answers without executing the program,
unless you choose option E.
==========================================================*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	printf("************************\n"
		"* Sun Hong Park        *\n"
		"* park1432@purdue.edu  *\n"
		"* CNIT105 Assignment05 *\n"
		"************************");

	int num, sum, cube, factorial;
	int count = 1;
	char menu = 'Z';

// Unlike previous assignments, it is using characters in the provided options. Therefore, menu should be declared as char.
// Moreover, menu should be declared that it is a character.

	while (menu != 'E')
	{
		printf("\n\nWhile Loops Assignment"
			"\n=====================================");
		printf("\nA. Sum of odd natural numbers from 1 to N"
			"\nB. Sum of cubes of even natural numbers from 1 to N"
			"\nC. Find the factorial of N"
			"\nD. Print the multiplication table of N"
			"\nE. Exit");

		printf("\n\nEnter your choice: ");
		scanf("%c", &menu);

		//Throughout lines 48 to 69, it creates a scenario when the user selects choice A.
		if ((menu == 'A'))
		{
			printf("Enter a natural number for N: ");
			scanf("%d", &num);

			count = 1;
			sum = 1;

			printf("\nDisplayng natural numbers from 1 to %d : ", num);

			//Until count reaches the value of num, the program will display the numbers of count.
			while (count <= num) 
			{
				printf("\n%d", count);
				count++, count++;
				// Line 62 asks the program to increase its value by 1, so that it displays all the odd numbers.
				sum = sum + count;
				// Line 64 is the equation for the sum of odd natural numbers from 1 to N.
			}
			printf("\nThe sum of odd natural numbers from 1 to %d is %d", num, sum - count);
		}
		//Throughout lines 70 to 92, is a scenario when the user selects choice b.
		else if ((menu == 'B'))
		{
				printf("\nEnter a natural number for N: ");
				scanf("%d", &num);

				count = 2;
				sum = 8;

			while (count <= num)
			{
				cube = pow(count, 3);
				//Since the computer does not understand the power symbol "^," 
				//line 80 teaches the program in a manner where they can understand "the cube of N" without using the symbol.

				printf("\n%d", cube);
				count++, count++;
				cube = pow(count, 3);
				sum = sum + cube;
				// Equation of sum of cubes of all even numbers.
			}
			printf("\nThe sum of cubes of even natural numbers from 1 to %d is %d", num, sum - cube);
		}

		//Throughout lines 94 to 109, is a scenario when the user selects choice c.
		else if ((menu == 'C')) 
		{
			factorial = 1;
			// Declaring "factorial" as 1.

			printf("Enter a natural number for N: ");
			scanf("%d", &num);

			for (count = 1; count <= num; count++) 
			{
				factorial *= count;
				//Declaring the equation of factorial
			}
			printf("\nThe factorial of %d is %d", num, factorial);
		}

		//Throughout lines 111 to 123, is a scenario when the user selects choice D.
		else if ((menu == 'D')) 
		{
			printf("Enter a natural number for N: ");
			scanf("%d", &num);

			count = 1;

			while (count <= 10) {
				printf("%d X %d = %d\n", num, count, num * count);
				count++;
			}
		}

		//Throughout lines 126 to 130, is a scenario when the user selects choice E.
		else if ((menu == 'E'))
		{
			printf("Goodbye!");
			break;
		}

		else
			printf("\nInvalid input!" "\nEnter one of the letters in the menu.");
	}
	_getch();
	return 0;
}