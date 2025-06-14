////////////////////////////////////////////////////////////////////////////
//
//  Flie Name   : program23.c 
//  Description : Check Whether a Number is Even or Odd
//  input       : integer
//  output      : String
//  Author      : Prashant Balasaheb Mungase 
//  Date        : 14/06/2025
//
//////////////////////////////////////////////////////////////////////////////

/*
        Start
               Accept Number From User 

               Using  if else Condition

               Check if the Number is Divisible by 3 or 5
                  remaider is 0

                if Number is  Divisible 
                  Display Divisible 
                if Number is  Not Divisible 
                    Display  Not Divisible 

        Stop         
                  
*/

#include<stdio.h>
#include<stdbool.h>

bool checkEven( int iNo)
{ 
  if(((iNo % 3)==0)&&((iNo %5 )==0))
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
    bool bRet =false;
    printf("Enter the  Number: ");
    scanf("%d",&iValue);
    
    
    bRet  =checkEven(iValue);

    if(bRet == true)
    {
        printf("Number is Divisible 3 or 5 %d\n:",iValue );
    }
    else
    {
        printf("Number is not Disivible 3 or 5  %d\n:",iValue);
    }

    return 0;
    

}

