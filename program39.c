
/////////////////////////////////////////////////////////////////
//
//  File Name   : program39.c 
//  Description : Check whether the given number is Prime 
//  Input       : Integer
//  Output      : Prime / Not Prime
//  Author      : Prashant Balasaheb Mungase 
//  Date        : 16/06/2025
//
////////////////////////////////////////////////////////////////////////////
/*
Start

Step 1: Accept an integer from the user → iValue

Step 2: If iValue <= 1
        ->It is not a prime number
        ->Go to Step 5

Step 3: Repeat from i = 2 to i <= iValue / 2
        -> If iValue % i == 0
            -> It is not a prime number
            -> Go to Step 5

Step 4: If no such divisor is found
        -> It is a prime number

Step 5: Display the result



End
*/
#include<stdio.h>
#include<stdbool.h>

int  CheckPrime(int iNo)
{
    int iCnt = 0;
    bool bFlag = true;

    if (iNo < 0)
    {
        iNo = -iNo ;
    }

    for (iCnt = 2; iCnt <=(iNo/2); iCnt ++)
    {
        if ((iNo % iCnt)==0)
        {
            bFlag = false;
            break ;
        }
    }
     
    return bFlag;
}
int main()
{
int iValue = 0;
 bool bRet = 0;

printf("Enter Number :\n");
scanf("%d",&iValue);

 bRet = CheckPrime(iValue);
 if (bRet == true)
 {
    printf("%d is prime number \n",iValue);
 }
 else
 {
    printf("%d is not prime number \n",iValue);
 }

return 0;
}





