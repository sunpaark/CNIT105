/*=======================================================
Programmer: Sun Hong Park
Email: park1432@purdue.edu
CNIT 105, Assignment 3
Program Description: A brief description of the program in your own words.
Academic Honesty:
I attest that this is my original work.
I have not used unauthorized source code, either modified or unmodified.
I have not given other fellow student(s) access to my program.
==========================================================*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <math.h>
// math.h allows to operate basic mathematics in C programming.

int main()
{
	printf("************************\n"
		"* Sun Hong Park        *\n"
		"* park1432@purdue.edu  *\n"
		"* CNIT105 Assignment03 *\n"
		"************************");

	float a, b, c, n, discriminant, root1, root2;
	printf("\n\nEnter the 3 coefficients a, b, c: ");
	// Line 27 is asking the user to input the three variables. 
	//(cont'd) It is possible to input multiple variables,
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);
	//(cont'd) Because we put multiple scanfs in lines 30 - 32. (It is also possible to put multiple scanfs).
	printf("\nThe Quadratic Equaiton is: %.1f X^2 + %.1f X + %.1f = 0", a, b, c);


	n = pow(b, 2);
	// Since the computer does not recognize b to the power of 2 due to the symbol "^,"
	//(cont'd) line 37 allows to put b^2 in the manner where the computer can understand.

	discriminant = (n)-(4 * a * c);
	// Line 41, declares the discriminant, by putting the discriminant equation.

	// Lines 45 - 46 allows to find the two roots.
	root1 = ((-(b)+sqrt(discriminant)) / (2 * a));
	root2 = ((-(b)-sqrt(discriminant)) / (2 * a));
	printf("\n\nThe Discriminant is: %.2f", discriminant);

	// Lines 51 - 64 defines three possible situtations for roots by using if statements.
	// Lines 51 - 53 declares a situation where the equation has two real roots, where the discriminant is greater than 0.
	if (discriminant > 0) {
		printf("\n\nThe equation has two real roots: %.2f and %.2f", root1, root2);
	}

	// Since we have more than one possible situation, in if statement, we must use "else if."
	// Lines 57 to 59 declares a situation where the equation has only one real root, where the discriminant is equal to zero. 
	else if (discriminant == 0) {
		printf("\n\nThe equation has only one root: %.2f", root1, root2);
	}

	//Since this is the last possible situation, we must use "else."
	//Lines 63 - 64 declares a situation where the equation has no real roots,where the discriminant is less than zero.
	else
		printf("\n\nThe equation has no real roots.");

	// Lines 67 to 75 allows the program to inform the user smallest coefficient in the equation.
	float arr[] = { a, b, c };
	// Line 66 declares an array of a, b, and c.
	float length = sizeof(arr) / sizeof(arr[0]);
	float min = arr[0];
	for (int i = 0; i < length; i++) {
		if (arr[i] < min)
			min = arr[i];
	}
	printf("\n\nThe smallest coefficient is: %.2f", min);

	_getch();
	return 0;
}