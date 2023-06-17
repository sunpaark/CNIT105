/*=======================================================
Programmer: Sun Hong Park
Email: park1432@purdue.edu
CNIT 105, Assignment 6
Program Description: This program used nested for loop to display the following options:
1. A Multiplication Table
2. Row number for N times
3. A lower right triangle of numbers
4. A pyramid of stars.

Academic Honesty:
I attest that this is my original work.
I have not used unauthorized source code, either modified or unmodified.
I have not given other fellow student(s) access to my program.
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
		"* CNIT105 Assignment06 *\n"
		"************************");

	int menu = 1;
	int num, x, lines, space, number, star;
	int count = 1;
	int count2 = 1;

	while (menu != 5)
	{
		printf("\n\nNested For Loops Assignment"
			"\n=====================================");
		printf("\n1. A Multiplication Table"
			"\n2. Row number for N times"
			"\n3. A lower right triangle of numbers"
			"\n4. A pyramid of stars"
			"\n5. Exit");

		printf("\n\nEnter your choice: ");
		scanf("%d", &menu);

		if ((menu == 1))
		{
			printf("Enter a number for N: ");
			scanf("%d", &num);

			printf("Displaying a multiplication table size of %d", num);
			for (count = 1; count <= num; count++)
			{
				for (x = 1; x <= num; x++)
				{
					printf("%d	", count * x);
					//Until both count and integers x reach num, it will multiply.
					//Line 58, %d is the equation of multiplication table, hence displays the multiplication table.
				}
				printf("\n");
				// Line 62, displays the multiplication table in separate lines.
			}
		}

		else if ((menu == 2))
		{
			printf("Enter the number of lines to print: ");
			scanf("%d", &lines);

			for (count = 1; count <= lines; count++)
			{
				for (x = 1; x <= count; x++)
				{
					printf("%d", count);
					//Until count reaches the maximum lines, and x reaches count, it will display the numbers in a right triangle form.
					if (x != count)
					{
						printf(", ");
						//Everytime when x is not equal to count, it will display comma and display the numbers in the next line.
					}
				}
				printf("\n");
			}
		}

		else if ((menu == 3))
		{
			printf("Enter the size of the triangle of numbers to print: ");
			scanf("%d", &lines);
			for (count = 1; count <= lines; count++)
				//Line 92 is a for loop that sets row numbers of the triangle.
				// count is the row number of the triangle, and lines is the amount of row numbers that the user desires to display.
			{
				for (space = lines - count; space >= 1; space--)
					//Since the program does not understand how to display the numbers in the right side.
					// A logic must be applied in the codes. Using the example on the instruction, since there are four spaces and one number.
					//Line 96 indicats each line, the amount of space decreases.
				{
					printf(" ");
					// Hence print space.
				}

				for (number = 1; number <= count; number++)
					// And as the space decreases, the amount of number displayed increases by each line. 
				{
					printf("%d", number);
				}
				count2++;
				printf("\n");
				// Allows to display the numbers in separate rows.
			}
		}

		else if ((menu == 4))
		{
			count = 1;
			printf("Enter the size of the pyramid of stars to print: ");
			scanf("%d", &lines);

			for (count = 1; count <= lines; count++)
			{
				for (space = count; space < lines; space++)
				{
					printf(" ");
				}

				for (star = 1; star <= 2 * count - 1; star++)
				// Star times 2 then minus 1, and iterates by 2 downwards.

				{
					printf("*");
				}
				printf("\n");
			}
		}

		else if ((menu == 5))
		{
			printf("Goodbye!");
			break;
		}

		else
			printf("\nInvalid Input!" "\nEnter a number between 1 and 5");
	}

	_getch();
	return 0;
}