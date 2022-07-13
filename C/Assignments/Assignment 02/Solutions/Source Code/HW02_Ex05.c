/*
 * main.c
 *
 *  Created on: Jul 13, 2022
 *      Author: abdel
 */


// Ex 5
#include "stdio.h"

int main()
{

char c;
printf("Enter a character: ");
fflush(stdout);
scanf("%c", &c);

if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	printf("%c is an alphabet.", c);
else
	printf("%c is not an alphabet.", c);

}

