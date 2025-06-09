/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//
//  File Name   :  string3.c
//  Description :  Calculates the length of a string using a custom function and shows the size of the string array
//  Author      :  Prashant Balasaheb Mungase
//  Date        :  9/06/2025
//  Input       :  None
//  Output      :  Prints length and size of strings stored in character arrays
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
        Start 

            Step 1 : Create and initialize a string array.

            Step 2 : Use a custom function to count characters until the null terminator.

            Step 3 : Print the length returned by the function.

            Step 4 : Print the size of the string array using sizeof().

        End 
*/
#include<stdio.h>

int strlenX(char *Brr)
{
    int dCnt = 0;

    while(*Brr !='\0')
    {
        dCnt++;
        *Brr++;

    }
    return dCnt;

}
int main()

{
    char Crr[]= "jay ganesh";
    int ret = 0;

     ret = strlenY(Crr);
    printf("Length of string is : %d\n",ret);
    printf("size of string is : %d\n",sizeof (Crr));

   //printf("Length of string is :%d\n",(Crr));

    

    return 0;

}