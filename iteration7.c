////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   :  iteration7.c
//  Description :  This program prints numbers from 1 to 5 using a do-while loop.
//  Author      :  Prashant Balasaheb Mungase
//  Date        :  11/06/2025
//  Input       :  Integer
//  Output      :  Prints numbers from 1 to 5
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
   Start
            Step 1 : Create a integer variable as 
                      i = 1
            Step 2 : Do the following:
            Step 3 : Print the value of i
            Step 4 : Increment i by 1
            Step 5 : Repeat step 3 while i <= 5

     End

*/
#include<stdio.h>
int main()
{
    int i = 0 ;
    i = 1; 
    do
     {
        printf("%d\n",i);
        i++;

     }
     while(i<=5);
     return 0;
}