
/////////////////////////////////////////////////////////////////
//
//  File Name   : program42.c 
//  Description :Check whether the number is Prime or not.
//  Input       : Integer
//  Output      : Prime / Not Prime
//  Author      : Prashant Balasaheb Mungase 
//  Date        : 16/06/2025
//
////////////////////////////////////////////////////////////////////////////
/*
    Start

            Step 1: Accept a number from the user -> iValue

            Step 2: If iValue is less than or equal to 1
                    ->It is not a Prime Number
                    ->Go to Step 6

            Step 3: Initialize i = 2

            Step 4: Repeat while i <= iValue / 2
                    -> If iValue % i == 0
                        ->It is not a Prime Number
                        -> Go to Step 6
                    ->Increment i by 1

            Step 5: If no such i divides iValue
                    -> It is a Prime Number

            Step 6: Display the result

End

*/

#include<stdio.h>
#include<stdbool.h>

 bool checkPrime(int iNo)
{
    int iCnt =0;
    bool bFlag = true ;
    if(iNo < 0)
    {
        iNo =-iNo ;
    }
      for(iCnt = 2 ; iCnt <= (iNo /2 ); iCnt)
    {
        if((iNo % iCnt) == 0)
        {
            bFlag = false ;
            break ;
        }
    }
    return bFlag;


}

int main()
{

    int iValue = 0;
    bool bRet = false;
    printf("Enetr the Number :\n");
    scanf("%d",&iValue);

    bRet = checkPrime(iValue);
    if(bRet == true )
    {
        printf("%d is a Prime Number ",iValue);
    }
    else
    {
        printf("%d is Not Prime Number ",iValue);
    }


    return 0;
}