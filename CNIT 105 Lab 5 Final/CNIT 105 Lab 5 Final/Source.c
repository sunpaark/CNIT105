/*=======================================================
Your Name: Sun Hong Park
Your Purdue Email: park1432@purdue.edu
Lab Section: Fri. 1:30
Lab Number: Lab05
Program Description: this program is a for loops lab, where it allows the user to inform the answers to the following options:
1. Print and Add natural numbers from N to 1
2. Multiplication table of N
3. Display a triangle of star
4. Display an inverted triangle of numbers
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
		"* CNIT105 Lab 5        *\n"
		"************************");

	int menu = 1;
	int sum = 0;
	int s = 1;
	int num, count, row, star, n;

	while (menu != 5)
	{
		printf("\nFor Loops Lab" 
			"\n=====================================");
		printf("\n1. Print and Add natural numbers from N to 1" 
			"\n2. Multiplication table of N" 
			"\n3. Display a triangle of star" 
			"\n4. Display an inverted triangle of numbers" 
			"\n5. Exit");

		printf("\n\nEnter your choice: ");
		scanf("%d", &menu);

		if ((menu == 1))
		{
			printf("Enter a natural number for N: ");
			scanf("%d", &num);
			printf("Displaying natural numbers from %d to 1", num);

			//Since it is asked to display the natural numbers from N to 1, count = num is the starting number,
			// and will display the numbers until count reaches 1, and will decrease each value by 1 (count--).
			for (count = num; count >= 1; count--) 
			{
				printf("\n%d", count);
			}

			//sum is the sum of all value of s, and s will increase its value everytime when calculating the equation Until variable s reaches num.  
			while (s <= num)
			{
				sum = sum + s;
				s++;
			}
			printf("\nSum of natural numbers from %d to 1: %d", num, sum);
		}

		else if ((menu == 2)) 
		{
			printf("\nEnter a natural number for N: ");
			scanf("%d", &num);

			printf("\nThe multiplication table of %d", num);
			for (count = 1; count <= 10; count++)
			{
				//Equation for multiplication table.
				printf("\n%d * %d = %d", num, count, (num * count));
			}
		}

		else if ((menu == 3))
		{
			printf("Enter the amount of rows of numbers to display: ");
			scanf("%d", &row);

			for (count = 1; count <= row; count++)
			{
				// Display the stars in a triangle shape until it reaches count.
				for (star = 1; star <= count; star++)
				{
					printf("*");
				}
				printf("\n");
			}
		}

		else if ((menu == 4))
		{
			printf("Enter the amount of lines you want to display: ");
			scanf("%d", &row);

			for (count = row; count >= 1; count--)
			{
				//Display the amount numbers in an inverted triangle shape, until n reaches count.
				for (n = 1; n <= count; n++)
				{
					printf("%d", n);
				}

				printf("\n");
			}
		}

		else if ((menu == 5))
		{
			printf("Goodbye!");
			break;
		}

		else printf("\nInvalid input!" "\nEnter a number between 1 and 5.");
	}

	_getch();
	return 0;
}