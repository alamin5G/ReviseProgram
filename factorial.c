/**
 * @file factorial.c
 * factorial with recursive function
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-04-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>

long long fac(int n);

void main()
{
    int a;
    printf("Enter a number: \n");
    scanf("%d", &a);
    printf("%d factorial value = %d\n", a, fac(a));
    
}

long long fac(int a){
    if (a>=1)
    {
        return a*fac(a-1);
    }else
    {
        return 1;
    }
}