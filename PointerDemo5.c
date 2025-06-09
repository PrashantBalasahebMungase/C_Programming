/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//
//  Flie Name   :  ProgramDemo5.c 
//  Description :  Program to demonstrate single, double and triple pointers pointing to the same integer variable               
//  Author      :  Prashant Balasaheb Mungase 
//  Dete        :  9/06/2025
//  Input       :  Integer
//  Output      :  Address and value outputs
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
    Start 

            Step 1 : Create a integer variable No1 and assign it a value.

            Step 2 : Create a pointer P pointing to No1.

            Step 3 : Create a double pointer Q pointing to P

            Step 4 : Create a triple pointer r pointing to Q.

            Step 5 :  Print the value of No1 using

                Direct variable

                Single pointer *P

                Double pointer **Q

                Triple pointer ***r

    End 
*/
#include<stdio.h>
int main()
{
    int No1 =11;
    int *P = &No1;
    int **Q =&P;
    int ***r = &Q;

    printf("%d\n",No1);
    printf("%d\n",*P);
    printf("%d\n",**Q);
    printf("%d\n",***r);

    return 0;
}