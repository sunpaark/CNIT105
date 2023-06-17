/*=======================================================
Programmer: Sun Hong Park
Email: park1432@purdue.edu
CNIT 105, Assignment 9
Program Description: The program allows the user to input the values for USD. Then, the program permits
to convert the USD into Yen. Consequently, it will define the average and the items that are less than 5000 Yen for the users.

Academic Honesty:
I attest that this is my original work.
I have not used unauthorized source code, either modified or unmodified.
I have not given other fellow student(s) access to my program.
==========================================================*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <math.h>
#define SIZE 20
#define Yen 122.72

void display_My_Info()
{
	printf("\n************************"
		"\n* Sun Hong Park        *"
		"\n* park1432@purdue.edu  *"
		"\n* CNIT105 Assignment09 *"
		"\n************************");
}

//Creating the arrays for product.
typedef struct
{
	int id;
	float priceUSD;
	float priceYen;
} product;

// Creating the function that converts USD to Yen
float usd_to_yen(priceUSD)
{
	float priceYen;
	priceYen = priceUSD * Yen;
	return priceYen;
}

int main()
{
	display_My_Info();

	int num = 0;

	// Declaring item as an array.
	product item[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		//Collecting the ID of items from the user.
		printf("\n\nEnter the id of an item <enter 0 to end>: ");
		scanf_s("%d", &item[i].id);
		if (item[i].id == 0)
		{
			num = i;
			break;
		}

		//Collecting the price of the item from the user.
		printf("Enter the price of an item <enter 0 to end>: ");
		scanf_s("%f", &item[i].priceUSD);
		if (item[i].priceUSD == 0)
		{
			num = i;
			break;
		}
	}

	//Displaying the amount of items entered by the user.
	printf("\nNumber of prices entered = %d", num);

	//Displaying the items in a list
	printf("\n\nThe prices that were entered are:"
		"\nItem ID\t\tUSD\t\Yen"
		"\n===================================");
	for (int i = 0; i < num; i++)
	{
		printf("\n%d\t\t%.2f\t\t%.2f", item[i].id, item[i].priceUSD, (item[i].priceUSD * Yen));
	}

	//Computing the average of USD.
	float sumusd = 0;
	float averageusd = 0;
	for (int i = 0; i < num; i++)
	{
		sumusd = sumusd + item[i].priceUSD;
		averageusd = sumusd / num;
	}
	printf("\n\nThe average price in USD is %.2f", averageusd);

	//Calculating the average of Yen.
	float averageyen = 0;
	float sumyen = 0;
	for (int i = 0; i < num; i++)
	{
		sumyen = sumyen + item[i].priceUSD * Yen;
		averageyen = sumyen / num;
	}
	printf("\nThe average price in Yen is %.2f", averageyen);

	//Determining the items that is cheaper than 5000 Yen
	printf("\n\nPrices Less than 5000 Yen" "\n=============================");
	for (int i = 0; i < num; i++)
	{
		if ((item[i].priceUSD * Yen) < 5000)
		{
			printf("\nID:  %d\tUSD:  %.2f\tYen:  %.2f", item[i].id, item[i].priceUSD, ((item[i].priceUSD * Yen) < 5000));
		}
	}

	_getch();
	return 0;
}
