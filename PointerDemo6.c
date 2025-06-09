/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//
//  Flie Name   :  ProgramDemo6.c 
//  Description :  Demonstrates single to quintuple pointers to the same float variable and prints values and addresses         
//  Author      :  Prashant Balasaheb Mungase 
//  Dete        :  9/06/2025
//  Input       :  Integer
//  Output      :  Address and value outputs
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
        Start 

                 Step 1 : Create a float variable F and initialize it.

                 Step 2 : Create pointers P, Q, R, S, 
                             T with increasing pointer levels 
                                Each pointing to the previous pointer.

                 Step 3 : Print the value of F by dereferencing pointers from single to quintuple levels.

                 Step 4 : Print the address of pointer P and the address stored in P (address of F).

        End 
*/

#include<stdio.h>
int main()
{
    float F = 11.111f;
     float *P = &F;
     float **Q = &P;
     float ***R = &Q;
     float ****S = &R;
     float *****T = &S;

     printf("%f\n",F);
     printf("%f\n",*P);
     printf("%f\n",*Q);
     printf("%f\n",***R);
     printf("%f\n",****S);
     printf("%f\n",*****T);


     printf("%f\n",&P);
     printf("%f\n",&(*P));

     return 0;

}