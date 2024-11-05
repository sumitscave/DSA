#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> arr, int target)
{

    int start = 0;
    int end = arr.size() - 1;

    while (start <= end)
    {

        int mid = start + (end - start) / 2;

        if (arr[mid] > target)
        {
            start = mid + 1;
        }
        else if (arr[mid] < target)
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

    vector<int> nums = {1, 2, 4, 5, 6};
    int target = 4;

    int result = binarySearch(nums, target);
    cout << result;
    return 0;
}