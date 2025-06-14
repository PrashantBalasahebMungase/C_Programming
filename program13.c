
////////////////////////////////////////////////////////////////////////////
//
//  Flie Name   : program13.c 
//  Description : Display the  integer in Four times 
//  input       : integer
//  output      : String
//  Author      : Prashant Balasaheb Mungase 
//  Date        : 14/06/2025
//
//////////////////////////////////////////////////////////////////////////////
/*
        Start 
                Using the Iteration loop

                Create the User Define Function

                if user the print value 10
                    Display five times  
                    
                Call The main Function to user Define Function
        Stop
*/

#include<stdio.h>
    // Iteration

void Display( int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <=5; iCnt++)
    {
        printf("%d\n",iNo);
    }
}
int main()
{
     int iCntValue = 0;
     printf(" Enter the iCntValue \n :");

     scanf("%d",&iCntValue);

    Display(iCntValue);
    return 0;
}