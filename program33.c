////////////////////////////////////////////////////////////////////////////
//
//  Flie Name   : program33.c 
//  Description : Calculate Factorial of N Number  
//  input       : integer
//  output      : String
//  Author      : Prashant Balasaheb Mungase 
//  Dete        : 15/06/2025
//
//////////////////////////////////////////////////////////////////////////////
/*
Start

Step 1: Accept a number from the user and store it in iValue

Step 2: If the number is negative, convert it to positive

Step 3: Run a loop from i = 1 to iValue - 1

Step 4: In each iteration, check if iValue % i == 0
        → If yes, print i (it is a factor)

Step 5: End the loop and stop

End
*/

#include<stdio.h>

void DisplayFactors(int iNo)
{
    int iCnt = 0;
    if (iNo < 0)   // updator
    {
        iNo = -iNo ;
    }

    for(iCnt = 1; iCnt < iNo ; iCnt ++)
    {
        if((iNo %iCnt)==0)
        {
            printf("%d\n",iCnt);
            
        }
    }

}
int main()
{
int iValue = 0;
printf("Enter Number :\n");
scanf("%d",&iValue);

DisplayFactors(iValue);


return 0;
}