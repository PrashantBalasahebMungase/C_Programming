
//////////////////////////////////////////////////////////////////////////////////////////
//
//
//  Flie Name   :  program2.c 
//  Description :  Acpet input from user and Addition of two number
//  Author      :  Prashant Balasaheb Mungase 
//  Dete        :  8/06/2025
//  Input       :  Integer
//  Output      :  Integer
//
//////////////////////////////////////////////////////////////////////////////////////////


/*  
        Start 
                
                Step 1: Declare three integer variables
                           No1, No2, Ans
                           
                Step 2: Display message 
                          Enter the first value

                Step 3: Accept input from user and store it in No1

                Step 4: Display message
                         Enter the second value
                Step 5: Accept input from user and store it in No2

                Step 6: Perform addition
                         Ans = No1 + No2
                         
                Step 7: Display result
                         Addition is: Ans
                
        End
                 


*/
#include<stdio.h>

int main()
{

    int No1 = 0;
    int No2 = 0;
    int Ans = 0;                            
                                                
    printf("Enter the first value:\n ");
    scanf("%d",&No1);

    printf("Enter the second value :\n");
    scanf("%d",&No2);

    Ans = No1 + No2;
    printf("Addition  is :%d\n",Ans);

    return 0;
}
