
//////////////////////////////////////////////////////////////////////////////////////////
//
//
//  Flie Name   :  ArreyDemo2.c 
//  Description :  Accept an array of integers and display each element
//  Author      :  Prashant Balasaheb Mungase 
//  Dete        :  8/06/2025
//  Input       :  Integer
//  Output      :  Integer
//
//////////////////////////////////////////////////////////////////////////////////////////

/*
    Start 
            Step 1: Declare and initialize integer array Arr 
                        Size of [4] with values {10, 20, 30, 40}
            
            Step 2: Use sizeof(Arr) to calculate the total size of the array in bytes 

            Step 3: Print the base address of the array using Arr

            Step 4: Print the address of the array as a whole using &Arr

            Step 5: Print the address of the second element using Arr + 1

            Step 6: Print the address  after the entire array using &Arr + 1
            
    End 

*/
#include<stdio.h>
int main()
{

    int Arr [4] = { 10,20,30,40};

    printf(" %lu\n",sizeof (Arr));           

    printf("%lu \n",Arr);
    printf("%lu \n",&Arr);
    printf(" %lu\n",Arr+1);
    printf("%lu\n",(&Arr)+1);

    return 0;
}
