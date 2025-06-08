//////////////////////////////////////////////////////////////////////////////////////////
//
//
//  Flie Name   :  program3.c 
//  Description :  Addition of two number
//  Author      :  Prashant Balasaheb Mungase 
//  Dete        :  8/06/2025
//  Input       :  Integer
//  Output      :  Integer
//
//////////////////////////////////////////////////////////////////////////////////////////

/* 
    Start  
            Step 1 : Define a function named Addition that takes two numbers A and B

            Step 2 : Inside the function:
                      Add the two numbers -> Add = A + B
                         Return the result Add

             Step 3 : In the main function:
                         Declare three integer variables: No1, No2, and Ans
                             Assign values 
                                 No1 = 12  No2 = 13
                         Call the function Addition(No1, No2) and store the result in Ans
                             Display the result Ans on Screen 

    End 

*/
#include<stdio.h>                            
int Addition( int A, int B)            
{                                     
                                        
    int Add = 0;                         
    Add = A+B;
    return Add;

}
int main()
                                   
 
{
int No1 =12, No2 = 13, Ans = 0;         

Ans = Addition(No1,No2);                   
                                            
printf("Addition is :%d\n",Ans);             

    return 0;
}
