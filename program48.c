
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
//  File Name   : program48.c 
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
                    a) Update iNo = iNo / 10  
                    b) Increment iCnt  

            Step 4 : Display iCnt  
    End
*/
#include<stdio.h>

int  CountDigit(int iNo)
{
    
     int iCnt = 0;
    while(iNo != 0)
    {
       
        
        iNo = iNo / 10;
        iCnt++ ;
    }
    return iCnt ;
}

int main()
{

    int iValue = 0;
    int iRet = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet = CountDigit(iValue);
      printf("Number of Digit Are : %d\n",iRet);

        return 0;
}

