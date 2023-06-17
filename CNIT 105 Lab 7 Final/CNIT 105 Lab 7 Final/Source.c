/*=======================================================
Your Name: Sun Hong Park
Your Purdue Email: park1432@purdue.edu
Lab Section: Fri. 1:30
Lab Number: Lab07
Program Description: The program allows the user to input numbers into the array. In the array that the
user set, the program will find the average, maximum value, and increase each value by 1.
==========================================================*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <math.h>
#define SIZE 5

int main()
{
	printf("************************\n"
		"* Sun Hong Park        *\n"
		"* park1432@purdue.edu  *\n"
		"* CNIT105 Lab 7        *\n"
		"************************");

	int arr[SIZE];
	int sum = 0;
	float avgerage;

	for (int i = 0; i < SIZE; i++)
	{
		printf("\nEnter a whole number: ");
		scanf("%d", &arr[i]);
		// Code for asking the user to input the values in the array. It will repeat until the size of the array i reaches SIZE.
	}
	
	printf("\n\nContent of array data:" "\n==========================");
	for (int i = 0; i < SIZE; i++)
	{
		printf("\t%d", arr[i]);
		//Displays the values of the array that the user typed.
	}

	for (int i = 0; i < SIZE; i++)
	{
		sum = sum + arr[i];
	}
	avgerage = sum / 5.0;
	//Equation to find the average of the array.
	printf("\n\nThe average of the values stored in array = %.2f", avgerage);

	int max = arr[0];
	//The program will store the maximum value in arr[0].
	for (int i = 1; i < SIZE; i++)
		//Therefore, it will repetitively check each value in the array. And when everytime the program discovers the biggest number
		// It will store in arr[0].
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
		// The code for when the program finds the biggest value.
	}
	printf("\nThe maximum value stored in the array is %d", max);

	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = arr[i] + 1;
		// Equation for adding 1 to each value.
	}

	printf("\n\nIncreased elements are:" "\n=======================");
	for (int i = 0; i < SIZE; i++)
	{
		printf("\n%d", arr[i]);
	}

	_getch();
	return 0;
}