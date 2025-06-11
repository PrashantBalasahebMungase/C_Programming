
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   :  iteration2.c
//  Description :  This program prints "1 to 5"  nunber using a for loop.
//  Author      :  Prashant Balasaheb Mungase
//  Date        :  11/06/2025
//  Input       :  Integer
//  Output      :  Prints "1 to 5" Number 
//
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
        Start

                Step 1 : Create an integer variable 
                            i = 0

                Step 2 : Use a for loop to repeat steps from
                             i = 1 to i <= 5

                Step 3 : In each loop iteration, print "1 to 5 " number

                
        End

  */         

#include<stdio.h>
int main()
{
    int i = 0;
    for(i = 1; i <= 5; i++)
    {
        printf("%d\n",i);
    }
    return 0;
}