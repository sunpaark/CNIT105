/*=======================================================
Programmer: Sun Hong Park
Email: park1432@purdue.edu
CNIT 105, Assignment 10
Program Description: 

Academic Honesty:
I attest that this is my original work.
I have not used unauthorized source code, either modified or unmodified.
I have not given other fellow student(s) access to my program.
==========================================================*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <math.h>
#define size 20

typedef struct
{
	char productName[10];
	float price;
} product;

int main()
{
	printf("************************"
		"\n* Sun Hong Park        *"
		"\n* park1432@purdue.edu  *"
		"\n* CNIT105 Assignment10 *"
		"\n************************");

	int num;
	product info[size];
	char pname[15];
	float sum = 0;
	float average = 0;

	for (int i = 0; i < size; i++)
	{
		printf("\nEnter name for the product: ");
		scanf("%s", &pname);

		if (strcmp("XXXX", pname) == 0)
		{
			num = i;
			break;
		}
		strcpy(info[i].productName, pname);

		printf("Enter the unit price: ");
		scanf("%f ", &info[i].price);

	}
	printf("\nNumber of products entered = %d", num);

	printf("\n\nProduct\tUnit Price"
		"\n=============================");
	for (int i = 0; i < num; i++)
	{
		printf("\n%s\t\t%.2f", info[i].productName, info[i].price);
	}
	/*
	for (int i = 0; i < num; i++)
	{
		sum = sum + info[i].price;
		average = sum / num;
	}
	printf("\n\nThe average price in USD is %.2f", average);
	*/
	_getch();
	return 0;
}