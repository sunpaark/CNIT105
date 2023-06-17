/*=======================================================
Your Name: Sun Hong Park
Your Purdue Email: park1432@purdue.edu
Lab Section: Fri. 1:30
Lab Number: Lab04
Program Description: This program provides the answers to solve the following questions:
1. Print natural numbers from 1 to N
2. Add natural numbers from 1 to N
3. Add even numbers from 1 to N
4. Compute the sum and average of the squares of numbers from 1 to N
Unlike previous assignments, the program is run in while loop, therefore, until the user presses number 5, the user can use this program forever.
==========================================================*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	printf("************************\n"
		"* In_Lab04             *\n"
		"* By:Sun Hong Park     *\n"
		"* park1432@purdue.edu  *\n"
		"************************");

	int choice = 1;
	int count = 1;
	int sum = 0;
	int num, evennum, squarenum, power;
	float average;

	// != means "not equal to." Therefore, since option 5 is exit we want to create a while loop that demonstrates the scenarios of each choices,
	// (con't) before putting number 5.
	while (choice != 5)
	{
		count = 1;
		printf("\n\nWhile Loops Lab" "\n=====================================");
		printf("\n1. Print natural numbers from 1 to N"
			"\n2. Add natural numbers from 1 to N"
			"\n3. Add even numbers from 1 to N"
			"\n4. Compute the sum and average of the squares of numbers from 1 to N"
			"\n5. Exit");

		printf("\n\nEnter your choice: ");
		scanf("%d", &choice);

		//If statements are used because we are not sure if the user will actaully put number 1,
		//Therefore, we are putting all the possible scenarios of each options.
		if ((choice == 1))
		{
			printf("\nEnter a natural number for N: ");
			scanf("%d", &num);
			printf("Displaying natural numbers from 1 to %d", num);

			//Until count reaches the value of num, the program will display the numbers of count.
			while (count <= num)
			{
				printf("\n%d", count);
				count = count + 1;
			}
		}

		else if ((choice == 2))
		{
			// Line 68 - 69, since we do not want the program to use previous values (from options we used before),
			//We should declare the value of the variable to prevent these incidents.
			count = 1;
			sum = 0;
			printf("\nEnter a natural number for N: ");
			scanf("%d", &num);

			printf("Displaying natural numbers from 1 to %d", num);

			//Equation for sum of of numbers from 1 to num.
			while (count <= num)
			{
				printf("\n%d", count);
				sum = sum + count;
				count++;
			}
			printf("\n\nThe sum of numbers from 1 to %d is %d", num, sum);
		}

		else if ((choice == 3))
		{
			count = 1;
			sum = 0;
			printf("\nEnter a natural number for N: ");
			scanf("%d", &evennum);
			printf("Displaying the even numbers from 1 to %d", evennum);

			while (count <= evennum) 
			{
				//% returns the remainder of count.
				// This will allow the program to filter out odd numbers.
				if (count % 2 == 0) 
				{
					printf("\n%d", count);
					sum = sum + count;
				}
				count++;
			}

			printf("\n\nThe sum of even numbers from 1 to %d is %d", evennum, sum);
		}

		else if ((choice == 4))
		{
			count = 1;
			sum = 0;
			printf("\nEnter a natural number for N: ");
			scanf("%d", &squarenum);
			printf("Displaying the squares of numbers from 1 to %d", squarenum);

			while (count <= squarenum)
			{
				power = count * count;
				printf("\n%d", power);

				// Equation to find the sum of squared numbers.
				sum = sum + (power);
				count++;
			}

			printf("\n\nThe sum of squares of numbers from 1 to %d is %d", squarenum, sum);
			
			average = sum / squarenum;
			printf("\nThe average of squares of numbers from 1 to %d is %.2f", squarenum, average);
		}

		else if ((choice == 5)) 
		{
			printf("Goodbye!");
		}

		else printf("\nInvalid input !" "\nEnter a number between 1 and 5.");
	}
	_getch();
	return 0;
}