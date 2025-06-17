
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
//  File Name   : program50.c 
//  Description : Adds all even digits from the given integer.
//  Input       : Integer 
//  Output      : Sum of even digits
//  Author      : Prashant Balasaheb Mungase 
//  Date        : 17/06/2025
//
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
    Start
            
            
            Step 1 : Accept an integer from the user -> iNo  

            Step 2 : Initialize sum -> iSum = 0  

            Step 3 : Repeat while iNo != 0 
                        Extract digit -> iDigit = iNo % 10  
                        If digit is even -> iSum = iSum + iDigit  
                        Update number -> iNo = iNo / 10  

            Step 5 : Display iSum  
    End
 */   
#include<stdio.h>

int AdditionEvenDigit(int iNo)
{
    int iDigit = 0;
    
     int iSum = 0;
    while(iNo != 0)
    {
       
        iDigit = iNo % 10 ;
        if ((iDigit % 2) == 0)
        {
         iSum = iSum  + iDigit ;

        }
        iNo = iNo / 10;
        
    }
    return iSum;
}

int main()
{

    int iValue = 0;
    int iRet = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

   iRet = AdditionEvenDigit(iValue);

   printf("Number of Digit Are : %d\n",iRet);

        return 0;
}
