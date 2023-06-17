/*=======================================================
Your Name: Sun Hong Park
Your Purdue Email: park1432@purdue.edu
Lab Section: Fri. 1:30
Lab Number: Lab10
Program Description: The program allows the user to input player's information that includes the name and the number.
==========================================================*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#define size 12

typedef struct
{
	char name[15];
	int number;
} player;

int main()
{
	printf("************************\n"
		"* Sun Hong Park        *\n"
		"* park1432@purdue.edu  *\n"
		"* CNIT105 Lab 10       *\n"
		"************************");

	//Creating the struct that stores the information of the player, which includes the number and the name.
	player info[size];
	int num=0;
	//Creating a temporary character to store the names of the players.
	char aname[15];

	for (int i = 0; i < size; i++)
	{
		//Asking the user to input the name of the player.
		printf("\nEnter a player name: ");
		scanf("%s", &aname);
		
		//If the user typed "XXXX" it will exit the loop.
		if (strcmp("XXXX", aname) == 0)
		{
			num = i;
			break;
		}

		//Now copying the previously entered datas from "aname" to the appropriate array "info[i].name"
		strcpy(info[i].name, aname);
		printf("Enter the player number: ");
		scanf("%d", &info[i].number);
	}
	//Print the amount of players that were entered.
	printf("\nNumber of players entered = %d", num);

	//Printing the players in a list.
	printf("\n\nPlayer Roster"
		"\n=====================");
	for (int i = 0; i < num; i++)
	{
		printf("\n%s\t\%d", info[i].name, info[i].number);
	}

	_getch();
	return 0;

}
