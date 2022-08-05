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
	array_x[i] = (i+1)*11;
}


	// Display the array
printf("\n\nYour array: ");
for(i=0;i<n;i++)
{
	printf(" %i\t",array_x[i]);
}

 	 // Get what the user needs
printf("\n\nEnter the element to be searched: ");
int x;
fflush(stdin); fflush(stdout);
scanf("%i",&x);



	// Do the magic
for(i=0;i<n;i++)
{
if(array_x[i]==x)
	{
	printf("\nNumber found at location %i",i);
	break;
	}
}




return 0;
}

