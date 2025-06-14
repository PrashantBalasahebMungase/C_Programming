////////////////////////////////////////////////////////////////////////////
//
//  Flie Name   : program15.c 
//  Description : Accept the input from user print sequntial number 
//  input       : integer
//  output      : String
//  Author      : Prashant Balasaheb Mungase 
//   Date        : 14/06/2025
//
//////////////////////////////////////////////////////////////////////////////
/*
        Start 
                Accecpt the input From user
                print Sequnce number in Hello variable
                print the Hello in User Define Function 
                Call The main function to User Define Function
                
        Stop
*/

#include<stdio.h>
    // Iteration

void Display( int iNo)
{
    int iCnt = 0;
    for (iCnt = 1 ; iCnt <=iNo; iCnt++)
    {
        printf(" %d: HEllo \n",iCnt);
    }
}
int main()
{
     int iCntValue = 0;
     printf(" Enter the iCntValue :");

     scanf("%d",&iCntValue);

    Display(iCntValue);
    return 0;
}