/*=======================================================
Your Name: Sun Hong Park
Your Purdue Email: park1432@purdue.edu
Lab Section: Fri. 1:30
Lab Number: Lab08
Program Description: The program displays the values saved in the arrays: ID, GPA, and Number of courses.
After, the program displays the students that satisfies a certain condition, wich are:
1. Students that are taking three courses.
2. Students with GPA greater than 3.
3. Students with ID 1001.
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
		"* CNIT105 Lab 8        *\n"
		"************************");

	int id[5] = { 1000, 1001, 1002, 1003, 1004 };
	float gpa[5] = { 3.2, 3.5, 3.0, 2.8, 1.77 };
	// Since the values in GPA array are in decimals, the array must be declared as float.
	int course[5] = { 2, 4, 5, 3, 1 };

	printf("\n\nID\tGPA\tNumber of Course" "\n==================================");

	for (int i = 0; i < 5; i++)
	{
		printf("\n%d\t%.2f\t%d", id[i], gpa[i], course[i]);
	}

	printf("\n\nStudents taking three courses: ");
	// The for loop allows the program to check all the values inside the array, 
	for (int i = 0; i < 5; i++)
	{
		//And when the condition is met--the if statement--, which in this case is if the number of course is equal to 3.
		if (course[i] == 3)
		{
			//(cont') it will print the student that meets the condition.
			printf("\nID: %d\tGPA: %.2f\tNumber of Courses: %d", id[i], gpa[i], course[i]);
		}
	}

	printf("\n\nStudents with GPA greater than 3: ");
	for (int i = 0; i < 5; i++)
	{
		//Condition for students who have a GPA higher than 3.0.
		if (gpa[i] > 3.0)
		{
			printf("\nID: %d\tGPA: %.2f\tNumber of Courses: %d", id[i], gpa[i], course[i]);
		}
	}

	printf("\n\nStudents with ID 1001: ");
	for (int i = 0; i < 5; i++)
	{
		//Condition for students who have ID number 1001.
		if (id[i] == 1001)
		{
			printf("\nID: %d\tGPA: %.2f\tNumber of Courses: %d", id[i], gpa[i], course[i]);
		}
	}

	_getch();
	return 0;
}