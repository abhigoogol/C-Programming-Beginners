#include <stdio.h>

typedef char MYSTRING;

typedef struct node {
    //int * lp;
    int data;
    //int * rp;
} MYNODE;

int main()
{
    int i = 10;
    MYSTRING mystring[20] = "Hello";
    MYNODE a;
    a.data = 5;

    printf("%d\n", i);
    printf("mystring = %s\n", mystring);
    printf("a.data = %d\n", a.data);
    return 0;
}
