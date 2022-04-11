/**
 * @file primeNumber.c
 * prime number
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
    int n, i, f=0;
    printf("Enter a number: \n");
    scanf("%d", &n);

    for ( i = 2; i <=n/2; i++)
    {
        if (n%i == 0)
        {
            f=1;
            break;
        }
        
    }

    if (f==1)
    {
        printf("%d is composite number.\n", n);
    }else
    {
        printf("%d is prime number.\n",n);
    }
    
    
}