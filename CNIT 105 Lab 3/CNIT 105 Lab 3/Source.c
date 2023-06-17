/*=======================================================
Your Name: Sun Hong Park
Your Purdue Email: park1432@purdue.edu
Lab Section: Fri. 1:30
Lab Number: Lab03
Program Description:
==========================================================*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	printf("************************\n"
		"* In_Lab03             *\n"
		"* By:Sun Hong Park     *\n"
		"* park1432@purdue.edu  *\n"
		"************************");

	float D1, D2, D3, W, L, sidearea, bottomarea, volume, hyp;

	printf("\n\nEnter the first depth of the pool: ");
	scanf("%f", &D1);
	printf("Enter the second depth of the pool: ");
	scanf("%f", &D2);

	if (D2 > D1)
	{
		printf("Enter the width of the pool: ");
		scanf("%f", &W);
		printf("Enter the length of the pool: ");
		scanf("%f", &L);

		sidearea = (D1 + D2) * L / 2;
		printf("\n\nThe area of the side of the pool is %.2f", sidearea);

		D3 = D2 - D1;
		hyp = sqrt((D3 * D3) + (L * L));
		bottomarea = hyp * W;
		printf("\nThe area of the bottom of the pool is %.2f", bottomarea);

		volume = sidearea * W;
		printf("\nThe volume of the pool is %.2f", volume);
	}

	else printf("Invalid input. D2 must be greater than D1.");

	_getch();
	return 0;
}