/*
 * main.c
 *
 *  Created on: Jul 13, 2022
 *      Author: abdel
 */


// Ex 8
#include "stdio.h"

int main()
{

float x,y;
printf("Enter two numbers:   ");
fflush(stdout); fflush(stdin);
scanf("%f %f", &x,&y);

char c;
printf("Enter the operator (+ , - , * , /):   ");
fflush(stdout); fflush(stdin);
scanf("%c", &c);

switch(c)
{
case('+'):
	{printf("Result = %f",x+y);}
break;
case('-'):
	{printf("Result = %f",x-y);}
break;
case('*'):
	{printf("Result = %f",x*y);}
break;
case('/'):
	{printf("Result = %f",x/y);}

}

}

