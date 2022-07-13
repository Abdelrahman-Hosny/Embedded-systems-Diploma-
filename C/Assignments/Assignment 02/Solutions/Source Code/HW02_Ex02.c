/*
 * main.c
 *
 *  Created on: Jul 13, 2022
 *      Author: abdel
 */

#include "stdio.h"

int main()
{

char x;
printf("Enter an alphabet : ");
fflush(stdout);
scanf("%c",&x);

switch(x)
{
case 'a':
case 'i':
case 'o':
case 'u':
case 'e':
{printf("%c is a vowel ", x);}
break;

default:
{printf("%c is a consonant ", x);}

}

}

