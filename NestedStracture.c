#include<stdio.>

struct Demo
{
    int i;
    float f;
};

struct Hello
{
    int no;
    float marks;
    struct Demo dobj;       //Nested
};
int main()
{
    printf("Size of hello stracture is : %lu\n",sizeof(struct Hello)); 
    return 0;
}  