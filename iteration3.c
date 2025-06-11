
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   :  iteration3.c
//  Description :  This program prints "50 to 1"  nunber using a for loop.
//  Author      :  Prashant Balasaheb Mungase
//  Date        :  11/06/2025
//  Input       :  Integer
//  Output      :  Prints "50 to 1" Number 
//
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
        Start

                Step 1 : Declare an integer variable i and initialize it to 0

                Step 2 : Use a for loop to repeat steps from i = 50 to i <= 1

                Step 3 : In each loop iteration, print "50 to 1 " number

                Step 4 : After the loop ends, return 0 to end the program

        End

  */         
#include<stdio.h>
int main()
{
    int i = 0;
    for( i = 50 ; i>=1; i--)
    {
        printf("%d\n",i);

    }
    return 0;
}