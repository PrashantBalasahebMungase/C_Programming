/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   :  selection1.c
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

            Step 2 : Define the main() function

            Step 3 : Create an integer variable as 'marks'

            Step 4 : Prompt the user to enter marks

            Step 5 : Accept input using scanf()

            Step 6 : If marks < 35, print "You are fail"
                                               
            Step 7 : Else, print "You are pass"

           


    End
 */ 

#include<stdio.h>
int main()
{
    int marks  = 0;
    printf("Enter your marks :\n");
    scanf("%d\n",&marks );

    if (marks < 35)
    {
        printf("you are fail\n");

    }
    else 
    {
        printf(" you are pass \n");

    }
    return 0;

}