/*=======================================================
Your Name: Sun Hong Park
Your Purdue Email: park1432@purdue.edu
Lab Section: Fri. 1:30
Lab Number: Lab10
Program Description: 
==========================================================*//*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#define size 12typedef struct
{
	char name[15];
	int number;
} player;int main(){	printf("************************\n"
		"* Sun Hong Park        *\n"
		"* park1432@purdue.edu  *\n"
		"* CNIT105 Lab 10        *\n"
		"************************");	player info[size];	int num;	for (int i = 0; i < size; i++)
	{
		printf("\nEnter a player name: ");
		scanf("%s", &info[i].name);

		printf("\nEnter the player number");
		scanf("%s", &info[i].number);
	}	printf("\nNumber of players entered = %d", num);		/*	for (int i = 0; i < num; i++)	{		printf("\n%s\t\s", name, number);	}		char tmp[15];	char word[15];	printf("Enter a word: ");	scanf("%s", &tmp);	if (strcmp("XXXX", tmp) != 0)	{		strcpy(word, tmp);		printf("%s", word);	}	*//*	_getch();	return 0;}*/