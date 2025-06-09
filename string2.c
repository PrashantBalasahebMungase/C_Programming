/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//
// File Name   :   string2.c
//  Description :  Demonstrates string length and size using strlen() and sizeof()
//  Author      :  Prashant Balasaheb Mungase
//  Date        :  9/06/2025
//  Input       :  None
//  Output      :  Prints length and size of strings stored in character arrays
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
    Start the program.

            Step 1 : Create and initialize two character arrays with string literals.

            Step 2 : Use strlen() to print the length of each string (excluding null character).

            Step 3 : Use sizeof() to print the size of each array (including null character).

            End the program.
*/

#include<stdio.h>
#include<string.h>
int main()
{
    char Brr [] = " Jay Ganesh";

    char Crr [] = "Parshant";


    printf("Length of string is : %d\n",strlen(Brr) );
    printf(" size of string is : %d\n",sizeof (Brr));

    printf("Length of string is : %d\n",strlen(Crr));
    printf("size of string is : %d\n",sizeof(Crr));
    

    return 0;
}