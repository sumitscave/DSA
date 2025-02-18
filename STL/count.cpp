#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {2, 3, 2, 1, 5, 4, 4, 4, 4, 2};
    cout << count(v.begin(), v.end(), 4);
    return 0;
}