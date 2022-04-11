/**
 * @file primeFun.c
 * check prime using function
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-04-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>

int prime(int a);

void main()
{
    int n, f;
    printf("Enter a number: \n");
    scanf("%d", &n);
    f = prime(n);
    if (f!=0)
    {
        printf("%d is prime\n", n);
    }else
    {
        printf("%d is composite\n",n);
    }
    
}

int prime(int a){
    int i;
    for ( i = 2; i <= a/2; i++)
    {
        if (a%i==0)
        {
            return 0;
        }
        
    }

    return 1;
    
    
}