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
int n;
printf("Enter the number of elements:  ");
fflush(stdin); fflush(stdout);
scanf("%i",&n);

int array_x[n];

	// fill the array
int i;
for(i=0;i<n;i++)
{
	array_x[i] = i+1;
}


	// Display the array
printf("\n\nYour array: ");
for(i=0;i<n;i++)
{
	printf(" %i\t",array_x[i]);
}

 	 // Get what the user needs
printf("\n\nEnter the element to be inserted: ");
int x;
fflush(stdin); fflush(stdout);
scanf("%i",&x);

printf("\n\nEnter the location: ");
int l;
fflush(stdin); fflush(stdout);
scanf("%i",&l);


	// Do the changes

int array_y[n+1];
for(i=l;i<n+1;i++)
{
	array_y[i+1] = array_x[i];
}
for(i=0;i<l;i++)
{
	array_y[i] = array_x[i];
}
array_y[l] = x;


	// Display output
printf("\n\nYour new array: ");
for(i=0;i<(n+1);i++)
{
	printf(" %i\t",array_y[i]);
}



return 0;
}

