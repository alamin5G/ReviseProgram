/**
 * @file pyramidNumber.c
 * pyramid number with number
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
    int i, j, k;
    for ( i = 1; i <=5; i++)
    {
        for(j = 1;j <=5-i;j++)
        {
            printf(" ");
        }

        for(k = 1;k <=i;k++)
        {
            printf("%d ",k );
        }
        printf("\n");
    }

    
    
    return 0;
}
