////////////////////////////////////////////////////////////////////////////
//
//  Flie Name   : program22.c 
//  Description : Check Whether a Number is Divisible OR not 
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

               Check if the Number is Divisible 
                Divide by 5  and remaider is 0

                if Number is Divisible
                  Display Divisible
                if Number is  Not Divisible 
                    Display The Not Divisible


        Stop         
                  
*/

#include<stdio.h>
#include<stdbool.h>

bool checkEven( int iNo)
{ 
  if((iNo % 5)==0)
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
        printf("Number is Divisible %d:",iValue );
    }
    else
    {
        printf("Number is Not Disivible  %d:",iValue);
    }

    return 0;
}