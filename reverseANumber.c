/**
 * @file reverseANumber.c
 * reverse and inputted number ex: 123 output 321
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-04-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>

int main()
{
    int n, temp, rem=0, rev=0;
    printf("Enter a number: \n");
    scanf("%d", &n);
    temp = n;
    while (temp!=0)
    {
        rem = temp%10;
        rev = rev *10+rem;
        temp = temp/10;
    }

    printf("%d = %d", n, rev);
    
    return 0;
}
