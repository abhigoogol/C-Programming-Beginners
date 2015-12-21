#include <stdio.h>

int main(int argc, char* argv[])
{
    printf("What is argc = %d\n", argc);   
    
    int i = 0;

    for(i = 0; i < argc; i++)
    {
        printf("argument[%d] = %s\n", i, argv[i]);
    }
    return 0;
}
