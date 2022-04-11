/**
 * @file patternTriangle.c
 * pattern triangle https://prnt.sc/OMBUM952mdPs
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-04-12
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>

int main()
{
    int i, j;
    for(i = 1;i <= 5;i++)
    {
        for(j = 5;j >=1;j--)
        {
            if (j>i)
            { 
                printf("  ");
            }else
            {
                printf("* ");
            }
            
        }
        printf("\n");
    }
    
    return 0;
}
