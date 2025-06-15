////////////////////////////////////////////////////////////////////////////
//
//  Flie Name   : program34.c 
//  Description : Calculate Factorial of N Number  
//  input       : integer
//  output      : String
//  Author      : Prashant Balasaheb Mungase 
//  Dete        : 15/06/2025
//
//////////////////////////////////////////////////////////////////////////////
/*

Start

Step 1: Accept an integer number from the user and store it in iValue

Step 2: If the number is negative, convert it to positive

Step 3: Run a loop from i = 1 to i <= iValue / 2

Step 4: In each iteration, check:
        If iValue % i == 0 → Then i is a factor, print it

Step 5: Continue until the loop ends

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

    for(iCnt = 1; iCnt <=(iNo / 2); iCnt ++)
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