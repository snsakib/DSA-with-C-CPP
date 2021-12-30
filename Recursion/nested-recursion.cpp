#include <stdio.h>
#include <iostream>

using namespace std;

int A(int n)
{
    if (n > 0)
    {
        printf("%d\n", n);
        A(A(n - 1));
    }
};

int main()
{
    int n = 5;
    A(n);
    return 0;
}