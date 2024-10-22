#include <bits/stdc++.h>
using namespace std;
int main()
{

    // given an array of integers find element which appears more than n/2 times

    int arr[] = {2, 2, 3, 3, 1, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == arr[i])
            {
                count++;
            }
        }

        if (count > n / 2)
        {
            cout << arr[i];
            break;
        }
    }

    return 0;
}