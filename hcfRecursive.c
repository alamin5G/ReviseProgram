/**
 * @file hcfRecursive.c
 * highest commmon factor using recursive function
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-04-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
int hcf(int a, int b);
int main()
{
    int x, y, n1, n2, hc;
    printf("Enter 2 number n1 & n2\n");
    scanf("%d%d", &n1, &n2);
    hc = hcf(n1, n2);
    printf("%d and %d HCF = %d\n", n1, n2, hc);
    
    return 0;
}

int hcf(int a, int b){
    if (b==0)
    {
        return a;
    }else
    {
        return hcf(b, a%b);
    }
    
}
