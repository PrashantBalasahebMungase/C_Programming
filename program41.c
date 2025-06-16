
/////////////////////////////////////////////////////////////////
//
//  File Name   : program41.c 
//  Description : Check whether the given number is Perfect
//  Input       : Integer
//  Output      : Prime / Not Prime
//  Author      : Prashant Balasaheb Mungase 
//  Date        : 16/06/2025
//
////////////////////////////////////////////////////////////////////////////
/*
    Start

            Step 1: Accept a number from the user -> iValue

            Step 2: If iValue is negative
                    -> Convert it to positive

            Step 3: Initialize iSum = 0

            Step 4: Repeat from i = 1 to i <= iValue / 2
                    -> If iValue % i == 0 (i is a factor)
                        -> Add i to iSum

            Step 5: Compare iSum with iValue
                    -> If iSum == iValue
                        -> It is a Perfect Number
                    -> Else
                        -> It is Not a Perfect Number

            Step 6: Display the result

End
*/
#include<stdio.h>
#include<stdbool.h>

 bool checkPerfect(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    if(iNo < 0)
    {
        iNo = - iNo ;
    }
    for(iCnt = 1; iCnt <= iNo/2; iCnt ++)

    if((iNo % iCnt)==0)
    {
        iSum = iSum + iCnt ;
    }
    if (iNo == iSum)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{

    int iValue = 0;
    bool bRet = false;
    printf("Enetr the Number :\n");
    scanf("%d",&iValue);

    bRet = checkPerfect(iValue);
    if(bRet == true )
    {
        printf("%d is a Perfect Number ",iValue);
    }
    else
    {
        printf("%d is Not Perfect Number ",iValue);
    }


    return 0;
}