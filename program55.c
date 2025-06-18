/////////////////////////////////////////////////////////////////
//
//  File Name   : program55.c 
//  Description : Display numbers on the screen from N to 1.
//  Input       : 5
//  Output      : 5  4  3  2  1 
//  Author      : Prashant Balasaheb Mungase 
//  Date        : 18/06/2025
//
////////////////////////////////////////////////////////////////////////////

/*   
Start 
         Step 1 : Accept frequency from user  iNo  
         Step 2 : If iNo is negative, convert it to positive
         Step 3 : Set iCnt = 1
         Step 4 : Repeat till iCnt >= iNo
         Step 5 : Print iCnt
         Step 6 : Decrement iCnt by 1
    

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

     for(iCnt = iNo;  iCnt >= 1 ;iCnt--)
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