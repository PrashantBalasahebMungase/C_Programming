
////////////////////////////////////////////////////////////////////////////
//
//  Flie Name   : program30.c 
//  Description : Calculate Factorial of N Number  
//  input       : integer
//  output      : String
//  Author      : Prashant Balasaheb Mungase 
//  Dete        : 15/06/2025
//
//////////////////////////////////////////////////////////////////////////////

/*
 Start

Step 1: Take a number from the user and store 
        int iValue

Step 2: Set another variable iFact = 1 

Step 3: Repeat steps 5 to 6 from i = 1 to iValue

Step 4: Multiply iFact = iFact * i

Step 5: Increase i by 1

Step 6: After the loop ends, iFact contains the factorial

Step 7: Display the value of iFact

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
  iCnt = 1;
  while( iCnt <= iNo )
  {
    iFact =iFact * iCnt ;
    iCnt ++ ;
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