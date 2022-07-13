/*
 * main.c
 *
 *  Created on: Jul 13, 2022
 *      Author: abdel
 */

#include "stdio.h"

int main()
{

int a;
printf("Enter the number you want to check : ");
fflush(stdout); fflush(stdin);
scanf("%d",&a);

if(a%2 == 0){printf("%d is even", a);}
else{printf("%d is odd", a);}


}

