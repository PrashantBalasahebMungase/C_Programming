//////////////////////////////////////////////////////////////////
//
//  File Name   : program57.c 
//  Description : Display numbers from -N to N.
//  Input       : 5
//  Output      : -5  -4  -3  -2  -1  0  1  2  3  4  5
//  Author      : Prashant Balasaheb Mungase 
//  Date        : 18/06/2025
//
////////////////////////////////////////////////////////////////////////////

/*   
Start 
         Step 1 : Accept frequency from user iNo  
         Step 2 : If iNo is negative, convert it to positive
         Step 3 : Set iCnt = -iNo
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

     
     for(iCnt = -iNo; iCnt <= 0; iCnt++)  // N
     {
        printf(" %d\t",iCnt);
        
     } 
      for(iCnt = 1; iCnt <= iNo; iCnt++)  // N
     {
        printf(" %d\t",iCnt);
        
     } 

     
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