
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   :  selection4.c
//  Description :  This program accepts the student's standard (class) and displays their exam time using switch-case.
//  Author      :  Prashant Balasaheb Mungase
//  Date        :  10/06/2025
//  Input       :  Integer 
//  Output      :  Displays exam time based on standard
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
    Start
            Step 1 : Include the header file stdio.h

            Step 2 : Define the main() function

            Step 3 : Declare an integer variable 'std'

            Step 4 : Prompt the user to enter their standard

            Step 5 : Accept input using scanf()

            Step 6 : Use switch-case to:
                    - If std = 1, print "Your exam is at 9 AM"
                    - If std = 2, print "Your exam is at 10 AM"
                    - If std = 3, print "Your exam is at 11 AM"
                    - If std = 4, print "Your exam is at 12 noon"
                    - Otherwise, print "Wrong input"

    End

  */         

#include<stdio.h>
int main()
{
    int std = 0;
    printf("Please enter the your standard :\n");
    scanf("%d",&std);

    switch(std)
    {
        case 1 :
        printf("your exam is at 9 AM\n");

        break;

        case 2:
        printf("Your exam is at 10AM\n");
        
        break ;

        case 3:
        printf("your exam is at 11AM\n");

        break;

        case 4 :
        printf("your exam is at 12noon\n");

        break ;

        default :
        printf("Wrong input\n");

    }
    return 0;

}