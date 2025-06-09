//////////////////////////////////////////////////////////////////////////////////////////
//
//
//  Flie Name   :  ProgramDemo1.c 
//  Description :  Pointer demonstration
//  Author      :  Prashant Balasaheb Mungase 
//  Dete        :  9/06/2025
//  Input       :  Integer
//  Output      :  Address and value outputs
//
////////////////////////////////////////////////////////////////////////////////////////////

/*
        Step 1: Start the program.

            Step 2: Create  an integer variable 
                        No and initialize it to 11.

            Step 3: Create a pointer as 
                    integer P and assign it the address of No.

            Step 4: Display the value of No.

            Step 5: Display the value pointed to by P (i.e., *P).

            Step 6: Display the address of No.

            Step 7: Display the value of pointer P (which is the address of no).

            Step 8: Display the address of pointer variable p 

            Step 9: Display the size of the variable no using sizeof(No).

            Step 10: Display the size of the pointer p using sizeof(N).

            Step 11: Display the size of the value pointed to by P using sizeof(*p).

        Step 12: End the program.


*/
#include<stdio.h>
int main()
{
    int No = 11;
    int *P = &No;

    printf("%d\n",No);
    printf("%d\n",*P);

    printf("%d\n",&No);
    printf("%d\n",P);

    printf("%d\n",&P);

    printf("%d\n",sizeof(No));
    printf("%d\n",sizeof(P));
    printf("%d\n",sizeof(*P));

    return 0;

}