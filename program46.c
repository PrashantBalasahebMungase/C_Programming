/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : program46.c 
//  Description : Displays each digit of the number and shows the updated number after removing the last digit.
//  Input       : Integer 
//  Output      : Individual digits and updated number after each step
//  Author      : Prashant Balasaheb Mungase 
//  Date        : 17/06/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
    Start
            

            Step 1: Accept an integer number from the user  
                    And store variable iNo

            Step 2: Repeat the following steps until iNo becomes 0:

            Step 3: Extract the last digit using iDigit = iNo % 10

            Step 4 :  Display the extracted digit (iDigit)

            Step 5 :  Update the number using iNo = iNo / 10

            Step 6 : Display the updated number

            


End
*/

#include<stdio.h>

void DisplayDigit(int iNo)
{
    int iDigit = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo / 10;

        
    }
}

int main()
{

    int iValue = 0;
    printf("Enter Number :\n");
    scanf("%d",&iValue);

     DisplayDigit(iValue);

        return 0;
}
