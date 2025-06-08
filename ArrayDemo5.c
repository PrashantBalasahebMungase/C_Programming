//////////////////////////////////////////////////////////////////////////////////////////
//
//
//  Flie Name   :  ArreyDemo5.c 
//  Description :  Displays memory size of arrays with different data types using sizeof
//  Author      :  Prashant Balasaheb Mungase 
//  Dete        :  8/06/2025
//  Input       :  Integer
//  Output      :  Integer
//
//////////////////////////////////////////////////////////////////////////////////////////

/*
     Start

               Step 1 : Declare a char array chArr with elements 'A', 'B', 'C'

               Step 2 : Declare an int array iArr with elements 20, 30, 20

               Step 3 : Declare a float array fArr with elements 10.1, 12.3, 13.4

               Step 4 : Declare a double array dArr with elements 10.001, 11.002, 12.098

               Step 5 : Use sizeof() to calculate and print the total size (in bytes) of chArr

               Step 6 : Use sizeof() to calculate and print the total size (in bytes) of iArr

               Step 7 : Use sizeof() to calculate and print the total size (in bytes) of fArr

               Step 8 : Use sizeof() to calculate and print the total size (in bytes) of dArr

    End


*/
#include<stdio.h>
int main()
{
     char chArr[] = {'A','B','C'};
     int iArr[] = { 20,30,20};
     float fArr[] = { 10.1,12.3,13.4};
     double dArr[] = { 10.001,11.002,12.098};

     printf("%d\n",sizeof (chArr));
     printf("%d\n",sizeof(iArr));
     printf("%d\n",sizeof (fArr));
     printf("%d\n",sizeof(dArr));
     
     return 0;
     

}