
////////////////////////////////////////////////////////////////////////////
//
//  Flie Name   : program31.c 
//  Description : Calculate Factorial of N Number  
//  input       : integer
//  output      : String
//  Author      : Prashant Balasaheb Mungase 
//  Dete        : 15/06/2025
//
//////////////////////////////////////////////////////////////////////////////

/*
  Start

  Step 1: Accept a number from the user 
          int = iValue

  Step 2: Initialize a variable 'iFact' to 1

  Step 3: Use a loop from i = 1 to iValue
          -> In each iteration, multiply iFact = iFact * i

  Step 4: After the loop ends, 'iFact' holds the factorial result

  Step 5: Display the value of 'iFact'

   End

*/

End

  */
#include<stdio.h>
#define ERR_INVALID -1

unsigned long Factorial(unsigned int iNo)
{
  int iCnt = 0;
   unsigned long iFact = 1;

  if (iNo < 0 )
  {
    return  ERR_INVALID ;
  }
  for( iCnt = iNo; iCnt >= 1 ; iCnt --)
  {
    iFact =iFact * iCnt ;
  }
  return iFact ;
}
int main()
{
 unsigned int iValue = 0;
 unsigned long iRet = 0;

printf("Enter Number : \n");
scanf("%u",&iValue);

iRet = Factorial(iValue);
if (iRet ==  ERR_INVALID)
{
  printf("Invalid input \n" );
}
else
{
  printf("Factorial is :%lu\n",iRet);
}
return 0;
}