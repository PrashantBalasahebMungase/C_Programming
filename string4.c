
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//
//  File Name   :  string4.c
//  Description :  Prints each character of a string one by one using a pointer
//  Author      :  Prashant Balasaheb Mungase
//  Date        :  9/06/2025
//  Input       :  Hello
//  Output      :  H e l l o
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
    Start

            Step 1 : Initialize a string with "Hello".

            Step 2 : Set a pointer to the first character of the string.

            Step 3 : Print the character pointed by the pointer.

            Step 4 : Move the pointer to the next character.

            Step 5 : Repeat steps 4-5 until all characters are printed.

    End 


*/
#include<stdio.h>
int main()
{
    char Arr[]= "Hello";
    char *ptr = Arr ;
    printf("%c\t",*ptr);
    ptr++;

    printf("%c\t",*ptr);
    ptr++;

    printf("%c\t",*ptr);
    ptr++;

    printf("%c\t",*ptr);
    ptr++;
    printf("%c\t",*ptr);
    ptr++;
    
    return 0;
}