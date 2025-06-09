//////////////////////////////////////////////////////////////////////////////////////////
//
//
//  Flie Name   :  ProgramDemo4.c 
//  Description :  Program to show how two pointers can point to the same variable
//  Author      :  Prashant Balasaheb Mungase 
//  Dete        :  9/06/2025
//  Input       :  Integer
//  Output      :  Address and value outputs
//
////////////////////////////////////////////////////////////////////////////////////////////

/*
        Start 

                Step 1 : Create  a integer variable
                             No1 and assign a value 

                Step 2 : Create two integer pointers p and q
                            Assign both with the address of no.

                Step 3 : Print the value of no using both pointers *p and *q.

        End 
*/
#include<stdio.h>
int main()
{
    int No1 = 11 ;

    int *p = &No1 ;
    int *q = &No1;
     
    printf("%d\n",*p);
    printf("%d\n",*q);

    return 0;

}