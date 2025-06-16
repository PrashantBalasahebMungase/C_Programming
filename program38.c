/////////////////////////////////////////////////////////////////
//
//  File Name   : program38.c 
//  Description : Check whether the given number is Perfect  
//  Input       : Integer
//  Output      : Sum of Factors
//  Author      : Prashant Balasaheb Mungase 
//  Date        : 16/06/2025
//
////////////////////////////////////////////////////////////////////////////
/*
Start

        Step 1 : Accept a number from the user ->iValue

        Step 2 : If the number is negative, convert it to positive

        Step 3 : Initialize iSum = 0

        Step 4 : Repeat from i = 1 to i <= iValue / 2
                    -> If iValue % i == 0 (i is a factor)
                    -> Add i to iSum

        Step 5 : After the loop, compare:
                ->If iSum == iValue, then it's a Perfect Number
                -> Else, it is not a Perfect Number

        Step 6 : Display the result

End

*/

#include<stdio.h>
#include<stdbool.h>

int  CheckPerfect(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    if (iNo < 0)
    {
        iNo = -iNo ;
    }



    for (iCnt = 1; iCnt <=(iNo/2); iCnt ++)
    {
        if ((iNo % iCnt)==0)
        {
            iSum = iSum + iCnt ;
        }
       
    }
     
    if (iSum == iNo)
    {
        return true ;
    }
    else 
    {
        return false;
    }
}
int main()
{
int iValue = 0;
 bool bRet = 0;

printf("Enter Number :\n");
scanf("%d",&iValue);

 bRet = CheckPerfect(iValue);
 if (bRet == true)
 {
    printf("%d is perfect number \n",iValue);
 }
 else
 {
    printf("%d is not perfect number \n",iValue);
 }

return 0;
}

//error



