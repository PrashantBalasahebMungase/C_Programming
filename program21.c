////////////////////////////////////////////////////////////////////////////
//
//  Flie Name   : program21.c 
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

               Check if the Number is Divisible by 2
                Divide by 2  and remaider is 0

                if Number is  Even or Odd
                  Display Even Or Odd
                if Number is Even
                    Display The True
                if Number is Odd
                    Display The False

        Stop         
                  
*/

#include<stdio.h>
#include<stdbool.h>

bool checkEven( int iNo)
{ 
    return ((iNo % 2) == 0);
}

int main()
{
    int iValue = 0;
    bool bRet = false;
    printf("Enter the  Number: ");
    scanf("%d",&iValue);
    
    
    bRet  =checkEven(iValue);

    if(bRet == true)
    {
        printf("Number is Even %d:",iValue );
    }
    else
    {
        printf("Number is Odd %d:",iValue);
    }

    return 0;
    

}