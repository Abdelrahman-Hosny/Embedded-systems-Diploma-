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


 // reverse the string
char array_reverse[100];
for(i=0;i<count;i++)
{
	array_reverse[count-i-1]=array_x[i];
}
array_reverse[0]=array_x[count-1];
array_reverse[count]='\0';

printf("\n\n%s",array_x);
printf("\n\n%s",array_reverse);

return 0;
}

