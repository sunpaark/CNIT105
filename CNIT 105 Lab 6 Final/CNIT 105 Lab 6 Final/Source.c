/*=======================================================
Your Name: Sun Hong Park
Your Purdue Email: park1432@purdue.edu
Lab Section: Fri. 1:30
Lab Number: Lab06
Program Description: allows the user to find whether the triangle is a valid triangle or not,
and informs the smallest and largest sides. Moreover, it displays the area of the triangle when it is valid.
==========================================================*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <math.h>

void display_My_Info() {
	printf("************************\n" 
		"* Sun Hong Park        *\n" 
		"* park1432@purdue.edu  *\n" 
		"* CNIT105 Lab06 *\n" 
		"************************");
}

int validate(float a, float b, float c)
{
	//Checking whether the condition is false (0)
	int check = 0;
	if (a + b > c && a + c > b && b + c > a)
	{
		//If the condition is true, it will confirm that it is true.
		check = 1;
	}
	//Hence, replace the new value of check by using return code.
	return check;
}

//Allows to determine the largest side of the triangle
float maximum(float a, float b, float c)
{
	float max;
	float arr[] = { a, b, c };
	float length = sizeof(arr) / sizeof(arr[0]);
	max = arr[0];

	for (int i = 0; i < length; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}

	return max;
}

//Allows to determine the smallest side of the triangle
float minimum(float a, float b, float c)
{
	float min;
	float arr[] = { a, b, c };
	float length = sizeof(arr) / sizeof(arr[0]);
	min = arr[0];

	for (int i = 0; i < length; i++)
	{
		if (arr[i] < min)
			min = arr[i];
	}

	return min;
}

float computeArea(float a, float b, float c)
{
	float s, A;
	s = ((a + b + c) / 2);
	A = sqrt(s * (s - a) * (s - b) * (s - c));

	return A;
}


int main()
{
	display_My_Info();

	float a, b, c;

	while (1)
	{
		int num;
		printf("\n\nEnter the length of side A of a triangle: ");
		scanf("%f", &a);
		//An if condition when the user inputs -1 in order to close the program.
		if (a == -1)
		{
			printf("Goodbye!");
			break;
		}

		printf("Enter the length of side B of a triangle: ");
		scanf("%f", &b);
		if (b == -1) 
		{
			printf("Goodbye!");
			break;
		}

		printf("Enter the length of side C of a triangle: ");
		scanf("%f", &c);
		if (c == -1) 
		{
			printf("Goodbye!");
			break;
		}

		printf("\nValidating the triangle...");

		//Since the new variables of a, b, and c are just "floating" around in the system, these variabe should be stored somewhere.
		//Hence declared int val.
		int val = validate(a, b, c);
		if (val == 1)
		{
			printf("This is a valid triangle.");

			//Similar logic as previous.
			float area = computeArea(a, b, c);
			printf("\nThe area of the triangle is %.2f", area);

			float max = maximum(a, b, c);
			float min = minimum(a, b, c);
			printf("\n\nThe smallest side is %.2f and the largest side is %.2f", min, max);
		}

		else printf("Inputs do not form a triangle. Please input different numbers!");
	}

	_getch();
	return 0;
}