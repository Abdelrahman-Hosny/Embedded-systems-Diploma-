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

int n;

// take input from user .. number of array elements
printf("Enter the number of array elements:  ");
fflush(stdin); fflush(stdout);
scanf("%i",&n);

float array_x[n];
// fill the array
printf("Enter the values of array: \n");
int i = 0;
for(i=0;i<n;i++)
{
	printf("value of %i element ",i);
	fflush(stdin); fflush(stdout);
	scanf("%f",&array_x[i]);
}



// Do the math
float average, sum=0;
for(i=0;i<n;i++)
{
 sum = sum + array_x[i];
}
average = sum/n;


// print output
printf("\nAverage  = %f",average);


return 0;
}

