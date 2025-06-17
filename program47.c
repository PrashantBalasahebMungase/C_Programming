/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
//  File Name   : program47.c 
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

            Step 2 : Initialize counter iCnt = 0  

            Step 3 : Repeat while iNo != 0  

            Step 4 : Extract digit -> iDigit = iNo % 10  

            Step 5 : Increment counter -> iCnt++  

            Step 6 : Update number -> iNo = iNo / 10 

            Step 7 : Display iCnt  
              
            


    End
*/

#include<stdio.h>

int  CountDigit(int iNo)
{
    int iDigit = 0;
     int iCnt = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        iCnt++ ;

    }
    return iCnt;
}

int main()
{

    int iValue = 0;
    int iRet = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

     iRet = CountDigit(iValue);
    printf("Number of Digit Are %d:\n",iRet);

        return 0;
}
