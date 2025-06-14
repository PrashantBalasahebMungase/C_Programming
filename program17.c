

/////////////////////////////////////////////////////////////////////////////
//
//  Flie Name     : program17.c 
//  Description   : print the Number in Sequince format in Down to Up 
//  input         : intager
//  output        : integer Number
//  Author        : Prashant Balasaheb Mungase 
//  Date        : 14/06/2025
//
//////////////////////////////////////////////////////////////////////////////
/*
write the program from user input and print the number in down to up  

        Start 
                Accept the input from user
                    Display the Number
                print the number in dowm to up 
                
        Stop 
*/
#include<stdio.h>
    // Iteration

void Display( int iNo)
{
    int iCnt = 0;
    for (iCnt = iNo ; iCnt >= 1; iCnt--)
    {
        printf("%d\n",iCnt);
    }
    
}
int main()
{
     int iCntValue = 0;
     printf(" Enter the friquncy :");
     scanf("%d",&iCntValue);

    Display(iCntValue);
    return 0;
}

