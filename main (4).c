/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <stdio.h>

int main()
{
    int i, sum = 0;

    for(i = 1; i <= 10; i++)
    {
        sum = sum + i;
    }

    printf("Sum = %d", sum);

    return 0;
}
