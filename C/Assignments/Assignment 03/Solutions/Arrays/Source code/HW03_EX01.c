/*
 * Assignment 03
 * Arrays and strings
 *
 *  Created on: Aug 4, 2022
 *      Author: abdelrahman Hosny
 */


#include"stdio.h"

int main()
{

int array_x[2][2];
int array_y[2][2];
int array_z[2][2];

int r=0,c=0;


// take input from user

// array x
printf("array x: \n");
for(r=0;r<2;r++)
{
	for(c=0;c<2;c++)
	{
	printf("Number of place %i%i in array x = ",r,c);
	fflush(stdin); fflush(stdout);
	scanf("%i",&array_x[r][c]);
	}
}

// array y
printf("array y: \n");
for(r=0;r<2;r++)
{
	for(c=0;c<2;c++)
	{
	printf("Number of place %i%i in array y = ",r,c);
	fflush(stdin); fflush(stdout);
	scanf("%i",&array_y[r][c]);
	}
}



// Do the math
for(r=0;r<2;r++)
{
	for(c=0;c<2;c++)
	{
		array_z[r][c] = array_x[r][c] + array_y[r][c];
	}
}



// print output
printf("\n resulting array z = ");
for(r=0;r<2;r++)
{
	for(c=0;c<2;c++)
	{
	printf("%i\t",array_z[r][c]);
	}

}

return 0;
}

