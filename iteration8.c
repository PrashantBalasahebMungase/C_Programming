////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   :  iteration8.c
//  Description :  This program prints numbers from 5 to 1 using a while loop.
//  Author      :  Prashant Balasaheb Mungase
//  Date        :  11/06/2025
//  Input       :  Integer
//  Output      :  Prints numbers from 5 to 1
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
   Start
                
            Step 1 : Create an integer variable 
                        i = 5

            Step 2 :  While i >= 1, do:
                -> Print the value of i
                -> Decrease i by 1
            
     End

*/
#include<stdio.h>
int main()
{
    int i = 0;
    i = 5;
    while(i>=1)
    {
        printf("%d\n",i);
        i--;

    }
    return 0;

}