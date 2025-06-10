/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   :  selection2.c
//  Description :  This program accepts marks from the user and checks whether the student is pass or fail.
//  Author      :  Prashant Balasaheb Mungase
//  Date        :  10/06/2025
//  Input       :  Integer (marks)
//  Output      :  Displays whether the student is pass or fail based on marks
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
    Start 

            Step 1 : Include the header file stdio.h

            Step 2 : Define a function DisplayResult(int value)
                    - If value < 35, print "You are fail"
                    - Else, print "You are pass"

            Step 3 : In main(), declare an integer variable 'marks'

            Step 4 : Prompt the user to enter marks

            Step 5 : Accept the input using scanf()

            Step 6 : Call the function DisplayResult(marks)

            Step 7 : Print "End of application"
           


    End
 */ 
#include<stdio.h>
void DisplayResult(int value )
{
    if(value <35)
    {
        printf("you are fail\n");

    }
    else
    {
        printf("you are pass \n");
    }
}  
    int main()
    {
        int marks = 0;
        printf("Enter your marks:\n");
        scanf("%d",&marks);

        DisplayResult(marks);
        printf("End of application\n");

    
    return 0;
}