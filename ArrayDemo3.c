
//////////////////////////////////////////////////////////////////////////////////////////
//
//
//  Flie Name   :  ArreyDemo3.c 
//  Description :  Accept an array of integers and display each element
//  Author      :  Prashant Balasaheb Mungase 
//  Dete        :  8/06/2025
//  Input       :  Integer
//  Output      :  Integer
//
//////////////////////////////////////////////////////////////////////////////////////////

/*  
        Stert 
                Step 1: Declare the integer array Arr 
                            with 4 elements: {20, 25, 35, 40}

                Step 2: Access the 3rd element of the array (Arr[2]) using:
                             Arr[2] (normal indexing)

                            *(Arr + 2) (pointer arithmetic)

                            *(2 + Arr) (commutative pointer arithmetic)

                                2[Arr] (valid alternate syntax)
                                
                Step 3: Print the result of each method
*/
#include<stdio.h>
int main()

{
    int Arr[4]= { 20,25,35,40};
    printf("%d\n",Arr[2]);
    printf("%d\n",*(Arr+2));
    printf("%d\n",*(2+Arr));
    printf("%d\n",2[Arr]);

    return 0;

}