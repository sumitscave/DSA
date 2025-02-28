#include <bits/stdc++.h>
using namespace std;
void oneToN(int n)
{
    if (n > 0)
    {
        oneToN(n - 1);
        cout << n << endl;
    }

    return;
}
void nToOne(int n)
{
    if (n > 0)
    {
        cout << n << endl;
        nToOne(n - 1);
    }

    return;
}
int main()
{
    oneToN(10);
    nToOne(10);
    return 0;
}