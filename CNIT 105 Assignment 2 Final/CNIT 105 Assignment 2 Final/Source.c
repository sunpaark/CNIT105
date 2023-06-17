/*=======================================================
Programmer: Sun Hong Park
Email: park1432@purdue.edu
CNIT 105, Assignment 02

Program Description: This program prints "CIT 105."
Academic Honesty:
I attest that this is my original work.
I have not used unauthorized source code, either modified or unmodified.
I have not given other fellow student(s) access to my program.
==========================================================*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

int main()
{
	printf("************************\n"
		"* Sun Hong Park        *\n"
		"* park1432@purdue.edu  *\n"
		"* CNIT105 Assignment02 *\n"
		"************************");

	float pounds, kilograms, celsius, fahrenheit, centimeters, kilometers;
	int feet, inches, miles;
	//The difference betweeen "float" and "int" is that float is used when the input is desired to be display in decimals.
	//Whereas, "int" is used when the input is desired to be displayed as a whole number.

	printf("\n\nConversion Calculator"
		"\n================================="
		"\nConverting pounds to kilograms."
		"\nEnter the weight in pounds: ");
	scanf("%f", &pounds);
	//"scanf" allows to collect the user's input.
	kilograms = pounds * 0.45359237;
	//Equation to convert pounds to kilograms.
	printf("The weight entered is %.2f lbs and is equivalent to %.2f kg", pounds, kilograms);
	//More than one variable can be displayed in printf, if the use of "," is clear.

	printf("\n\nConverting degrees Celsius to Fahrenheit."
		"\nEnter the temperature in Celsius: ");
	scanf("%f", &celsius);
	fahrenheit = ((celsius * 9)/5) + 32.0;
	// Equation to convert celsius to fahrenheit.
	// Parentheses is cruel when inputing equations in C programming, 
	// As it can output a competely different number than expected.
	printf("The temperature entered is %.1f C and is equivalent to %.1f F", celsius, fahrenheit);

	printf("\n\nConverting height to centimeters."
		"\nEnter the height in feet: ");
	scanf("%d", &feet);
	printf("Now enter the inches: ");
	scanf("%d", &inches);
	centimeters = ((feet * 12) + inches) * 2.54;
	// Equation to convert feet and inches to centimeters.
	printf("The height entered is %d feet %d inches and is equivalent to %.2f cm", feet, inches, centimeters);

	printf("\n\nConverting miles to kilometers."
		"\nEnter the distance in miles: ");
	scanf("%d", &miles);
	kilometers = miles * 1.609;
	// Equation to convert miles to kilometers.
	printf("The distance entered is %d miles and ie equivalent to %.1f km", miles, kilometers);

	_getch();
	return 0;
}