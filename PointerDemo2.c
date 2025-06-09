//////////////////////////////////////////////////////////////////////////////////////////
//
//
//  Flie Name   :  ProgramDemo2.c 
//  Description :  Program to show use of pointers with different data types
//  Author      :  Prashant Balasaheb Mungase 
//  Dete        :  9/06/2025
//  Input       :  Integer
//  Output      :  Address and value outputs
//
////////////////////////////////////////////////////////////////////////////////////////////
/*
    Start 

            Step 1 : Create  variables of types as 
                        char, int, float, and double.

            Step 2 : Create pointers for each variable and assign their addresses.

            Step 3 : Print the values using the pointers.

    End
*/
#include<stdio.h>
int main()
{
    char ch = 'A';
    char *ptr1 = &ch;

    int no = 11;
    int *ptr2 =&no;

    float f = 90.90f;
    float *ptr3 = &f;

    double d = 90.99999;
    double *ptr4 = &d;

    printf("%c\n",*ptr1);
    printf("%d\n",*ptr2);
    printf("%f\n",*ptr3);
    printf("%f\n",*ptr4);

    return 0;
}