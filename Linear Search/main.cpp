#include <bits/stdc++.h>
using namespace std;
int linearSearch(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return i;
        }
    }

    return -1;
}
int main()
{

    int arr[] = {2, 3, 4, 10, 40, 60};
    int x = 60;

    int n = sizeof(arr) / sizeof(arr[0]);

    int result = linearSearch(arr, n, x);
    cout << result;
    return 0;
}