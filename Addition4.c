//////////////////////////////////////////////////////////////////////////////////////////
//
//
//  Flie Name   :  program4.c 
//  Description :   Accept input from user and Addition of two number
//  Author      :  Prashant Balasaheb Mungase 
//  Dete        :  8/06/2025
//  Input       :  Integer
//  Output      :  Integer
//
//////////////////////////////////////////////////////////////////////////////////////////


/*   
    Start 


                
                Step 1 : Define a function name  as Addition 
                          Create a local variable A and B

                Step 2 : Inside the function
                          -> Add the two numbers and store the result in Add
                          -> Return Add to the caller

                Step 3 :  In the main function:

                Step 4 : Declare three integer variables as 
                         No1, No2, and Ans

                Step 5 :  Display message 
                          Enter the first number

                Step 6 : Read the first number and store it in No1

                Step 7 : Display massage 
                         Enter the second number

                Step 8 : Read the second number and store it in No2

                Step 9 : Call the Addition function using No1 and No2  
                           store the result in Ans

                Step 10 : Print the value of Ans as the result

    End 


*/
#include<stdio.h>
int Addition( int A, int B)
{
  int Add = 0;                          
  Add  =  A + B;
  return Add;

}

int main()
{
     int No1 = 0;
     int No2 = 0;
     int Ans = 0;
     
     printf("Enter the first number :\n");
     scanf("%d",&No1);                           
                                                   
     printf(" Enter the second number : \n");
     scanf("%d",&No2);
     
     Ans = Addition ( No1,No2);

     printf("Addition is %d\n",Ans);

    return 0;
}