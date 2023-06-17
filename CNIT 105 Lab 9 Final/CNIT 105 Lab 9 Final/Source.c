/*=======================================================
Your Name: Sun Hong Park
Your Purdue Email: park1432@purdue.edu
Lab Section: Fri. 1:30
Lab Number: Lab09
Program Description: The program allows the user to input the low and high temperatures of April. 
Then the program saves the data into an array, and displays the list. Lastly, the program displays the list
(con't) where the first and last elements in the array are swapped.
==========================================================*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <math.h>
#define SIZE 30

//Stores low_temp and high_temp into a struct.
typedef struct
{
	int low_temp;
	int high_temp;
} LowHighTemp;

int main()
{
	printf("************************\n"
		"* Sun Hong Park        *\n"
		"* park1432@purdue.edu  *\n"
		"* CNIT105 Lab 9        *\n"
		"************************");

    //Declaring april array.
	LowHighTemp april[SIZE];

    int num, firstlowelement, firsthighelement;

    for (int i = 0; i < SIZE; i++)
    {
        printf("\nEnter low and high temperatures (enter -1 -1 to end data entry): ");
        scanf("%d %d", &april[i].low_temp, &april[i].high_temp);

        //Establishing that when the user types in -1, it terminates the data entry.
        if (april[i].low_temp == -1 && april[i].high_temp == -1)
        {
            num = i;
            break;
        }
    }
    //Displaying the number of days that the user entered.
    printf("\nNumber of days entered = %d", num);

    //Displaying all the elements (both low and high temperature) that the user entered.
    printf("\n\nLow\tHigh"
        "\n==================");
    for (int i = 0; i < num; i++)
    {
        printf("\n%d\t%d", april[i].low_temp, april[i].high_temp);
    }

    //Swapping the first element and last element in the array of low_temp.
    firstlowelement = april[0].low_temp;
    april[0].low_temp = april[num - 1].low_temp;
    april[num - 1].low_temp = firstlowelement;

    //Swapping the first and last elements in the array of high_temp.
    firsthighelement = april[0].high_temp;
    april[0].high_temp = april[num - 1].high_temp;
    april[num - 1].high_temp = firsthighelement;

    //Displaying the changed list of array.
    printf("\nAfter swapping the first and last array element"
        "\nLow\tHigh"
        "\n==================");
    for (int i = 0; i < num; i++)
    {
        printf("\n%d\t%d", april[i].low_temp, april[i].high_temp);
    }

	_getch();
	return 0;
}