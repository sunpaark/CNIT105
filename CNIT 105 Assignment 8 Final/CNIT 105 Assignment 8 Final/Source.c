/*=======================================================
Programmer: Sun Hong Park
Email: park1432@purdue.edu
CNIT 105, Assignment 8
Program Description: The program allows the user to input specific item ID and its price. After the program collected the user's input,
It displays the list, the average price (both in USD and Euro), and items that are less than $75.

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
#define Euro 0.90546

void display_My_Info()
{
	printf("\n************************" 
		"\n* Sun Hong Park        *" 
		"\n* park1432@purdue.edu  *" 
		"\n* CNIT105 Assignment08 *" 
		"\n************************");
}

//Function that allows to convert USD to Euro.
float usd_to_euro(float x)
{
    float y;
    y = x * Euro;
    return y;
}

float price[SIZE], y[SIZE], averageusd, averageeuro;
int num, sumusd = 0, sumeuro = 0, id[SIZE];

int main()
{
	display_My_Info();

    //A for loop is created because we want to collect the user's input until she or he types 0. 
    for (int i = 0; i < SIZE; i++)
    {
        printf("\n\nEnter the id of an item <enter 0 to end>: ");
        scanf("%d", &id[i]);
        //Code when the user types 0, it will terminate the loop.
        if (id[i] == 0)
        {
            num = i;
            break;
        }

        printf("Enter the price of an item <enter 0 to end>: ");
        scanf("%f", &price[i]);
        if (price[i] == 0)
        {
            num = i;
            break;
        }
    }

    printf("\nNumber of prices entered = %d", num);

    //Displays the user's inputs in a list.
    printf("\n\nThe prices that were entered are:"
        "\nItem ID\t\tUSD\t\tEuro"
        "\n===================================");
    for (int i = 0; i < num; i++)
    {
        printf("\n%d\t\t%.2f\t\t%.2f", id[i], price[i], usd_to_euro(price[i]));
    }

    //Code to calcualte the average of USD.
    sumusd = 0;
    for (int i = 0; i < num; i++)
    {
        sumusd = sumusd + price[i];
        averageusd = (float) sumusd / i;
    }
    printf("\n\nThe average price in USD is %.2f", averageusd);

    //The computer collected the value of averageusd, and converted into Euro.
    averageeuro = usd_to_euro(averageusd);
    printf("\nThe average price in Euros is %.2f", averageeuro);

    //The code detects items that are less than $75.
    printf("\n\nPrices Less than $75" "\n=============================");
    //for loop is used in order to check all the values that the user typed in.
    for (int i = 0; i < num; i++)
    {
        //When the price is less than 75, the computer will display it.
        if (price[i] < 75)
        {
            printf("\nID:  %d\tUSD:  %.2f\tEuro:  %.2f", id[i], price[i], usd_to_euro(price[i]));
        }
    }

    _getch();
    return 0;
}