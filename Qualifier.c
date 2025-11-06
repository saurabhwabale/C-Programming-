#include<stdio.h>

int main()
{
    int iNo = 10;
    const int iNo2 = 20;

    //Below lines generates errors

    iNo1++;          //iNo = iNo1 + 1;
    iNo2++;          //iNo = iNo2 + 1;  error


iNo2 = 30;  //error

return 0;


}