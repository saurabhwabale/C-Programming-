#include<stdio.h>

int main()
{ 
    int iNo1= 10;
    const int iNo2 = 20;
     //below lines generate errors

    iNo++; //iNo1 = iNO1+1;
    iNo2++; // iNO2 = iNo2+1;     // error

    iNo2 = 30;

    

















    return 0;
}