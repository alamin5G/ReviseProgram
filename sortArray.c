/**
 * @file sortArray.c
 * sort an array in ascending order and find the 3rd largest element in array.
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
    int nSize, i, j, temp;
    printf("Enter array size: \n");
    scanf("%d", &nSize);

    int a[nSize];

    for(i = 0;i < nSize;i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0;i < nSize;i++)
    {
        for(j = i+1;j < nSize;j++)
        {
            if (a[i]>a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            
        }
        
    }

    printf("3rd largest number is : %d\n", a[nSize-3]);

}