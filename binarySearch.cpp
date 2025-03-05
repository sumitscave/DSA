#include <bits/stdc++.h>
using namespace std;
int bs(vector<int> &arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] < target)
        {

            start = mid + 1;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            return mid;
        }

    }
    return -1;

}
int main()
{

    vector<int> a = {3, 7, 9, 11, 15};
    int n = 11;
    cout << bs(a, n);

    return 0;
}