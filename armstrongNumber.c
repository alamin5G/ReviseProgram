/**
 * @file armstrongNumber.c
 * check armstrong number
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
    int a, rem, arm=0, temp;

    printf("Enter a number: (ex: 153)\n");
    scanf("%d", &a);

    temp = a;
    while (temp!=0)
    {
        rem = temp%10;
        arm = arm + rem*rem*rem;
        temp = temp/10;
    }

    if (a == arm)
    {
        printf("%d is armstrong number.\n",a);
    } else
    {
        printf("%d is not armstrong number.", a);
    }
    
    return 0;
}
