/////////////////////////////////////////////////////////////////
//
//  File Name   : program44.c 
//  Description :Check whether the number is Prime or not.
//  Input       : Integer
//  Output      : Prime / Not Prime
//  Author      : Prashant Balasaheb Mungase 
//  Date        : 16/06/2025
//
////////////////////////////////////////////////////////////////////////////
/*
    Start

            Step 1: Accept an integer from the user -> iValue

            Step 2: If iValue < 0
                    -> Convert it to positive

            Step 3: If iValue <= 1
                    -> It is not a Prime number
                    -> Terminate

            Step 4: Run loop from i = 2 to i <= iValue / 2
                    -> If iValue % i == 0
                        -> Not a Prime number
                        -> Terminate loop

            Step 5: If no such divisor is found
                    -> It is a Prime number

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

    return(iCnt > (iNo / 2));
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