

/////////////////////////////////////////////////////////////////
//
//  File Name   : program43.c 
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
                -.> It is not a prime number
                -> Go to Step 6

        Step 3: Initialize a loop counter i = 2

        Step 4: Repeat while i <= iValue / 2
                -> If iValue % i == 0
                    -> It is not a prime number
                    -> Go to Step 6
                -> Increment i by 1

        Step 5: If no divisor is found in the loop
                -> It is a prime number

        Step 6: Display the result

End
*/

#include<stdio.h>
#include<stdbool.h>

 bool checkPrime(int iNo)
{
    int iCnt =0;
    
    if(iNo < 0)
    {
        iNo =-iNo ;
    }
      for(iCnt = 2 ; iCnt <= (iNo /2 ); iCnt)
    {
        if((iNo % iCnt) == 0)
        {
            
            break ;
        }
    }
    if(iCnt > (iNo / 2))
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