/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int x = 5;
    int *y = &x;
    
    printf("%d\n", x);
    printf("%u\n", &x);
    printf("%u\n", y);
    printf("%d\n", *y);
    printf("%u\n", &y);
    //printf("%d\n", x);
    
    return 0;
}
