/**
 * @file celToFar.c
 * celsius to fahrenheit
 * c = (f-32)/1.8
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-04-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>

void main()
{
    float c, f;

    printf("Enter celsius temp: \n");
    scanf("%f", &c);
    f = (c*1.8)+32;
    printf("%.1f celsius to fahrenheit = %.1f\n", c, f);
    printf("Enter fahrenheit temp: \n");
    scanf("%f", &f);
    c = (f-32)/1.8;
    printf("%.1f fahrenheit to celsius = %.1f\n", f, c);
}