#include<stdio.h>

int main()

{
    char Div='\0';
    int Age='\0';
    int i='\10';
    float a=15.20;
    double f=18.7218951062134721013;


    printf("Enter Your Division:\n");
    scanf("%c",& Div);

    printf("Enter your Age:\n");
    scanf("%d",& Age);

    printf("Your Division is:%c\n",Div);
    printf("Your Age is:%d\n",Age);

    printf("%d\n",sizeof(Div));
    printf("%d\n",sizeof(Age));
    printf("%d\n",sizeof(i));
    printf("%d\n",sizeof(a));
    printf("%lf",sizeof(f));


    return 0;

}
