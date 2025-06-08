
//////////////////////////////////////////////////////////////////////////////////////////
//
//
//  Flie Name   :  ArreyDemo4.c 
//  Description :  Display different ways to use and update arrays in C.
//  Author      :  Prashant Balasaheb Mungase 
//  Dete        :  8/06/2025
//  Input       :  Integer
//  Output      :  Integer
//
//////////////////////////////////////////////////////////////////////////////////////////
/*
    Start 

            Step 1: Declare and initialize an array Arr[4] with values {10, 20, 30, 40}

            Step 2: Declare and initialize another array Brr[] with the same values without specifying the size

            Step 3: Declare array Crr[4] without initial values

            Step 4: Manually assign values to Crr[0], Crr[1], Crr[2], and Crr[3]

            Step 5: Declare array Drr[6] with partial initialization {10, 20, 30, 40}
                        Remaining two elements (Drr[4], Drr[5]) are garbage (or 0 in global scope 
                            uninitialized in local scope)

            Step 6: Print the first element of all four arrays (Arr, Brr, Crr, Drr)

            Step 7: Print uninitialized values of Drr[4] and Drr[5]

            Step 8: Assign values 50 to Drr[4] and 60 to Drr[5]

            Step 9: Print updated values of Drr[4] and Drr[5]

    End 
    */
#include<stdio.h>
int main()
{
    int Arr[4] = { 10,20,30,40};
    int Brr[] = {10,20,30,40};
    int Crr[4];

    Crr[0] = 10;
    Crr[1] = 20;
    Crr[2] = 30;
    Crr[3] = 40;

    int Drr[6] = { 10,20,30,40};

    printf(" %d\n",Arr[0]);
    printf("%d\n",Brr[0]);
    printf("%d\n",Crr[0]);
    printf("%d\n",Drr[0]);

    printf("%d\n",Drr[4]);
    printf("%d\n",Drr[5]);

    Drr[4] = 50;
    Drr[5] = 60;

    printf("%d\n",Drr[4]);
    printf("%d\n",Drr[5]);

    return 0;

}