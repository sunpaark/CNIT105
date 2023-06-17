/*=======================================================
Your Name: Sun Hong Park
Your Purdue Email: park1432@purdue.edu
Lab Section: Fri. 1:30
Lab Number: Assignment 4
Program Description: This program gives you the answer to one of the following options:
1. Area of rectangle
2. Volume of sphere
3. Surface area of cone
==========================================================*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <math.h>
#define PI 3.14159

int main()
{
	printf("************************\n"
		"* Sun Hong Park        *\n"
		"* park1432@purdue.edu  *\n"
		"* CNIT105 Assignment04 *\n"
		"************************");

	float A, B, C, length, width, height, radius;
	char menu;
	// In line 27, "char" allows to declare character variables. Character variables can only store single character.
	// Since we want to provide the options in single characters (A, B, and C), we declare menu as "char."

	printf("\n\nArea and Volume Calculation Options");
	printf("\n=========================================");
	printf("\nA. Area of a rectangle" "\nB. Volume of a sphere" "\nC. Surface area of a cone");
	printf("\n\nEnter your choice: ");
	scanf("%c", &menu);
	// Since the menu is declared as char, %c must be used in scanf.

	//Lines 40 - 75, provides the scenarios of each options.
	//Lines 40 - 48, displays the scenario when the user selects option A from the menu. Therefore the If statement shoudl be used.
	if ((menu == 'A'))
	{
		printf("\nEnter the length and width of the rectangle: ");
		scanf("%f", &length);
		scanf("%f", &width);
		A = length * width;
		//Equation for the area of the rectangle.
		printf("\nThe area of the rectangle is %.2f", A);
	}

	//Since there is a another scenario where the user selects option B from the menu, "else if" should be used.
	else if ((menu == 'B'))
	{
		printf("\nEnter the radius of the sphere: ");
		scanf("%f", &radius);
		B = (1.333333333333333) * PI * radius * radius * radius;
		//Equation for the volume of the sphere.
		// Due to the system issue, instead of putting 4/3, "1.33333333333" should be written for an accurate answer.
		printf("\nThe volume of the sphere is %.2f", B);
	}

	//Lines 62 - 69 provides the scenario when option C is selected from the menu.
	else if ((menu == 'C'))
	{
		printf("\nEnter the radius and height of the cone: ");
		scanf("%f", &radius), scanf("%f", &height);
		C = PI * radius * (radius + sqrt(radius * radius + height * height));
		// Equation for the surface area of the cone.
		printf("\nThe surface area of the cone is %.2f", C);
	}

	//Lines 72 - 75 provides a scenario where the user types a letter that is not on the menu.
	else
	{
		printf("\nInvalid input.");
	}

	_getch();
	return 0;
}