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

char array_x[100];
char x;

printf("Enter your string:  ");
fflush(stdin); fflush(stdout);
gets(array_x);


int i,count=0;
for(i=0;array_x[i]!='\0';i++)
{
	if(array_x[i]!='\0'){count = count +1;}
}


	// Display the array
printf("count = %i",count);


return 0;
}

