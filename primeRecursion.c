/**
 * @file primeRecursion.c
 * check a prime number using recursive function
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-04-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>

int prime(int i, int n);

int main()
{

    int n, f;
    printf("Enter a number: \n");
    scanf("%d", &n);
    f = prime(2, n);
    if (f==0)
    {
        printf("%d is composite\n", n);
    }else
    {
        printf("%d is prime\n", n);
    }
    
    return 0;
}

int prime(int i, int n){

    if (i==n)
    {
        return 1;
    }else
    {
        if (n%i==0)
        {
            return 0;
        }else
        {
            return prime(i+1, n);
        }
    }
    
}
