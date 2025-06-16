///////////////////////////////////////////////////////////////////////////
//
//  File Name   : program37.c 
//  Description : Display Sum of Factors of a Number  
//  Input       : Integer
//  Output      : Sum of Factors
//  Author      : Prashant Balasaheb Mungase 
//  Date        : 16/06/2025
//
////////////////////////////////////////////////////////////////////////////
/*
Start

Step 1: Accept a number from the user → iValue

Step 2: If the number is negative, convert it to positive

Step 3: Initialize iSum = 0

Step 4: Run a loop from i = 1 to i <= iValue / 2
        -> For each i:
            -> If iValue % i == 0 (i is a factor)
              -> Add i to iSum

Step 5: After the loop ends, iSum will contain the sum of all factors

Step 6: Display iSum


End
*/

#include <stdio.h>

int SumFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number:\n");
    scanf("%d", &iValue);

    iRet = SumFactors(iValue);
    printf("Addition of Factors is: %d\n", iRet);

    return 0;
}
