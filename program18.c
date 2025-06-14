


/////////////////////////////////////////////////////////////////////////////
//
//  Flie Name     : program17.c 
//  Description   : print the Number in Sequince format in Down to Up 
//  input         : intager
//  output        : integer Number
//  Author        : Prashant Balasaheb Mungase 
//  Date        : 14/06/2025
//
//////////////////////////////////////////////////////////////////////////////
/*
write the program from user input and print the number in down to up  

       Start

                Step 1 : Accept a number from the user 
                    
                Step 2 : If iNo <= 0, display "Invalid input" and stop

                Step 3 : Repeat from iNo to 1:

                Step 4 : Print the number

Stop
*/

#include<stdio.h>
    // Iteration

int Calculate( int iNo)
{
    int iCnt = 0 , iSum = 0;

    for(iCnt = 1 ; iCnt <= iNo; iCnt++)
    {
        iSum = iSum + iCnt;
    }
  return iSum;  
}
int main()
{
     int iValue = 0, iRet = 0;
     printf(" Enter the friquncy :\n");
     scanf("%d",&iValue);

     iRet = Calculate(iValue);

     printf("Sumition is %d\n",iRet);

    return 0;
}