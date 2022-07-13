/*
 * main.c
 *
 *  Created on: July 13, 2022
 *      Author: Abdelrahman Hosny
 */




#include "stdio.h"

int main()
{

int a,b;
printf("Enter the value of a : ");
fflush(stdout); fflush(stdin);
scanf("%d",&a);
printf("\nEnter the value of b : ");
fflush(stdout);
scanf("%d",&b);

printf("\nBefore swap:  a=%d b=%d",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("\n\nAfter swap:  a=%d b=%d",a,b);

}



