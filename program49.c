/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
//  File Name   : program49.c 
//  Description : Counts the number of digits in the given integer.
//  Input       : Integer 
//  Output      : Total number of digits
//  Author      : Prashant Balasaheb Mungase 
//  Date        : 17/06/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
    Start
            
            
            Step 1 : Accept an integer from the user -> iNo  

            Step 2 : Initialize counter -> iCnt = 0  

            Step 3 : Repeat while iNo != 0  
                        Extract digit -> Digit = iNo % 10  
                        If digit is even -> increment iCnt  
                        Update number -> iNo = iNo / 10  

            Step 4 : Display iCnt  

    End
*/
#include<stdio.h>

int CountEvenDigit(int iNo)
{
    int Digit = 0;
     int iCnt = 0;
    while(iNo != 0)
    {
       
        Digit = iNo % 10 ;
        if ((Digit % 2) == 0)
        {
         iCnt++;
        }
        iNo = iNo / 10;
        
    }
    return iCnt ;
}

int main()
{

    int iValue = 0;
    int iRet = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet = CountEvenDigit(iValue);

      printf("Number of Digit Are : %d\n",iRet);

        return 0;
}
