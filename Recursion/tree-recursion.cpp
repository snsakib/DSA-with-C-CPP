#include <stdio.h>
#include <iostream>

using namespace std;

// Tree recursion
void fun(int n)
{
    if (n > 0)
    {
        printf("%d\n", n);
        fun(n - 1);
        fun(n - 1);
    }
};

int main()
{
    int n = 3;
    fun(n);
    return 0;
}