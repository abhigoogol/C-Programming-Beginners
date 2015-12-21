#include <stdio.h>

typedef char MYSTRING;

int main()
{
    int i = 10;
    MYSTRING mystring[20] = "Hello";

    printf("%d\n", i);
    printf("%s\n", mystring);
    return 0;
}
