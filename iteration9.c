
////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   :  iteration9.c
//  Description :  This program prints numbers from 5 to 1 using a do-while loop.
//  Author      :  Prashant Balasaheb Mungase
//  Date        :  11/06/2025
//  Input       :  None
//  Output      :  Prints numbers from 5 to 1
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
        Start
                Step 1 : Initialize an integer variable
                             i = 5

                Step 2 : Do the following:
                        -> Print the value of i
                        -> Decrement i by 1

                Step 3 : Repeat step 3 while i >= 1

                Step 4 : Print the number 5 to 1 
        End
*/
#include<stdio.h>
int main()
{
    int i = 0;
    i = 5;
    do 
    {
        printf("%d\n",i);
        i--;
    }
    while(i>=1);
    return 0;
}