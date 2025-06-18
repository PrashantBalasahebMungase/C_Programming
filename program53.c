/////////////////////////////////////////////////////////////////
//
//  File Name   : program53.c 
//  Description : Display '$' symbol on the screen N times.
//  Input       : Integer
//  Output      : $   $   $   $
//  Author      : Prashant Balasaheb Mungase 
//  Date        : 18/06/20255
//
////////////////////////////////////////////////////////////////////////////

/*   
Start 
         Step 1 : Accept frequency from user  iNo  
         Step 2 : If iNo is negative, convert it to positive
         Step 3 : Set iCnt = 1
         Step 4 : Repeat till iCnt <= iNo
         Step 5 : Print "$"
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
        printf("$\t");
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
