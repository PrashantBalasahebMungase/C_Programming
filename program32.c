
////////////////////////////////////////////////////////////////////////////
//
//  Flie Name   : program32.c 
//  Description : Calculate Factorial of N Number  
//  input       : integer
//  output      : String
//  Author      : Prashant Balasaheb Mungase 
//  Dete        : 15/06/2025
//
//////////////////////////////////////////////////////////////////////////////

/*
Start

Step 1: Accept a number from the user (store it in iValue)

Step 2: Initialize iFact = 1

Step 3: Run a loop from i = 1 to iValue
        -> In each iteration, multiply iFact = iFact * i

Step 4: After the loop ends, iFact holds the factorial result

Step 5: Display iFact

End
*/

#include<stdio.h>

void DisplayFactors(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt < iNo ; iCnt ++)
    {
        if((iNo %iCnt)==0)
        {
            printf("%d\n",iCnt);
            printf("%d\n",iCnt);
        }
    }

}
int main()
{
int iValue = 0;
printf("enter Number :\n");
scanf("%d",&iValue);

DisplayFactors(iValue);


return 0;

}