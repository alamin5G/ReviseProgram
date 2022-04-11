/**
 * @file hcf.c
 * 
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
    int i, j, a, b, hcf, lcf;
    printf("Enter 2 number a and b: \n");
    scanf("%d%d", &a, &b);
    int n1 = a, n2 = b;

    // if (a<b)
    // {
    //     i = a;
    //     a = b;
    //     b = i;
    // }
    
    while(b!=0){
        hcf = a%b;
        a = b;
        b = hcf;
    }

    printf("%d and %d GCF = %d\n",n1, n2, a );
    lcf = (n1*n2)/a;
    printf("%d and %d LCF = %d\n",n1, n2, lcf);
    
    
    
    return 0;
}
