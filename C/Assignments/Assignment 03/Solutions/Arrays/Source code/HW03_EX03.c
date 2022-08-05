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

	// take input from user
   // size of the matrix
int r,c;
printf("Enter the number of rows:  ");
fflush(stdin); fflush(stdout);
scanf("%i",&r);
printf("Enter the number of columns:  ");
fflush(stdin); fflush(stdout);
scanf("%i",&c);



float array_x[r][c];
float trans_x[c][r];

	// fill the array
printf("\n\nEnter elements of matrix: \n");


int C = 0,R = 0;
for(R=0;R<r;R++)
{
	for(C=0;C<c;C++)
	{
		printf("value of %i%i element ",R,C);
		fflush(stdin); fflush(stdout);
		scanf("%f",&array_x[R][C]);
	};
}




printf("\n\nEntered matrix: ");
for(R=0;R<r;R++)
{
	printf(" \n");
	for(C=0;C<c;C++)
	{
		printf(" %f\t",array_x[R][C]);
	};
}




// Get the transpose

for(R=0;R<r;R++)
{
	for(C=0;C<c;C++)
	{
		trans_x[C][R] = array_x[R][C];
	};
}


// print output
printf("\n\nTranspose: ");
for(C=0;C<c;C++)
{
	printf(" \n");
	for(R=0;R<r;R++)
	{
		printf(" %f\t",trans_x[C][R]);
	};
}


return 0;
}

