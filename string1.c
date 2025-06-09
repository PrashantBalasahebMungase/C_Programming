/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//
// File Name   :   string1.c
//  Description :  Demonstrates string initialization and printing using character arrays
//  Author      :  Prashant Balasaheb Mungase
//  Date        :  9/06/2025
//  Input       :  None
//  Output      :  Prints strings stored in character arrays
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*  
    Start

                Step 1 :  Create  and initialize three character arrays as strings.

                    Step 2 : Print each string 
                                 Using printf with %s.

     End 


*/
#include<stdio.h>
int main()
{
    char Arr [] = {'A','D','C','\0'};

    char Brr [4] = {'J','A','Y','\0'};
    char Crr [] = "HALLO ";


    printf("%s\n",Arr);
    printf("%s\n",Brr);
    printf("%s\n",Crr);

    return 0;
}