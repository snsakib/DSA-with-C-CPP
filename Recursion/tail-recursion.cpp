#include <stdio.h>
#include <iostream>

using namespace std;

void fun(int n)
{
    if (n > 0)
    {
        printf("%d\n", n);
        fun(n-1);
    }
}

int main()
{
    int n = 5;
    fun(n);
    return 0;
}

