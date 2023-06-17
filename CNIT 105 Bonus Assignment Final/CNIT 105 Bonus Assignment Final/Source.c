/*=======================================================
Your Name: Sun Hong Park
Your Purdue Email: park1432@purdue.edu
Lab Section: Fri. 1:30
Lab Number: Bonus Assignment
Program Description: The program allows the user to find the average GPA, minimum number of courses, and
Maximum GPA to users.
==========================================================*/

#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#define size 20

typedef struct
{
	char fname[15];
	char lname[15];
	float gpa;
	int course;

} record;

void display_array(record[size], int);

int main()
{
	printf("****************************\n"
		"* Sun Hong Park            *\n"
		"* park1432@purdue.edu      *\n"
		"* CNIT105 Bonus Assignment *\n"
		"****************************");

	record info[size];
	float average, sum = 0;

	FILE* fptr;
	//Declaring the pointer.
	fptr = fopen("students.txt", "r");
	//Opening the students.txt file.

	if (fptr == NULL)
	{
		printf("File failed to be opened.");
		return 1;
	}
	//If the file cannot be opened, it will display the message.
	
	int index = 0;
	while (feof(fptr) == 0)
	{
		fscanf(fptr, "%s %s %f %d", info[index].fname, info[index].lname, &info[index].gpa, &info[index].course);
		index++;
		//Scanning the file.
	}
	fclose(fptr);

	printf("\n\n%d lines were read from the file.", index);
	//Displaying how many arrays were saved inside the file.

	printf("\n\n\First\tLast\tGPA\tCourses");
	printf("\n==================================");
	for (int i = 0; i < index; i++)
	{
		printf("\n%s\t%s\t%.2f\t%d", info[i].fname, info[i].lname, info[i].gpa, info[i].course);
	}
	//Displaying all the values in a list.

	float min;
	min = info[0].course;
	for (int n = 0; n < index; n++)
	{
		if (info[n].course < min)
		{
			min = info[n].course;
		}
	}
	printf("\n\nThe minimum number of courses is %d.", min);
	//Finding the minimum number of course.

	printf("\nThe students with the minimum number of courses are:");
	for (int n = 0; n < index; n++)
	{
		if (info[n].course > min)
		{
			printf("");
		}

		else
		{
			printf("\n\n%s\t%s", info[n].fname, info[n].lname);
		}
	}
	//Displaying the student who has the minimmum course.

	float max = 0;
	for (int m = 0; m < index; m++)
	{
		if (info[m].gpa > max)
		{
			max = info[m].gpa;
		}

	}
	printf("\n\nThe maximum GPA is %.2f.", max);
	//Finding the maximum GPA.

	printf("\nThe students with the maximum GPA are:");
	for (int m = 0; m < index; m++)
	{
		if (info[m].gpa < max)
		{
			printf("");
		}
		else
		{
			printf("\n\n%s\t%s", info[m].fname, info[m].lname);
		}
	}
	//Displaying the students who have the maximum GPA.

	for (int i = 0; i < index; i++)
	{
		sum = sum + info[i].gpa;
		average = sum / index;
	}
	printf("\n\nThe average GPA is %.2f", average);
	//Finding the average GPA.

	printf("\nThe students with GPAs above the average are: ");
	for (int i = 0; i < index; i++)
	{
		if (info[i].gpa < average)
		{
			printf("");
		}

		else
		{
			printf("\n%s\t%s", info[i].fname, info[i].lname);
		}
	}
	//Displaying students who have above the average GPA.

	fptr = fopen("results.txt", "w");
	if (fptr == NULL)
	{
		printf("Filed failed to be opened.");
		return 1;
	}

	fprintf(fptr, "\n\n%d lines were read from the file.", index);

	fprintf(fptr, "\n\n\First\tLast\tGPA\tCourses");
	fprintf(fptr, "\n==================================");
	for (int i = 0; i < index; i++)
	{
		fprintf(fptr, "\n%s\t%s\t%.2f\t%d", info[i].fname, info[i].lname, info[i].gpa, info[i].course);
	}

	fprintf(fptr, "\n\nThe minimum number of courses is %d.", min);
	fprintf(fptr, "\nThe students with the minimum number of courses are:");
	for (int n = 0; n < index; n++)
	{
		if (info[n].course > min)
		{
			fprintf(fptr, "");
		}

		else
		{
			fprintf(fptr, "\n\n%s\t%s", info[n].fname, info[n].lname);
		}
	}

	fprintf(fptr, "\n\nThe maximum GPA is %.2f.", max);

	fprintf(fptr, "\nThe students with the maximum GPA are: ");
	for (int m = 0; m < index; m++)
	{
		if (info[m].gpa < max)
		{
			fprintf(fptr, "");
		}

		else
		{
			fprintf(fptr, "\n\n%s %s", info[m].fname, info[m].lname);
		}
	}

	fprintf(fptr, "\n\nAverage GPA = %.2f", average);
	fprintf(fptr, "\nThe students with GPAs above the average are: ");
	for (int i = 0; i < index; i++)
	{
		if (info[i].gpa < average)
		{
			fprintf(fptr, "");
		}

		else
		{
			fprintf(fptr, "\n%s\t%s", info[i].fname, info[i].lname);
		}
	}

	fclose(fptr);

	printf("\n\nThe file was saved successfully");

	_getch();
	return 0;
}
