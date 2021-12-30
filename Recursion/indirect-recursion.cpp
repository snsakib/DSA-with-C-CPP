#include <stdio.h>
#include <iostream>

using namespace std;
void B(int n);

void A(int n)
{
    if (n > 0)
    {
        printf("%d\n", n);
        B(n - 1);
    }
};

void B(int n)
{
    if (n > 0)
    {
        printf("%d\n", n);
        A(n - 1);
    }
};

int main()
{
    int n = 3;
    A(n);
    return 0;
}
