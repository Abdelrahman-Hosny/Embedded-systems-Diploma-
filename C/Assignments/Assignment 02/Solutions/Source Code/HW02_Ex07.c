/*
 * main.c
 *
 *  Created on: Jul 13, 2022
 *      Author: abdel
 */


// Ex 7
#include "stdio.h"

int main()
{

int n,x=1,i;
printf("Enter your number:   ");
fflush(stdout);
scanf("%d", &n);


if(n>0)
{
	for(i=1;i<=n;i++)
		{x = x * i;}
	printf("Result = %d ",x);
}
else if(n==0)
{
	printf("Result = 1 ");
}
else
{
printf("Error !! Factorial of negative number does not exist");
}


}

