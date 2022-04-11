/**
 * @file fibonacciCerteinNum.c
 * Fibonacci Sequence Up to a Certain Number
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
    int first=0, last=1, fib=0, n;

    printf("Enter fibonacci range: \n");
    scanf("%d", &n);
    printf("%d %d", first, last);
    fib = first +last;
    while (fib < n)
    {
        printf(" %d", fib);
        fib = first +last;
        first = last; 
        last = fib;
    }
    
    
    return 0;
}
