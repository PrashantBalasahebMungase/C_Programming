
/////////////////////////////////////////////////////////////////
//
//  File Name   : program44.c 
//  Description : Display digits of a number one by one
//  Input       : Integer 
//  Output      : Individual digits and updated number after each step
//  Author      : Prashant Balasaheb Mungase 
//  Date        : 16/06/2025
//
////////////////////////////////////////////////////////////////////////////
/*
    Start

            Step 1: Initialize the number -> iNo

            Step 2: Repeat while iNo > 0
                    -> Extract last digit using iDigit = iNo % 10
                    -> Display iDigit
                    -> Update iNo = iNo / 10

End
*/

#include<stdio.h>
int main()
{

    int iNo = 751;
    int  iDigit = 0;

    iDigit = iNo % 10;

        printf("Digit is :%d\n",iDigit);
        iNo = iNo / 10;
        printf("Updated Ino : iNo %d\n",iNo);

        iDigit = iNo % 10;
        printf(" Digit is :%d\n",iDigit);
        iNo = iNo / 10;
        printf("Updated Ino : iNo %d\n",iNo);


        iDigit = iNo % 10;
        printf(" Digit is :%d\n",iDigit);
        iNo = iNo / 10;
       printf("Updated Ino : iNo %d\n",iNo);

        return 0;
}