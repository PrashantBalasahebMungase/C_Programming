/////////////////////////////////////////////////////////////////
//
//  File Name   : program54.c 
//  Description : Display numbers on the screen from 1 to N.
//  Input       : Integer
//  Output      : 1   2   3   4   ...
//  Author      : Prashant Balasaheb Mungase 
//  Date        : 18/06/2025
//
////////////////////////////////////////////////////////////////////////////

/*   
Start 
         Step 1 : Accept frequency from user  iNo  
         Step 2 : If iNo is negative, convert it to positive
         Step 3 : Set iCnt = 1
         Step 4 : Repeat till iCnt <= iNo
         Step 5 : Print iCnt
         Step 6 : Increment iCnt by 1
    

End
*/

#include<stdio.h>

void Display(int iNo)
{
     int iCnt = 0;
     if(iNo < 0)
     {
        iNo = - iNo ;
     }

     for(iCnt = 1; iCnt <= iNo ; iCnt++)
     {
        printf("%d\t",iCnt);
     } 
     printf("\n");
}
int main()
{

    int iValue =0;

    printf("Enter Frequncy :\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}

// Time Complexcity O(N)
// N is natuiral number
// wwere N >= And  N<= Infinity