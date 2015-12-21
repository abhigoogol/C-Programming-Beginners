#include <stdio.h>

int add(int a, int b)
{
    int sum;
    sum = a + b;
    return sum;
}

int main()
{
    int result;

    int (*myFunction)(int, int);
    myFunction = &add;
    result = myFunction(4, 5);
    
    printf("result = %d\n", result);

    return 0;
}
