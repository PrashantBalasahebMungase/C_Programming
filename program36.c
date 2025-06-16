////////////////////////////////////////////////////////////////////////////
//
//  File Name   : program36.c 
//  Description : Display Even Factors of a Number  
//  Input       : Integer
//  Output      : List of Even Factors
//  Author      : Prashant Balasaheb Mungase 
//  Date        : 16/06/2025
//
////////////////////////////////////////////////////////////////////////////
/*
Start

Step 1: Accept a number from the user → iValue

Step 2: If the number is negative, convert it to positive

Step 3: Run a loop from i = 1 to i < iValue / 2

Step 4: For each i:
        -> If (iValue % i == 0) AND (i is even)
        -> Print "Factor is i"

Step 5: Repeat until loop ends

End


*/
#include <stdio.h>

void DisplayEvenFactor(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)   // updater
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iNo / 2; iCnt++)
    {
        if ((iNo % iCnt == 0) && (iCnt % 2 == 0))
        {
            printf("Factor is %d \n", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter Number:\n");
    scanf("%d", &iValue);

    DisplayEvenFactor(iValue);

    return 0;
}
