////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   :  iteration6.c
//  Description :  This program prints numbers from 1 to 5 using a do-while loop.
//  Author      :  Prashant Balasaheb Mungase
//  Date        :  11/06/2025
//  Input       :  Integer
//  Output      :  Prints numbers from 1 to 5
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
     Start
            Step 1 :  Initialize variable 
                            i = 1

            Step 2 :  Repeat the following steps while i <= 5:
                        ->Print the value of i
                        ->Increment i by 1

            Step 3 : Print "Jay Ganesh"

     End
   
  */         

#include<stdio.h>
int main()
{
    int i = 0;
    i = 1;
    do
    {
        printf(" Jay Ganesh\n");
        i++;

    }while(i<=5);
    return 0;
}