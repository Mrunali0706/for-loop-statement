/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i;

    for(i = 10; i <= 100; i = i + 10)
    {
        printf("Battery: %d%%\n", i);
    }

    printf("Battery Fully Charged!\n");

    return 0;
}