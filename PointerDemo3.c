//////////////////////////////////////////////////////////////////////////////////////////
//
//
//  Flie Name   :  ProgramDemo3.c 
//  Description :  Program to show use of void pointer with different data types
//  Author      :  Prashant Balasaheb Mungase 
//  Dete        :  9/06/2025
//  Input       :  Integer
//  Output      :  Address and value outputs
//
////////////////////////////////////////////////////////////////////////////////////////////

/*
    Start 

            Step 1 : Create a variables of typesas
                         char, int, float, double.

            Step 2 : Create a void pointer p and initialize it to NULL.

            Step 3 : Assign the address of ch to p and print the value by typecasting.

            Step 4 : Assign the address of no to p and print the value by typecasting.

     End
*/
#include<stdio.h>
int main()
{
    char ch = 'A';
    int no = 11;
    float f = 90.90f;
    double d = 90.9999;

    void *p = NULL;
    p = &ch;
    printf("%c\n",*(char*)p);

    p = &no;
    printf("%d\n",*(int*)p);

    return 0;


}