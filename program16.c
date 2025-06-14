
/
/////////////////////////////////////////////////////////////////////////////
//
//  Flie Name :   program16.c 
//  Description : Accept the  Sequince number 
//  input :       intager
//  output:       integer Number
//  Author:       Prashant Balasaheb Mungase 
//   Date        : 14/06/2025
//
//////////////////////////////////////////////////////////////////////////////
/*
write the program from user input and print the number  

        Start 
                Accept the input from user
                    Display the Number
                
                
        Stop 
*/

#include<stdio.h>
    // Iteration

void Display( int iNo)
{
    int iCnt = 0;
    for (iCnt = 1 ; iCnt <=iNo; iCnt++)
    {
        printf(" %d \n",iCnt);
    }
}
int main()
{
     int iCntValue = 0;
     printf(" Enter the iCntValue :");

     scanf("%d",&iCntValue);

    Display(iCntValue);
    return 0;
}