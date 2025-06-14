////////////////////////////////////////////////////////////////////////////
//
//  Flie Name   : program14.c 
//  Description : Accept the input from user print the Hello 
//  input       : integer
//  output      : String
//  Author      : Prashant Balasaheb Mungase 
//  Date        : 14/06/2025
//
//////////////////////////////////////////////////////////////////////////////
/*
        Start 
                Accecpt the input From user
                print the Hello in User Define Function 
                Call The main function to User Define Function
                
        Stop
*/
#include<stdio.h>
    // Iteration

void Display( int iNo)
{
    int iCnt = 0;
    for (iCnt = 1 ; iCnt <= iNo; iCnt++)
    {
        printf(" Hello\n ");
    }
}
int main()
{
     int iCntValue = 0;
     printf(" Enter the Frequncy:");

     scanf("%d",&iCntValue);

    Display(iCntValue);
    return 0;
}