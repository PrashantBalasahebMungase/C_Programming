


////////////////////////////////////////////////////////////////////////////
//
//  Flie Name   : program28.c 
//  Description : Calculate Factorial of N Number  
//  input       : integer
//  output      : String
//  Author      : Prashant Balasaheb Mungase 
//  Dete        : 11/05/2025
//
//////////////////////////////////////////////////////////////////////////////

/*
        Start
               Accept The Number From User        

                Calculate Factorial of N Number 
                  Declare The Varible 
                    iValue  = 0
                    iRet    = 0 

                  iValue Store the input From user 
                  iRet is Store the Result of Factorial

                Call The Function Factorial(iValue)
                  Declare Varible
                    int iCnt
                    int iFact
                    Use a loop from  iCnt = 1 to iNo
                After The Loop ends , return iFact 
                  print Fa ctorial Result in (iRet)  
        Stop         
  */
#include<stdio.h>
#define ERR_INVALID -1

int Factorial(unsigned int iNo)
{
  int iCnt = 0;
  int iFact = 1;

  if (iNo < 0 )
  {
    return  ERR_INVALID ;
  }
  for( iCnt = 1; iCnt <= iNo ; iCnt ++)
  {
    iFact =iFact * iCnt ;
  }
  return iFact ;
}
int main()
{
 unsigned int iValue = 0;
int iRet = 0;

printf("Enter Number : \n");
scanf("%u",&iValue);

iRet = Factorial(iValue);
if (iRet ==  ERR_INVALID)
{
  printf("Invalid input \n" );
}
else
{
  printf("Factorial is :%d\n",iRet);
}
return 0;
}