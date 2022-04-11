/**
 * @file reverseString.c
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
#include <string.h>
void main()
{
    int i, leng;
    char ch[3];
    printf("Enter 3 separete Alphabetical Character: (without space) ");
    gets(ch);
    leng = strlen(ch);

    for (i =leng-1; i>=0; i--)
    {
        printf("%c ", ch[i]);
    }
}