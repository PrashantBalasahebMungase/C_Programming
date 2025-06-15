///////////////////////////////////////////////////////////////////////////
//
//  Flie Name   : program35.c 
//  Description : Calculate Factorial of N Number  
//  input       : integer
//  output      : String
//  Author      : Prashant Balasaheb Mungase 
//  Date        : 15/06/2025
//
//////////////////////////////////////////////////////////////////////////////
/*
Start

Step 1: Accept a number from the user 
         int = iValue

Step 2: If the number is negative, convert it to positive

Step 3: Run a loop from i = 1 to i < iValue

Step 4: For each i:
        - If iValue % i == 0 → Print "Factor is i"
        - Else → Print "Non-Factor is i"

Step 5: Repeat until loop ends

End

*/

#include<stdio.h>

void DisplayFactorsNonFactors(int iNo)
{
    int iCnt = 0;
    if (iNo < 0)   // updator
    {
        iNo = -iNo ;
    }

    for(iCnt = 1; iCnt < iNo; iCnt ++)
    {
        if((iNo %iCnt)==0)
        {
            printf(" Factor is %d\n",iCnt);
            
        }
        else
        {
            printf(" Non Factor is %d\n",iCnt);
        }
    }

}
int main()
{
int iValue = 0;
printf("Enter Number :\n");
scanf("%d",&iValue);

DisplayFactorsNonFactors(iValue);


return 0;
}